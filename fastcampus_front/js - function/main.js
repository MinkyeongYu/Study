// 함수가 없을 때 -> 같은 명령을 매번 새롭게 작성
const message = 'Hello World'
console.log(message)

const message2 = 'Hello World'
console.log(message2)

const message3 = 'Hello World'
console.log(message3)

// 함수가 있을 때 -> 코드 재사용으로 편리해짐
function hello() {
    const ms = 'Hello World'
    console.log(ms)
}

hello()
hello()
hello()

// 인수와 매개변수를 가진 함수
function hello2(name){
    const ms2 = 'Hello ' + name + '!'
    console.log(ms2)
    // 만약 다음 코드를 실행하지 않고 함수를 종료하고 싶다면 return 사용
}

hello2('Taeyang')
hello2('Minkyeong')
hello2('javaScript')