// boxButtonBackgroundColor @ 0176b4c0

/* Function Stack Size: 0x10 bytes */

ID ThemeStyleManager::boxButtonBackgroundColor(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = DAT_02324050;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isDarkMode_0269f410);
  local_18 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323e10,uVar1,DAT_02339af8,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78
               ,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,DAT_02332e58,DAT_02323d70,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78
               ,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

