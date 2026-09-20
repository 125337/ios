// FUN_01d9b518 @ 01d9b518

void FUN_01d9b518(ulong param_1)

{
  bool bVar1;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 local_20;
  
  FUN_01d9cfc4();
  bVar1 = (param_1 & 1) == 0;
  local_40 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_40;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323d40,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_20 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_20);
  }
  _objc_autoreleaseReturnValue(local_40);
  return;
}

