.text
.global main

@define constants, these can be used as symbols in your code
.equ LED_CTL, 0x41210000 @LED values
.set SW_DATA, 0x41220000 @Switch values
.set BUTT_CTL, 0x41200000 @Button values
@the set and equ directives are equivalent and can be used interchangeably


@2) Negate the Singal from the Switches
@main:
@	ldr r1,=SW_DATA	@load switch address from constant
@	ldr r2,=LED_CTL	@load LED address from constant
@loop:
@	ldr r0,[r1]	@load switch value *r1 ->r0
@	mvn r0,r0	@Invert the bits of r0 (1->0,0->1)
@	str r0,[r2]	@store value to led register *r2 <-r0
@	b loop		@go back to "loop"

@3) Use Pushbuttons to Illuminate LEDs
main:
	ldr r1,=BUTT_CTL @load Button address from constant
	ldr r2,=LED_CTL	@load LED address from constant
	ldr r3,=BUTT_CTL @load Button address from constant
loop:
	ldr r0,[r1]	@load Button value *r1 ->r0
	str r0,[r2]	@store value to led register *r2 <-r0
	b loop		@go back to "loop"

.end
