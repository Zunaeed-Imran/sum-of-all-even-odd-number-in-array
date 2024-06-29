//  sum of  even odd number practice in javascript

let num = prompt('Enter a number to sum');

for (let i = 1; i <= num; i++) {
  if (i % 2 == 0) {
    document.write(i + ' Even Number ' + '</br>');
  } else {
    document.write(i + ' Odd Number ' + '</br>');
  }
}
