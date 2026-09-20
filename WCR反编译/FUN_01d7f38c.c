// FUN_01d7f38c @ 01d7f38c

void FUN_01d7f38c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint local_3c;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_searchManager_026c4bd8);
  _objc_retainAutoreleasedReturnValue();
  local_3c = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_searchManager_026c4bd8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_3c = (uint)uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if ((local_3c & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf__1Y_,
               &cf_d___thVNS_uzT0,&cf_nx_,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_searchManager_026c4bd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__nd____X_N_kd___R_);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

