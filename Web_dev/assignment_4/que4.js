let fontSize = 5;
let growing = true;

function changeFontSize() {
  const textElement = document.getElementById('text');
  
  if (growing) {
    fontSize++;
    if (fontSize === 50) {
      growing = false;
      textElement.style.color = 'blue';
    }
  } else {
    fontSize--;
  }
  
  textElement.style.fontSize = `${fontSize}pt`;
}

setInterval(changeFontSize, 100);
