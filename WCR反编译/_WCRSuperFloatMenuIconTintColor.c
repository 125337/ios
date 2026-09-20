// _WCRSuperFloatMenuIconTintColor @ 01618844

void _WCRSuperFloatMenuIconTintColor(byte param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *local_88;
  undefined *local_70;
  undefined *local_60;
  undefined *local_50;
  undefined *local_40;
  undefined *local_30;
  undefined *local_28;
  byte local_19;
  undefined *local_18;
  
  local_19 = param_1;
  FUN_01618a98();
  bVar1 = (local_19 & 1) == 0;
  local_70 = PTR_WCRSuperFloatProfileStore_026cee48;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_menuIconColorHex_026b1970);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_70;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_menuIconColorHexDark_026b1978);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_70;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_70;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  puVar2 = local_28;
  bVar1 = (local_19 & 1) == 0;
  local_88 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_88;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_88;
  }
  FUN_01618bac(puVar2,local_88);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar2;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

