// FUN_00672d18 @ 00672d18

void FUN_00672d18(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_18;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02324218,DAT_02324220,DAT_02324220,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineOfficialTheme_026ce620;
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineOfficialTheme_026ce620,PTR_s_colorNamed_fallback__026a3268,&cf_Red,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar2);
  return;
}

