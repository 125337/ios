// htmlColorFromHexToken: @ 01f0ab04

/* Function Stack Size: 0x18 bytes */

ID WCRefineToDoListWebSettingsViewController::htmlColorFromHexToken_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  double dVar3;
  undefined1 *local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = (undefined1 *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,&::cf___);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_characterAtIndex__0269fa18,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_characterAtIndex__0269fa18,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_characterAtIndex__0269fa18,2);
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__C_C_C_C_C_C
              );
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_38;
    local_38 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  puVar1 = PTR__OBJC_CLASS___NSScanner_026ce368;
  if ((undefined1 *)((long)&MACH_HEADER.cputype + 1) < puVar2) {
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_substringToIndex__0269d6c0,6);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_scannerWithString__0269fa30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    dVar3 = (double)NEON_ucvtf(0);
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0,0,dVar3 / 255.0,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
  }
  else {
    local_18 = (undefined *)0x0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

