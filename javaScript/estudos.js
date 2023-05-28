// conhecendo o javaScript

function calcularAreRetandulo(largura, altura){ //criando uma funcao
    return largura * altura;
}




console.log("Calcular Area de um retangulo!!");
const larguraRetangulo = 52;
const alturaRetangulo = 10;

if (isNaN(larguraRetangulo) || isNaN(alturaRetangulo)) {
    console.log("Favor digitar um valor numerico !")
} else{
    const area = calcularAreRetandulo(larguraRetangulo, alturaRetangulo);
    console.log(`Area do retangulo e ${area}`);
}

const listaDestinos = new Array(`Caracol`,`Bela Vista`, `Campo Grande`); //Criando uma lista
console.log(listaDestinos); //mostrando todos os itens da lista
console.log(listaDestinos[1]); //mostrando o segundo item da lista
listaDestinos.push(`Dourados`)//ara verificar se a repetição deve ou não continuar. 
const ultimoItem = listaDestinos[listaDestinos.length -1]; 
console.log(ultimoItem); //exibindo o ultimo item a lista

listaDestinos.splice(1,1); //excluindo item "Bela vista"
console.log(listaDestinos);


//testando estruturas de repetição 
//while 
//While é uma estrutura de repetição que utiliza uma estrutura condicional para verificar se a repetição deve ou não continuar. 
let condicional = true;
let contador = 0;
console.log("Iniciando While!!")

while(condicional == true) {
    if (contador == 5){
        condicional = false;
    }
    console.log(`Numero: ${contador}`);
    contador = contador + 1;
} 
console.log("Terminando while")
//DO WHILE
// Do While, diferentemente do While convencional, começa executando o bloco de código pelo menos uma vez. A partir disso, é checado se a repetição deve ou não continuar.

let condicional2 = true;
let contador2 = 0;

do {

    if(contador2 == 5){
        condicional2 = false;
    }
    contador2++;
    console.log(`Numero: ${contador2}`);
} while (condicional2 == true)
console.log("Terminando DO while")

//FOR
//Na estrutura de repetição For temos três principais pilares a definir:

  //  uma variável contadora;
  //  uma condicional baseada na variável;
  //  um pedaço de código que é executado ao final de cada repetição.

//Além disso, por ser uma estrutura com uma sintaxe mais rígida, dificilmente teremos problema de repetição infinita, algo que ocorre em outros tipos de estrutura.
let condFor = true;
let contFor = 0;

for (let i = 0; i <= 5; i++){
    console.log(`Numero: ${i}`)
}

console.log("Terminando FOR");

//O Foreach é uma estrutura utilizada para vasculhar uma listagem com um número indefinido de itens do começo ao fim. Quando chegamos ao final da lista, a repetição é terminada.

const items = [1, 2, 3, 4, 5]

console.log("Iniciando foreach")


items.forEach((valor) => {
  console.log(`Numero: ${valor}`);
})

console.log("Terminando foreach")
