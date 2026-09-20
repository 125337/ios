// FUN_0056d258 @ 0056d258

void FUN_0056d258(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *local_88;
  undefined *local_58;
  undefined *local_48;
  long local_28;
  undefined8 local_20;
  undefined *local_18;
  
  uVar1 = DAT_02323f68;
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_userInterfaceStyle_026cabc8);
  local_88 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if (lVar2 != 2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_88;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,uVar1,DAT_02323cc0,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_88;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_88;
  if (lVar2 != 2) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

