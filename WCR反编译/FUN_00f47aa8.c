// FUN_00f47aa8 @ 00f47aa8

void FUN_00f47aa8(long param_1)

{
  if ((*(long *)(param_1 + 0x30) == 3) || (*(long *)(param_1 + 0x30) == 4)) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  else {
    if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastErrorWithText__0269ced8,&cf_AQvQ);
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
    }
  }
  return;
}

