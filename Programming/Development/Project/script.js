let display = document.getElementById("inputBox");
let buttons = document.querySelectorAll("button");

let buttonArray = Array.from(buttons);
let string = " ";
// loop for every value
buttonArray.forEach((btn) => {
  btn.addEventListener("click", (e) => {
    if (e.target.innerHTML == "DEL") {
      string = string.substring(0, string.length - 1);
      display.value = string;
    } else if (e.target.innerHTML == "AC") {
      string = "";
      display.value = string;
    } else if (e.target.innerHTML == "=") {
      string = eval(string);
      display.value = string;
    } else if (e.target.innerHTML == "÷") {
      string += "/";
      display.value = string;
    } else {
      // for storing the button value
      string += e.target.innerHTML;
      // for displaying button values
      display.value = string;
    }
    // console.log(e.target.innerHTML);
  });
});
