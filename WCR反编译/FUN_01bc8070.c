// FUN_01bc8070 @ 01bc8070

void FUN_01bc8070(long param_1)

{
  undefined8 local_18;
  
  local_18 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if (param_1 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c60,0x3fd3333333333333,DAT_02323e88,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_1 == 4) {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02324020,DAT_02332e48,0x3feb333333333333,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_1 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323ee8,DAT_0233a328,DAT_02323f10,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323ec8,0x3fe6666666666666,DAT_02323e80,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

