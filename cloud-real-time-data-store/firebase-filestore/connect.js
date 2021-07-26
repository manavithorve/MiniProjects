console.log("Connecting to database...")
const fname = document.getElementById("fname");
const lname = document.getElementById("lname");
const age = document.getElementById("age");
const usrid = document.getElementById("usrid");

const addbtn = document.getElementById("addbtn");
const updatebtn = document.getElementById("updatebtn");
const removebtn = document.getElementById("removebtn");

/*Database Object*/
const database = firebase.database();
console.log("Database:",database);
const rootRef = database.ref('users');

/*Event Handling*/
addbtn.addEventListener('click',(e)=>{
  e.preventDefault();
  database.ref('/users/'+usrid.value).set({
    first_name : fname.value,
    last_name : lname.value,
    age: age.value
  });
});

updatebtn.addEventListener('click',(e)=>{
  console.log("updatebtn");
  e.preventDefault();

  const newData = {
    first_name : fname.value,
    last_name : lname.value,
    age: age.value
  }
  rootRef.child(usrid.value).update(newData);
});

removebtn.addEventListener('click',(e)=>{
  e.preventDefault();
  rootRef.child(usrid.value).remove();
  alert("User Data Removed!");
});
