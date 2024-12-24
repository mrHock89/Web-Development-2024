let display = document.getElementById("inputBox");
let buttons = document.querySelectorAll("button");

let buttonArray = Array.from(buttons);
let string = "";

// sanitize the string
const sanitizeInput = (input) => {
  if (/^0[0-9]/.test(input)) {
    input = input.replace(/^0+/, "");
  }
  return input;
};
// loop for every value
buttonArray.forEach((btn) => {
  btn.addEventListener("click", (e) => {
    const btnValue = e.target.innerHTML;
    if (btnValue == "DEL") {
      string = string.substring(0, string.length - 1);
    } else if (btnValue == "AC") {
      string = "";
    } else if (btnValue == "=") {
      try {
        string = eval(string).toString();
      } catch (error) {
        string = "Error";
      }
    } else if (btnValue == "÷") {
      string += "/";
    } else {
      // for storing the button value
      string += btnValue;
      string = sanitizeInput(string);
      // for displaying button values
    }
    display.value = string;
    // console.log(e.target.innerHTML);
  });
});
