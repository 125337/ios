// FUN_017bf288 @ 017bf288

void FUN_017bf288(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  cfstringStruct *local_60;
  cfstringStruct *local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_hideStickyStatus_0269d4b8)
  ;
  puVar1 = PTR_WCRefineHelper_026ce000;
  if ((local_28 == (cfstringStruct *)0x0) && (local_20 != 0)) {
    lVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_path_0269d4d8);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_wcr_forwardVideoAtPath_fromViewC_026a17f0,lVar3);
    (*(code *)PTR__objc_release_02578630)(param_1);
    (*(code *)PTR__objc_release_02578630)(lVar3);
  }
  else {
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_60 = &cf_V_Nzz;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_ub1Y_,local_60,&cf_wSN,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

