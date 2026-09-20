// FUN_00893e30 @ 00893e30

void FUN_00893e30(ulong param_1,undefined8 param_2,undefined4 param_3,byte param_4)

{
  ulong uVar1;
  
  if ((param_4 & 1) == 0) {
    uVar1 = param_1;
    FUN_0089ccc0();
    if ((uVar1 & 1) == 0) {
      (*DAT_028cda58)(param_1,param_2,param_3,param_4 & 1);
    }
  }
  else {
    (*DAT_028cda58)(param_1,param_2,param_3,param_4 & 1);
  }
  return;
}

