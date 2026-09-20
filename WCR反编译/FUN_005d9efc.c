// FUN_005d9efc @ 005d9efc

void FUN_005d9efc(void)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *local_78;
  char *local_70;
  char *local_68;
  cfstringStruct *local_60;
  char *local_58;
  uint local_50;
  char *local_40;
  char *local_38;
  char *local_30;
  char *local_28;
  
  pcVar3 = "MMContext";
  _objc_getClass();
  pcVar4 = "MMThemeManager";
  local_30 = pcVar3;
  _objc_getClass();
  pcVar3 = local_30;
  local_38 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8);
  if (((ulong)pcVar3 & 1) == 0) {
    local_28 = (char *)0x0;
    goto LAB_005da35c;
  }
  pcVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_currentContext_0269d5f8);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar3;
  if ((pcVar3 == (char *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
     ((ulong)pcVar3 & 1) == 0)) {
    local_28 = (char *)0x0;
    local_50 = 1;
  }
  else {
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getService__0269d170,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      local_28 = (char *)0x0;
      local_50 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = &cf_icons_outlined_colorful_moment;
      local_68 = (char *)0x0;
      pcVar3 = "WCColor";
      _objc_getClass();
      local_70 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_FG_0_026a1348);
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar4 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_FG_0_026a1348);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_68;
        local_68 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      if (local_68 == (char *)0x0) {
        pcVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_68;
        local_68 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      pcVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_respondsToSelector__026ca818,
                 PTR_s_svgImageNamed_size_color__026a1350);
      pcVar3 = local_58;
      pcVar2 = local_60;
      puVar1 = PTR_s_svgImageNamed_size_color__026a1350;
      if (((ulong)pcVar4 & 1) == 0) {
LAB_005da288:
        pcVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_imageNamed__0269fd20);
        if (((ulong)pcVar3 & 1) == 0) {
          local_28 = (char *)0x0;
          local_50 = 1;
        }
        else {
          pcVar3 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_imageNamed__0269fd20,local_60);
          _objc_retainAutoreleasedReturnValue();
          local_50 = 1;
          local_28 = pcVar3;
        }
      }
      else {
        uVar6 = 0x4038000000000000;
        uVar5 = 0x4038000000000000;
        FUN_005dab8c();
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,uVar6,pcVar3,puVar1,pcVar2,local_68);
        _objc_retainAutoreleasedReturnValue();
        local_78 = pcVar3;
        if (pcVar3 != (char *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = pcVar3;
        }
        local_50 = (uint)(pcVar3 != (char *)0x0);
        _objc_storeStrong(&local_78,0);
        if (local_50 == 0) goto LAB_005da288;
      }
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40,0);
LAB_005da35c:
  _objc_autoreleaseReturnValue(local_28);
  return;
}

