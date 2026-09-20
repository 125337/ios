// FUN_00135a60 @ 00135a60

void FUN_00135a60(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *local_90;
  undefined *local_58;
  undefined *local_48;
  undefined *local_28;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_20;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_traitCollection_026caba8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar2);
  local_90 = local_28;
  if (lVar3 != 2) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatToolbarBackgroundColorLight_0269f378);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_90;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatToolbarBackgroundColorDark_0269f370);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_90;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_90;
  if (lVar3 != 2) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

