function insertDashes(num) {
  const str = num.toString(); // Convert the number to a string
  let result = str.charAt(0);

  for (let i = 1; i < str.length; i++) {
    if (str.charAt(i - 1) % 2 === 0 && str.charAt(i) % 2 === 0) {
      result += '-' + str.charAt(i);
    } else {
      result += str.charAt(i);
    }
  }

  return result;
}

// Example usage
//const num = 025468;
const num = prompt("enter the number : ");
const dashedNum = insertDashes(num);
document.write(dashedNum);
