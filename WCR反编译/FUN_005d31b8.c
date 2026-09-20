// FUN_005d31b8 @ 005d31b8

void FUN_005d31b8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long local_58;
  long local_50;
  undefined4 local_44;
  long local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  lVar1 = local_18;
  local_20 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_valueForKey__0269d128,&cf_m_dataItem);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_28;
  local_28 = lVar1;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  if (local_28 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSaggSW);
    local_44 = 1;
  }
  else {
    lVar2 = local_18;
    FUN_005d35a8();
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar2;
    FUN_005d372c();
    _objc_retainAutoreleasedReturnValue();
    local_58 = lVar2;
    if (lVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar2,PTR_s_setValue_forKey__0269d300,local_28,&cf_m_dataItem);
    }
    if (local_20 == 0) {
      FUN_005d3a78(local_50,local_58,local_28,0);
    }
    else if (local_20 == 1) {
      _WCRefineForwardMomentFromCellView(local_58,local_28,0);
    }
    else if (local_20 == 5) {
      _WCRefineForwardMomentToChatFromCellView(0,local_58,local_28);
    }
    else if (local_20 == 6) {
      _WCRefineForwardMomentFromCellView(local_58,local_28,1);
    }
    else if (local_20 - 7U < 2) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_vQRhN_ecp__);
    }
    else if (local_20 == 9) {
      _WCRefineSaveMomentMediaFromCellView(0,local_58,local_28);
    }
    else {
      FUN_005d50ac(local_50,local_58,local_28,local_20);
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

