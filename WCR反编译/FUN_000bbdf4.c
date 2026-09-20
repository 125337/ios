// FUN_000bbdf4 @ 000bbdf4

void FUN_000bbdf4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *local_b0;
  undefined *local_78;
  undefined *local_68;
  undefined *local_58;
  undefined *local_48;
  long local_28;
  undefined8 local_20;
  undefined *local_18;
  
  uVar1 = DAT_02323d68;
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_userInterfaceStyle_026cabc8);
  if (lVar2 != 2) {
    local_68 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1);
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_b0;
  }
  else {
    local_48 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_b0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_b0;
  if (lVar2 != 2) {
    (*(code *)PTR__objc_release_02578630)(local_78);
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_58);
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

