let cardBody = document.getElementById('showHide');
let show = document.getElementById('show');
let hide = document.getElementById('Hide');

cardBody.style.display = "none";
show.style.display = "none";
hide.style.display = "none";
function toggleHide1() {
  if (cardBody.style.display != 'none') {
    cardBody.style.display = 'none';
}
else {
    cardBody.style.display = 'block'
}
}
function toggleHide2() {

  if (show.style.display != 'none') {
    show.style.display = 'none';
}
else {
    show.style.display = 'block'
}

}
function toggleHide3() {

  if (hide.style.display != 'none') {
    hide.style.display = 'none';
}
else {
    hide.style.display = 'block'
}
}