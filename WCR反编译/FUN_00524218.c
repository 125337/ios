// FUN_00524218 @ 00524218

void FUN_00524218(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  (*DAT_028cb128)(param_1,param_2,param_3 & 1);
  FUN_0052a1d0();
  if ((uVar1 & 1) != 0) {
    uVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_m_iCurIndex_026a4af0);
    FUN_0052a26c(0x3fd3333333333333,param_1,uVar1 & 0xffffffff);
  }
  return;
}

