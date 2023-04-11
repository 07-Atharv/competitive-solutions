console.log("Maps in javascript");
// maps = key value pairs , we can use any type of key or value
const myMap = new Map();
console.log(myMap);

let k1 = "myString",
  k2 = {},
  k3 = function () {};

// setting or inserting the values in the map

myMap.set(k1, "This is atharv powalkar");
myMap.set(k2, "This is object");
myMap.set(k3, "This is inside the function");

// getting the values froom map

// console.log(myMap.get(k1));
// console.log(myMap.get(k2));
// console.log(myMap.get(k3));
// console.log(myMap.size);

// to get the keys

for (let key of myMap.keys()) {
  console.log(key);
}

// to get the values

for (let key of myMap.values()) {
  console.log(key);
}

// loop through the map using for each

// myMap.forEach((value,key)=>{
//     console.log("Key is :",key);
//     console.log("Value is ",value);
// });
myMap.forEach(function (value, key) {
  console.log("Key is :", key);
  console.log("Value is ", value);
});

// convert the map into  arrays
let marr = Array.from(myMap);
console.log("Whole array is :", marr);

let sarr = Array.from(myMap.keys());
console.log("Keys are", sarr);

let tarr = Array.from(myMap.values());
console.log("Values are s", marr);
