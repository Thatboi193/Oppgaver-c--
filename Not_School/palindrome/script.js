function checkFilled() {
    if (document.getElementById("text-input").value=="") {
        alert("Please input a value")
    } else {
        //dumb
    }
    
}

let input;
let reverseInput;
let formatInput;

function palindromeCheck() {
    input = document.getElementById("text-input").value;
    formatInput = input.toLowerCase().replace(/[^a-z0-9]/g, "");
    reverseInput = Array.from(formatInput).reverse().join("");

    if (formatInput == reverseInput) {
        document.getElementById("result").innerText = input + " is a palindrome";
    } else {
        document.getElementById("result").innerText = input + " is not a palindrome";
    }
    
}