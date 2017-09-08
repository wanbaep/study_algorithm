### URI
- Uniform Resource **Identifier**

URI의 약자는 `Uniform Resource Identifier`로 통합 자원 식별자를 의미한다.

### URL
- Uniform Resource **Locator**

URL의 약자는 `Uniform Resource Identifier`로 파일식별자, 유일자원지시기를 의미한다.

### URN
- Uniform Resource **Name**
URN은 리소스에 대한 유니크한 이름이다. 해당 리소스가 존재하는 한 영구적이고 바뀌지 않는다. (주민등록번호나 책의 ISDN 값과 같은 것이다.)

즉, URL의 경우 `https://somewhere.com/files/template.pdf` 와 같이 자원(파일)의 위치를 가리킨다. 하지만 URI의 경우에는 직접 파일의 위치를 가리키지 않고 식별자로 구분한다. 즉, `https://somewhere.com/myreservation` 라고 한 경우 요청 주소를 파일로 보지 않고 구분자로 보는 것이다. 실제로 해당 서버에 myreservation이라는 파일은 없는 것이다.

URI와 URL은 다른개념이 아닌 상하위 개념이다. URI가 상위개념이며 URI는 URL과 URN을 포함한다.

URI(동물) - URL(사자), URN(코끼리)

- RESTful API서버를 구성한 경우 Controller에서 Identifier를 설정하기 때문에 URI라고 언급하는 것이 정확한 표현이다.