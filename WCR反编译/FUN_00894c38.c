// FUN_00894c38 @ 00894c38

void FUN_00894c38(ulong param_1,undefined8 param_2,byte param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_008a250c();
  pcVar1 = DAT_028cdaf8;
  if ((uVar2 & 1) == 0) {
    FUN_008a25a8();
    if ((uVar2 & 1) != 0) {
      param_3 = 1;
    }
    (*pcVar1)(param_1,param_2,param_3 & 1);
  }
  else {
    (*DAT_028cdaf8)(param_1,param_2,0);
  }
  return;
}

