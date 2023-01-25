// 숫자 데이터 123 콘솔창에 출력
console.log(123)
// 문자 데이터 '123' 콘솔창에 출력
console.log('123')
// 문자데이터 설정
const stringData = 'Hello World'
// 숫자데이터 설정
const numberData = 1234
// boolean(논리) 데이터 설정
const booleanData1 = true
const booleanData2 = false
// null 데이터
// let은 값 재할당이 가능한 변수를 만들때 사용함.
let numberData2 = 123
numberData2 = null

// 객체 데이터
const objectData = {
    key: 'value',
    name: 'MK',
    age: 24,
    email: 'y071812@gmail.com'
}
// 객체 데이터 출력 (점 표기법 이용)
console.log('my name is '+ objectData.name)
console.log('email address: ' + objectData.email)
console.log('age: ' + objectData.age)
// 객체 데이터 출력 (대괄호 표기법 이용)
console.log(objectData['name'])
console.log(objectData['email'])
console.log(objectData['age'])
//객체 데이터 전부 출력
console.log(objectData)

// 배열 데이터
const arrayData = [9, 8, 7, 6]
// 9출력
console.log(arrayData[0])
// 8출력
console.log(arrayData[1])