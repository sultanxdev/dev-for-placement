// JavaScript initial examples: 5 topics with code snippets

// ============================================
// TOPIC 1: Variables and Data Types
// ============================================
// Variables: var, let, const
var oldStyle = "var - function scoped";
let blockScoped = "let - block scoped";
const cannotChange = "const - cannot be reassigned";

// Data Types: String, Number, Boolean, Null, Undefined, Object, Symbol
let stringType = "Hello World";
let numberType = 42;
let booleanType = true;
let nullType = null;
let undefinedType = undefined;
let objectType = { name: "John", age: 30 };
let arrayType = [1, 2, 3, 4, 5];

console.log("Topic 1: Variables and Data Types");
console.log("String:", stringType);
console.log("Number:", numberType);
console.log("Boolean:", booleanType);
console.log("Object:", objectType);
console.log("Array:", arrayType);


// ============================================
// TOPIC 2: Functions
// ============================================
// Function Declaration
function greet(name) {
  return `Hello, ${name}!`;
}

// Function Expression
const add = function (a, b) {
  return a + b;
};

// Arrow Function (ES6)
const multiply = (x, y) => x * y;

// Function with Default Parameters
function introduce(name = "Guest", age = 18) {
  return `Name: ${name}, Age: ${age}`;
}

console.log("\nTopic 2: Functions");
console.log(greet("Alice"));
console.log("Add 5 + 3:", add(5, 3));
console.log("Multiply 4 * 5:", multiply(4, 5));
console.log(introduce("Bob", 25));


// ============================================
// TOPIC 3: Control Flow (if/else, loops)
// ============================================
// if/else conditional
let age = 20;
if (age >= 18) {
  console.log("\nTopic 3: Control Flow");
  console.log("You are an adult");
} else {
  console.log("You are a minor");
}

// switch statement
let day = "Monday";
switch (day) {
  case "Monday":
    console.log("Start of work week");
    break;
  case "Friday":
    console.log("Almost weekend");
    break;
  default:
    console.log("Mid-week day");
}

// for loop
console.log("For loop - Numbers 1 to 5:");
for (let i = 1; i <= 5; i++) {
  console.log(i);
}

// while loop
console.log("While loop - Count down from 3:");
let count = 3;
while (count > 0) {
  console.log(count);
  count--;
}

// for...of loop (iterating over values)
const fruits = ["Apple", "Banana", "Orange"];
console.log("For...of loop - Fruits:");
for (const fruit of fruits) {
  console.log(fruit);
}


// ============================================
// TOPIC 4: Objects and Arrays
// ============================================
// Creating Objects
const person = {
  name: "John Doe",
  age: 30,
  email: "john@example.com",
  greet: function () {
    return `Hi, I'm ${this.name}`;
  },
};

// Accessing Object Properties
console.log("\nTopic 4: Objects and Arrays");
console.log("Person Name:", person.name);
console.log("Person Email:", person["email"]);
console.log(person.greet());

// Working with Arrays
const numbers = [10, 20, 30, 40, 50];
console.log("Array:", numbers);
console.log("First element:", numbers[0]);
console.log("Array length:", numbers.length);

// Array Methods
console.log("Array Methods:");
console.log("Push (add element):", [...numbers, 60]);
console.log("Map (double each):", numbers.map((n) => n * 2));
console.log("Filter (>25):", numbers.filter((n) => n > 25));
console.log("Reduce (sum):", numbers.reduce((sum, n) => sum + n, 0));


// ============================================
// TOPIC 5: DOM Manipulation and ES6 Features
// ============================================
// Template Literals
const firstName = "Jane";
const lastName = "Smith";
const fullName = `${firstName} ${lastName}`;
console.log("\nTopic 5: DOM and ES6 Features");
console.log("Template Literal:", fullName);

// Destructuring (Arrays)
const [first, second, ...rest] = [1, 2, 3, 4, 5];
console.log("Destructuring - First:", first, "Second:", second, "Rest:", rest);

// Destructuring (Objects)
const { name: personName, age: personAge } = person;
console.log("Object Destructuring - Name:", personName, "Age:", personAge);

// Spread Operator
const arr1 = [1, 2, 3];
const arr2 = [4, 5, 6];
const combinedArray = [...arr1, ...arr2];
console.log("Spread Operator - Combined:", combinedArray);

// Classes (ES6)
class Animal {
  constructor(name) {
    this.name = name;
  }

  speak() {
    return `${this.name} makes a sound`;
  }
}

const dog = new Animal("Dog");
console.log(dog.speak());

// Note: For DOM manipulation in a browser environment:
// document.getElementById('id')
// document.querySelector('.class')
// element.addEventListener('click', function() {})
// element.innerHTML = 'content'

// 1. Variables and data types
const name = 'Alice';
const age = 25;
const isStudent = true;
console.log('Name:', name, 'Age:', age, 'Student:', isStudent);

// 2. Functions
function greet(person) {
  return `Hello, ${person}!`;
}
console.log(greet(name));

