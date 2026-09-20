// FUN_000d6dc4 @ 000d6dc4

void FUN_000d6dc4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_000ea268();
  if ((uVar1 & 1) == 0) {
    (*DAT_028c8360)(param_1,param_2);
  }
  else {
    FUN_000e9c18(param_1);
  }
  return;
}

