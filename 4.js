// Function as a variable
const sayHello = function() {
    return "Hello!";
  };
  
  // Function as an argument
  function greetUser(greetingFunction) {
    return greetingFunction();
  }
  
  // Function as a return value of another function
  function getGreetingFunction() {
    return function(name) {
      return `Hello, ${name}!`;
    };
  }
  
  // Calling functions and using them as variables, arguments, and return values
  console.log(sayHello());
  console.log(greetUser(sayHello));
  const greetWithNameFunction = getGreetingFunction();
  console.log(greetWithNameFunction("Vicky"));
  