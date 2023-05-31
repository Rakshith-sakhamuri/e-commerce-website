const income = prompt("What's your Income : ");
if (income < 3) {
  document.write("you have to pay no income tax");
}
if(income >= 3 && income <6) {
  document.write("Income tax:",(5/100)*income,"lakh" );
}
if(income >= 6 && income <9) {
  document.write("Income tax:",(10/100)*income,"lakh" );
}
if(income >= 9 && income <12) {
  document.write("Income tax:",(15/100)*income,"lakh" );
}
if(income >= 12 && income <15) {
  document.write("Income tax:",(20/100)*income,"lakh" );
}
if(income >= 15 ) {
  document.write("Income tax:",(30/100)*income,"lakh" );
}
