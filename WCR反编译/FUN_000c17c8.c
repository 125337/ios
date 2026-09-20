// FUN_000c17c8 @ 000c17c8

undefined1 FUN_000c17c8(ulong param_1)

{
  ulong uVar1;
  undefined1 local_11;
  
  uVar1 = param_1;
  FUN_000c151c();
  if (((uVar1 & 1) == 0) || (((param_1 != 7 && (param_1 != 8)) && (param_1 != 9)))) {
    FUN_000c1888();
    if (((uVar1 & 1) == 0) || (param_1 != 0xc)) {
      local_11 = 0;
    }
    else {
      local_11 = 1;
    }
  }
  else {
    local_11 = 1;
  }
  return local_11;
}

