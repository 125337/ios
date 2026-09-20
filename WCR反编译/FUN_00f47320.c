// FUN_00f47320 @ 00f47320

void FUN_00f47320(long param_1,byte param_2)

{
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    if ((param_2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastErrorWithText__0269ced8,&cf_OX_1Y_);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastDoneWithText__0269cee0,&cf__OX_0RvQ);
    }
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2 & 1);
  }
  return;
}

