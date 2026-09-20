// FUN_000d5824 @ 000d5824

void FUN_000d5824(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_000dc544();
  if ((uVar1 & 1) == 0) {
    (*DAT_028c8308)(param_1,param_2);
  }
  else {
    FUN_000dc7ac(param_1,1);
  }
  return;
}

