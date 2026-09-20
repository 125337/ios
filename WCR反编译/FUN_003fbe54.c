// FUN_003fbe54 @ 003fbe54

void FUN_003fbe54(undefined8 param_1,double param_2,ulong param_3,undefined8 param_4,byte param_5)

{
  ulong uVar1;
  double dVar2;
  
  uVar1 = param_3;
  dVar2 = param_2;
  FUN_003fc564();
  if ((uVar1 & 1) == 0) {
    (*DAT_028ca628)(param_1,param_2,param_3,param_4,param_5 & 1);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_3,PTR_s_contentOffset_0269dd18);
    if ((0.0 < param_2) || (dVar2 <= 100.0)) {
      (*DAT_028ca628)(param_1,param_2,param_3,param_4,param_5 & 1);
    }
  }
  return;
}

