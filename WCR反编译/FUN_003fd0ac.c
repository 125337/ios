// FUN_003fd0ac @ 003fd0ac

ulong FUN_003fd0ac(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 local_18;
  
  uVar1 = param_1;
  FUN_004013a4();
  if ((uVar1 & 1) == 0) {
    (*DAT_028ca670)(param_1,param_2);
    local_18 = param_1;
  }
  else {
    local_18 = 0xd;
  }
  return local_18;
}

