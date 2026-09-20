// FUN_0019b744 @ 0019b744

void FUN_0019b744(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *local_108;
  char *local_90;
  byte local_81;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  undefined1 local_61;
  undefined *local_60;
  char *local_58;
  char *local_50;
  undefined4 local_48;
  long local_38;
  long local_30;
  char *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  lVar2 = local_30;
  FUN_00184b18();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_28 = (char *)0x0;
    local_48 = 1;
  }
  else {
    pcVar3 = "MMServiceCenter";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = "MMThemeManager";
    local_50 = pcVar3;
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_getService__0269d170,pcVar4);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar3;
    if ((pcVar3 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_svgImageNamed_color__0269f760),
       ((ulong)pcVar3 & 1) == 0)) {
      local_28 = (char *)0x0;
      local_48 = 1;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
      local_60 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITraitCollection_026ce138,PTR_s_currentTraitCollection_026ca5d8)
      ;
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = puVar7 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      local_71 = 0;
      local_81 = 0;
      local_108 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_61 = bVar1;
      if (bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
        _objc_retainAutoreleasedReturnValue();
        local_71 = 1;
        local_70 = local_108;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
        _objc_retainAutoreleasedReturnValue();
        local_81 = 1;
        local_80 = local_108;
      }
      _objc_storeStrong(&local_60,local_108);
      if ((local_81 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      if ((local_71 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      pcVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_svgImageNamed_color__0269f760,local_38,local_60);
      _objc_retainAutoreleasedReturnValue();
      local_90 = pcVar3;
      if (pcVar3 == (char *)0x0) {
        local_28 = (char *)0x0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar3;
      }
      local_48 = 1;
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

