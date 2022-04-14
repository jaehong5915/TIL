// const mathS = prompt("수학 몇점?");
// const engS = prompt("영어 몇점?");
// const resultS = (Number(mathS) + Number(engS)) /2;
function Item(name, price){
    this.name = name;
    this.price = price;
    this.showPrice = function (){
        console.log(`가격은 ${price}원 입니다.`)
    }
}
const item1 = new Item('인형', 3000);
console.log(item1.name)