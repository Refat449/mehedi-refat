
let display = document.getElementById('Inputbox');
let buttons = document.querySelectorAll('button');

let string = "";
let buttonsArray = Array.from(buttons);
buttonsArray.forEach(function(btn){
   btn.addEventListener('click',function(e){
      if(e.target.innerHTML=='DEL')//second
      {
         string = string.substring(0, string.length-1);
         display.value = string; 
      }
      else if(e.target.innerHTML=='AC')
      {
         string = "";
         display.value = string;
      }
      else if(e.target.innerHTML=="=")
      {
         string = eval(string);
         display.value = string;
      }
      else//first read this
      {
      string += e.target.innerHTML;
      display.value = string;
      console.log(e.target.innerHTML);
      }
      
   })
})