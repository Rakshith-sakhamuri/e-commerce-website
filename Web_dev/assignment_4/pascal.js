function printPascalsTriangle(numRows) {
  let triangle = [];
  for (let i = 0; i < numRows; i++) {
    triangle[i] = [];
    for (let j = 0; j <= i; j++) {
      if (j === 0 || j === i) {
        triangle[i][j] = 1;
      } else {
        triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
      }
    }
  }
  for (let i = 0; i < numRows; i++) {
    let row = "";
    for (let j = 0; j <= i; j++) {
      row += triangle[i][j] + " ";
    }
    document.write(row);
    document.write("<br>");
  }
}
const n = prompt("Enter the size of n : ");
printPascalsTriangle(n);

