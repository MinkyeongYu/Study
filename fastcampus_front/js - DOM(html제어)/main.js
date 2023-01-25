// html의 item이라는 선택자 내용을 모두 찾아서 itemEls 변수에 할당
const itemEls = document.querySelectorAll('.item')
// html의 btn선택자 내용을 찾아서 btnEl에 할당
const btnEl = document.querySelector('.btn')
// 배열 데이터
const colors = ['aquamarine', 'orange', 'tomato']

// btnEl에 클릭 이벤트 추가, 익명함수 사용
btnEl.addEventListener('click', function () {
    // 실행하고 싶은 명령 작성

    // item요소들 각각에 접근해서 함수 실행 => 매개변수있는 익명함수 사용
    // index라는 이름의 매개변수는 함수 호출 횟수를 담고 있다.
    itemEls.forEach(function (itemEl, index) {

        // itemEl: 1, 2, 3 출력됨. index: 함수 호출 번호 출력
        console.log(index, itemEl)
        
        // css 내용 추가, camelCase 문법 지키기
        // index 숫자가 0,1,2 순서로 커지기 때문에, 
        // 1,2,3 숫자의 각 영역 색이 '아쿠아마린', '오렌지', '토마토' 가 된다.
        itemEl.style.backgroundColor = colors[index]
    })

    // 클릭하면 btn클래스를 가지고 있는 div의 내용에 '클릭했어요!'라는 문자가 대체됨
    // btnEl.innerHTML = '클릭했어요!'
    // 아래와 같이 html 문법으로 작성하면, css에서 제어 가능
    btnEl.innerHTML = '<span> 클릭했어요! </span>'

})