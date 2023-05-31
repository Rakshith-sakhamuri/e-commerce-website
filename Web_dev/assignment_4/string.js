function capitalizeString(str) {
  return str.replace(/\b\w/g, (char) => char.toUpperCase());
}

// Example usage
//const str = 'rakshith sakhamuri';
const str = prompt("Enter the string : ");
const capitalizedStr = capitalizeString(str);
document.write(capitalizedStr);
