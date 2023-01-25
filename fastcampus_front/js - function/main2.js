function hello(name) {
    // name의 길이가 5 초과면 함수 종료
    if(name.length > 5){
        return
    }
    const ms = 'Hello ' + name + '!' 
    console.log(ms)
}

hello('world')
hello('Neo')
hello('Neon')
// Minkyeong 는 글자의 길이가 5보다 커서 함수 실행X
hello('Minkyeong')
