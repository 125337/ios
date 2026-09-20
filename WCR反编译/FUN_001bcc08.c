// FUN_001bcc08 @ 001bcc08

void FUN_001bcc08(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  (*DAT_028c8b80)(param_1,param_2);
  uVar1 = param_1;
  FUN_001ee184();
  if ((uVar1 & 1) == 0) {
    FUN_001ecdb0(param_1);
    FUN_001edc3c(param_1);
  }
  else {
    FUN_001edf0c(param_1,0);
    FUN_001edc3c(param_1);
  }
  return;
}

