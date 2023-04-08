// There is a row of N walls in Geeksland. The king of Geeksland ordered Alexa to color all the walls on the occasion of New Year. Alexa can color each wall with either pink, black, or yellow.
//  The cost associated with coloring each wall with a particular color is represented by a 2D array colors of size N*3 , where colors[i][0], colors[i][1], and colors[i][2] is the cost of painting ith wall with colors pink, black, and yellow respectively.

// You need to find the minimum cost to color all the walls such that no two adjacent walls have the same color.

// Example 1:

// Input:
// N = 3
// colors[][] = {{14, 2, 11},
//              {11, 14, 5},
//              {14, 3, 10}}
// Output:
// 10
// Explanation:
// Color wall 0 with black. Cost = 2. 
// Color wall 1 with yellow. Cost = 5. 
// Color wall 2 with black. Cost = 3.
// Total Cost = 2 + 5 + 3 = 10
// Example 2:

// Input:
// N = 2
// colors[][] = {{1, 2, 3},
//              {1, 4, 6}}
// Output:
// 3
// Explanation:
// Color wall 0 with black. Cost = 2
// Color wall 1 with pink. Cost = 1
// Total Cost = 1 + 2 = 3



// Answer 

// Algorithm



// Step 1 = There are three color options for each wall P B Y 
// Step 2 = Now we have to choose the min cost in the color and paint that wall
// Step 3 = If the prev wall is painted with the color y then that color should not repeate again in the next wall
// Step 4 = Remaining the two walls like P and B 
// Step 5 = Now find the min in P and B
// Step 6 = Now one color is choose so remain the P AND Y (Suppose the color choose is B )
// Step 7 = Now we have to choose the min color and paint the wall associated with that color


// wall 1 = {14,2,11} = {PINK,BLACK,YELLOW} Minimum 2 painted BLACK
// wall 2 = {11, 14, 5} = {PINK,BLACK*,YELLOW}  Minimum 5 painted Y (*Adjacent wall is discarded) 
// wall 3 = {14,3,10} = PINK,BLACK,YELLOW* Minimum 3 Painted black  (*Adjacent wall is discarded)

// 2+5+3







// 	int paintinlesscost(vector<vector<int>> &colors, int N)
//         {
            
//         if(N==0)
//         {
// 	    return 0;
//         }
        
//         //p=0,b=1,y=2
//         //Now we have to paint the each wall by checking the min cost in the walls
//         vector<vector<int>> store_the_cost_of_color(N,vector<int>(3,0));

//         //Pink
//         store_the_cost_of_color[0][0] = colors[0][0];
//         //Black
//         store_the_cost_of_color[0][1] = colors[0][1];
//         //Yellow
//         store_the_cost_of_color[0][2] = colors[0][2];
//         //{wall 1 = {14,2,11} = {PINK,BLACK,YELLOW}}
        
//         for(int i=1;i<N;i++)
//         {
//         //Now the first wall has been painted
//         store_the_cost_of_color[i][0] = min(store_the_cost_of_color[i-1][1],store_the_cost_of_color[i-1][2])+ colors[i][0];
//         store_the_cost_of_color[i][1] = min(store_the_cost_of_color[i-1][0],store_the_cost_of_color[i-1][2])+ colors[i][1];
//         store_the_cost_of_color[i][2] = min(store_the_cost_of_color[i-1][1],store_the_cost_of_color[i-1][0])+ colors[i][2];
//         }
//         return min(store_the_cost_of_color[N-1][0],min(store_the_cost_of_color[N-1][1],store_the_cost_of_color[N-1][2])); 
//     }
//     int minCost(vector<vector<int>> &colors, int N) {
        
//         return paintinlesscost(colors,N);
//     }
 