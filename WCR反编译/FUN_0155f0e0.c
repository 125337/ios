// FUN_0155f0e0 @ 0155f0e0

void FUN_0155f0e0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  long local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  lVar1 = local_20;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_38 = 0;
  local_40 = 0;
  local_30 = lVar1;
  FUN_0155f39c(lVar1,&local_40);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_38,local_40);
  lVar3 = local_28;
  local_28 = lVar1;
  (*(code *)PTR__objc_release_02578630)(lVar3);
  lVar3 = local_18;
  if ((local_28 == 0) && (local_18 != 0)) {
    pcVar2 = &cf_getContactHeadImage;
    _NSSelectorFromString(&cf_getContactHeadImage);
    FUN_01533df4(lVar3,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    local_28 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  lVar3 = local_18;
  if ((local_28 == 0) && (local_18 != 0)) {
    pcVar2 = &cf_m_dtUsrImg;
    _NSSelectorFromString(&cf_m_dtUsrImg);
    FUN_01533df4(lVar3,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar3;
    FUN_0155f6d8();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    local_28 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    _objc_storeStrong(&local_48,0);
  }
  if (local_28 == 0) {
    lVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (lVar3 != 0) {
      lVar1 = local_30;
      FUN_0155f7e4(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_28;
      local_28 = lVar1;
      (*(code *)PTR__objc_release_02578630)(lVar3);
    }
  }
  if (local_28 != 0) {
    lVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (lVar3 != 0) {
      FUN_01560164(lVar3);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar3);
    }
  }
  lVar3 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(lVar3);
  return;
}

