bool checkvalid(int x, int y, vector<vector<bool>> &visited, int prev, vector<vector<int>> &next)
{
    int size = visited.size();
    int min = visited[0].size();
    return x >= 0 && y >= 0 && x < size && !visited[x][y] && prev <= next[x][y];
}
int water_flow(vector<vector<int>> &mat, int n, int m)
{
    // To mnake the queue for the Indian ocean
    queue<pair<int, int>> store;
    int count = 0;
    // make a vector to keep the track of the visited or not visited and make the values all the true which we can possibly go to indian ocean
    vector<vector<bool>> check_visited(n, vector<bool>(m, false));
    for (int i = 0; i < m; i++)
    {
        store.push({0, i});
        check_visited[0][i] = 1;
        // These is for top edge indian ocean
    }
    for (int i = 1; i < n; i++)
    {
        store.push({i, 0});
        check_visited[i][0] = 1;
        // These is for top edge indian ocean
    }
    // Store all the values which from where we can reach to indian ocean
    map<pair<int, int>, int> io;
    while (!store.empty())
    {
        // From where we can go store that into the queue
        pair<int, int> p = store.front();
        // I=ROW AnD J=COLUmn
        int i = p.first, j = p.second;
        store.pop();
        io[{i, j}] = true;
        check_visited[i][j] = true;
        // RIGHT
        if (checkvalid(i + 1, j, check_visited, mat[i][j], mat))
        {
            check_visited[i + 1][j] = true;
            store.push({i + 1, j});
        }
        // LEFT
        if (checkvalid(i - 1, j, check_visited, mat[i][j], mat))
        {
            check_visited[i - 1][j] = 1;
            store.push({i - 1, j});
        }
        // BOTTOm
        if (checkvalid(i, j - 1, check_visited, mat[i][j], mat))
        {
            check_visited[i][j - 1] = 1;
            store.push({i, j - 1});
        }
        // TOP
        if (checkvalid(i, j + 1, check_visited, mat[i][j], mat))
        {
            check_visited[i][j + 1] = 1;
            store.push({i, j + 1});
        }
    }
    vector<vector<bool>> vi(n, vector<bool>(m, false));
    for (int i = 0; i < n; i++)
    {
        q.push({i, m - 1});
        vi[i][m - 1] = true;
    }
    for (int j = 0; j < m - 1; j++)
    {
        q.push({n - 1, j});
        vi[n - 1][j] = 1;
    }
    int cnt = 0;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        int i = p.first, j = p.second;
        q.pop();
        if (io[{i, j}])
        {
            cnt++;
        }
        vi[i][j] = true;
        if (valid(i + 1, j, vi, mat[i][j], mat))
        {
            vi[i + 1][j] = true;
            q.push({i + 1, j});
        }
        if (valid(i - 1, j, vi, mat[i][j], mat))
        {
            vi[i - 1][j] = 1;
            q.push({i - 1, j});
        }
        if (valid(i, j - 1, vi, mat[i][j], mat))
        {
            vi[i][j - 1] = 1;
            q.push({i, j - 1});
        }
        if (valid(i, j + 1, vi, mat[i][j], mat))
        {
            vi[i][j + 1] = 1;
            q.push({i, j + 1});
        }
    }
    return cnt;
}