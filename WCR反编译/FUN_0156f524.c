// FUN_0156f524 @ 0156f524

void FUN_0156f524(long param_1)

{
  int local_34;
  
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    local_34 = (int)*(undefined8 *)(param_1 + 0x20);
    FUN_0156f8fc();
  }
  else {
    local_34 = (int)*(undefined8 *)(param_1 + 0x20);
    FUN_0156f5cc();
  }
  if (local_34 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__eb);
  }
  return;
}

