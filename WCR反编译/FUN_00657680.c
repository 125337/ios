// FUN_00657680 @ 00657680

void FUN_00657680(void)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  uint local_5c;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  pcVar2 = &cf_MMContext;
  _NSClassFromString();
  pcVar3 = &cf_MMThemeManager;
  local_30 = pcVar2;
  _NSClassFromString();
  pcVar2 = &cf_WCColor;
  local_48 = pcVar3;
  _NSClassFromString();
  local_50 = pcVar2;
  if ((local_30 == (cfstringStruct *)0x0) || (local_48 == (cfstringStruct *)0x0)) {
    local_28 = (cfstringStruct *)0x0;
  }
  else {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_currentContext_0269d5f8);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar2;
    if ((pcVar2 == (cfstringStruct *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar2 & 1) == 0)) {
      local_28 = (cfstringStruct *)0x0;
      local_5c = 1;
    }
    else {
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_getService__0269d170,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_68 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_28 = (cfstringStruct *)0x0;
        local_5c = 1;
      }
      else {
        local_70 = (cfstringStruct *)0x0;
        if ((local_50 != (cfstringStruct *)0x0) &&
           (pcVar2 = local_50,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_Brand_0269ebd8),
           ((ulong)pcVar2 & 1) != 0)) {
          pcVar3 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_Brand_0269ebd8);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_70;
          local_70 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
        if (local_70 == (cfstringStruct *)0x0) {
          pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_02323da0,DAT_02323d98,DAT_02323d90,0x3ff0000000000000,
                     PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_70;
          local_70 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
        uVar5 = 0x4030000000000000;
        uVar4 = 0x4030000000000000;
        FUN_00658d50();
        pcVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_respondsToSelector__026ca818,
                   PTR_s_svgImageNamed_size_color__026a1350);
        bVar1 = ((ulong)pcVar2 & 1) != 0;
        if (bVar1) {
          pcVar2 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,uVar5,local_68,PTR_s_svgImageNamed_size_color__026a1350,
                     &cf_icons_outlined_double_arrow,local_70);
          _objc_retainAutoreleasedReturnValue();
          local_28 = pcVar2;
        }
        local_5c = (uint)bVar1;
        _objc_storeStrong(&local_70,0);
      }
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_58,0);
    if (local_5c == 0) {
      local_28 = (cfstringStruct *)0x0;
    }
  }
  _objc_autoreleaseReturnValue(local_28);
  return;
}

