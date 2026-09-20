// FUN_0016523c @ 0016523c

void FUN_0016523c(long param_1)

{
  long lVar1;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if (lVar1 != 0) {
    FUN_0016533c(*(undefined8 *)(param_1 + 0x20));
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      FUN_001654a4(*(undefined8 *)(param_1 + 0x20));
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__hQSmn_v);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_updateTopMessageInfo_0269f5d0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

