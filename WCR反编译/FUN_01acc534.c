// FUN_01acc534 @ 01acc534

void FUN_01acc534(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *local_f8;
  char *local_c8;
  char *local_b8;
  undefined *local_90;
  undefined *local_80;
  undefined *local_78;
  bool local_69;
  char *local_68;
  char *local_60;
  bool local_51;
  char *local_50;
  char *local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  char *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  lVar2 = local_30;
  FUN_01a9eff8();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_28 = (char *)0x0;
    local_3c = 1;
  }
  else {
    pcVar3 = "MMServiceCenter";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_51 = false;
    bVar1 = ((ulong)pcVar3 & 1) == 0;
    if (bVar1) {
      local_b8 = (char *)0x0;
    }
    else {
      local_b8 = "MMServiceCenter";
      _objc_getClass();
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_b8;
    }
    local_51 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_b8;
    if ((local_51 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    pcVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
    local_c8 = local_48;
    puVar5 = PTR_s_getService__0269d170;
    local_69 = false;
    bVar1 = ((ulong)pcVar3 & 1) == 0;
    if (bVar1) {
      local_c8 = (char *)0x0;
    }
    else {
      pcVar3 = "MMThemeManager";
      _objc_getClass("MMThemeManager");
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,puVar5,pcVar3);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_c8;
    }
    local_69 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_c8;
    if ((local_69 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    pcVar3 = local_60;
    pcVar4 = &cf_svgImageNamed_color_;
    _NSSelectorFromString(&cf_svgImageNamed_color_);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_respondsToSelector__026ca818,pcVar4);
    if (((ulong)pcVar3 & 1) == 0) {
      local_28 = (char *)0x0;
      local_3c = 1;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
      local_78 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITraitCollection_026ce138,PTR_s_currentTraitCollection_026ca5d8)
      ;
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = puVar7 != (undefined1 *)((long)&MACH_HEADER.magic + 2);
      local_f8 = PTR__OBJC_CLASS___UIColor_026cdf78;
      if (bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
        _objc_retainAutoreleasedReturnValue();
        local_90 = local_f8;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
        _objc_retainAutoreleasedReturnValue();
        local_80 = local_f8;
      }
      _objc_storeStrong(&local_78,local_f8);
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      else {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      (*(code *)PTR__objc_release_02578630)(puVar6);
      pcVar3 = local_60;
      pcVar4 = &cf_svgImageNamed_color_;
      _NSSelectorFromString();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,pcVar4,local_38,local_78);
      _objc_retainAutoreleasedReturnValue();
      local_3c = 1;
      local_28 = pcVar3;
      _objc_storeStrong(&local_78,0);
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

