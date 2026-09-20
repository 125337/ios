// FUN_0061032c @ 0061032c

void FUN_0061032c(undefined8 param_1)

{
  long lVar1;
  undefined *local_80;
  undefined *local_58;
  undefined *local_48;
  long local_28;
  undefined8 local_20;
  undefined *local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_userInterfaceStyle_026cabc8);
  local_80 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if (lVar1 != 2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (0,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_80;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,DAT_02323d00,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_80;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_80;
  if (lVar1 != 2) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

