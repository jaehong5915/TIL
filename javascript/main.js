// const mathS = prompt("수학 몇점?");
// const engS = prompt("영어 몇점?");
// const resultS = (Number(mathS) + Number(engS)) /2;
const name = 'tom';
let boy = {
    name: 'Mike',
    sayThis: () => {
        console.log(this)
        // console.log(boy.name)
    }
};

boy.sayThis();

