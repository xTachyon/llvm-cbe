define half @add(half %x, half %y) unnamed_addr {
start:
  %_0 = fadd half %x, %y
  ret half %_0
}

define half @sub(half %x, half %y) unnamed_addr {
start:
  %_0 = fsub half %x, %y
  ret half %_0
}

define half @mul(half %x, half %y) unnamed_addr {
start:
  %_0 = fmul half %x, %y
  ret half %_0
}

define half @div(half %x, half %y) unnamed_addr {
start:
  %_0 = fdiv half %x, %y
  ret half %_0
}

define half @rem(half %x, half %y) unnamed_addr {
start:
  %_0 = frem half %x, %y
  ret half %_0
}

define dso_local i32 @main() #0 {
  ret i32 6
}
