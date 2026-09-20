// FUN_01584398 @ 01584398

undefined1 FUN_01584398(ulong param_1)

{
  ulong uVar1;
  undefined1 local_11;
  
  uVar1 = param_1;
  FUN_015850e8();
  if (uVar1 == 1) {
    local_11 = 0;
  }
  else if ((uVar1 == 0) && ((param_1 & 1) != 0)) {
    local_11 = 0;
  }
  else {
    local_11 = 1;
  }
  return local_11;
}

