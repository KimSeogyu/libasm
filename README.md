# libasm

## 1. ft_read
```
mov rax, 0x2000003
syscall 
```
을 하게 되면 read함수가 불러와지고, jc flag가 에러면 에러를 반환한다.

## 2. ft_strlen

```
mov		rax, -1 # rax에 -1
	_loop:
		inc		rax # rax == 0
		cmp		byte [rdi + rax], 0 # rdi == 첫 매개변수, rdi+rax의 값이 0(null)인지 확인
		jnz		_loop
	ret
```

## 3. ft_write

ft_read와 비슷

## 4. ft_strcpy

rbx, rcx에 뭐가 들어있는지 모르기때문에 스택에 push
rax, rbx에 rdi(첫인자),rsi(두번째인자) 값 할당

0부터 값 옮겨주고 0만났는지 확인 후 아직 0이 아니라면 loop반복
loop종료 후 rbx, rcs pop

## 5. ft_strcmp
0부터 인자 두개가 각각 0을 만났는지 에러체크
다르다면 앞 인자가 클때는 _plus로 작을때는 _minus로
인덱스 증가후 _loop반복

## 6. ft_strdup

ft_strlen 호출 후 null넣을 공간까지 rax에 할당
malloc으로 rax(rdi에 넣어준 ft_strlen의 리턴값)만큼 공간 할당
ft_strcpy로 복사
