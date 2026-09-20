// FUN_00f85404 @ 00f85404

void FUN_00f85404(byte param_1)

{
  undefined8 local_18;
  
  local_18 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,DAT_02323e88,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_0232c3e0,DAT_0232c3d8,0x3ff0000000000000,DAT_02323e88,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

