// themeProBackgroundGradientColors @ 0176b958

/* Function Stack Size: 0x10 bytes */

ID ThemeStyleManager::themeProBackgroundGradientColors(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  long local_18;
  
  uVar1 = DAT_02324040;
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isDarkMode_0269f410);
  if ((param_1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,DAT_02323ec0,uVar1,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323e40,uVar1,DAT_0232c6d8,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78
               ,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_40 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323df8,DAT_02332e20,DAT_02323f10,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_28 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02324058,DAT_02323cc0,DAT_02323f68,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_40 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_20 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28,2
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_40;
}

