// suanGuoTipsBackgroundColor @ 0176ca74

/* Function Stack Size: 0x10 bytes */

ID ThemeStyleManager::suanGuoTipsBackgroundColor(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = DAT_02323d00;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isDarkMode_0269f410);
  local_18 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323d48,DAT_02323e40,0x3fee666666666666,uVar1,PTR__OBJC_CLASS___UIColor_026cdf78
               ,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323f10,DAT_02323da8,DAT_02323df8,uVar1,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

