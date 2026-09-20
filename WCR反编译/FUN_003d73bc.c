// FUN_003d73bc @ 003d73bc

void FUN_003d73bc(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *local_90;
  undefined *local_60;
  undefined *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  char *local_38;
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  FUN_003aa040();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_18 = (char *)0x0;
    local_2c = 1;
  }
  else {
    pcVar3 = "MMThemeManager";
    _objc_getClass();
    FUN_00392f1c();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = &cf_svgImageNamed_color_;
    local_38 = pcVar3;
    _NSSelectorFromString();
    pcVar3 = local_38;
    local_40 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar4);
    if (((ulong)pcVar3 & 1) == 0) {
      local_18 = (char *)0x0;
      local_2c = 1;
    }
    else {
      local_48 = (undefined *)0x0;
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_isEqualToString__0269ccc8,&cf_photo_accounts_icon);
      if ((uVar2 & 1) == 0) {
        puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = local_48;
        local_48 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar6);
        puVar6 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UITraitCollection_026ce138,
                   PTR_s_currentTraitCollection_026ca5d8);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = puVar7 != (undefined1 *)((long)&MACH_HEADER.magic + 2);
        local_90 = PTR__OBJC_CLASS___UIColor_026cdf78;
        if (bVar1) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
          _objc_retainAutoreleasedReturnValue();
          local_60 = local_90;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
          _objc_retainAutoreleasedReturnValue();
          local_50 = local_90;
        }
        _objc_storeStrong(&local_48,local_90);
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_60);
        }
        else {
          (*(code *)PTR__objc_release_02578630)(local_50);
        }
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      else {
        puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02324040,DAT_02324048,DAT_02323f18,0x3ff0000000000000,
                   PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48)
        ;
        _objc_retainAutoreleasedReturnValue();
        puVar6 = local_48;
        local_48 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      pcVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,local_40,local_28,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_2c = 1;
      local_18 = pcVar3;
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

