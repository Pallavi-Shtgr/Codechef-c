// Chef wants to become fit for which he decided to walk to the office and return home by walking.
// It is known that Chef's office is X km away from his home.
// If his office is open on 5 days in a week, find the number of kilometres Chef travels through office trips in a week.

process.stdin.setEncoding('utf8');
let input  = '';
process.stdin.on('data',function(chunk){
    input += chunk;
});
process.stdin.on('end',function(){
    input = input.split('\n');
    let t = parseInt(input[0]);
    for(let i = 1;i<=t;i++){
        let X = parseInt(input[i]);
           let Y = 5 * 2 * X;  
     
        console.log(Y);
    }
    
})