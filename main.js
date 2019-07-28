let mapping = {"2":["a","b","c"],"3":["d","e","f"],"4":["g","h","i"]}


let stringmap = "234"

let stringarray = [];

for (var i = 0; i < stringmap.length; i++){
    var chara = stringmap.charAt(i)+"";
    stringarray.push(chara);
}

var darray = []

for (var i = 0; i < stringarray.length; ++i){
    darray.push(mapping[stringarray[i]]);
}

function enumerate(input){

    if (input.length == 1) {
	return input;
    }

    if(input.length ==2) { 
	let firstpart = input[0];
	let secondpart = input[1];
	let stringbuilt = [];
	for(var i = 0; i < firstpart.length;++i){
	    for(var j = 0; j < secondpart.length; ++j){
		stringbuilt.push(firstpart[i]+secondpart[j]);
	    }
	}
	return stringbuilt
    }
    
    let firstpart = input[0];
    input.splice(0,1);
    let secondhalf = enumerate(input);
    
    let stringbuilt = [];
	for(var i = 0; i < firstpart.length;++i){

	    for(var j = 0; j < secondhalf.length; ++j) {
		stringbuilt.push(firstpart[i]+secondhalf[j]);
	    }

	}
    
    return stringbuilt
}

let ret = enumerate(darray)

console.log(ret)


