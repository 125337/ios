// FUN_0156ec00 @ 0156ec00

void FUN_0156ec00(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = param_1 + 0x28;
  local_28 = param_1;
  _objc_loadWeakRetained();
  uVar2 = *(ulong *)(param_1 + 0x20);
  local_30 = lVar1;
  FUN_0156ecf0(0x3fe0000000000000);
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__eb);
  }
  else {
    FUN_0156ad1c(local_30);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__);
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

