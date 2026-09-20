// FUN_002840d8 @ 002840d8

void FUN_002840d8(void)

{
  bool bVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *local_168;
  char *local_a8;
  char *local_78;
  undefined *local_70;
  char *local_68;
  char *local_60;
  int local_58;
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  char *local_28;
  
  pcVar3 = "MMContext";
  _objc_getClass();
  pcVar4 = "MMThemeManager";
  local_30 = pcVar3;
  _objc_getClass();
  pcVar3 = "WCColor";
  local_38 = pcVar4;
  _objc_getClass();
  pcVar4 = local_30;
  local_40 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8);
  if ((((ulong)pcVar4 & 1) == 0) || (local_38 == (char *)0x0)) {
    local_28 = (char *)0x0;
    goto LAB_0028466c;
  }
  pcVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_currentContext_0269d5f8);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
  if (((ulong)pcVar3 & 1) == 0) {
    local_28 = (char *)0x0;
    local_58 = 1;
  }
  else {
    pcVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getService__0269d170,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_68 = (char *)0x0;
    pcVar4 = local_40;
    local_60 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_FG_0_026a1348);
    if (((ulong)pcVar4 & 1) != 0) {
      pcVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_FG_0_026a1348);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_68;
      local_68 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    local_70 = PTR_s_svgImageNamed_size_color__026a1350;
    pcVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_svgImageNamed_size_color__026a1350)
    ;
    pcVar3 = local_60;
    puVar2 = local_70;
    if (((ulong)pcVar4 & 1) == 0) {
LAB_00284498:
      puVar2 = PTR_s_svgImageNamed_color__0269f760;
      pcVar4 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_svgImageNamed_color__0269f760);
      pcVar3 = local_60;
      if (((ulong)pcVar4 & 1) == 0) {
        local_28 = (char *)0x0;
        local_58 = 1;
      }
      else {
        bVar1 = local_68 == (char *)0x0;
        if (bVar1) {
          local_168 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
          _objc_retainAutoreleasedReturnValue();
          local_a8 = local_168;
        }
        else {
          local_168 = local_68;
        }
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar2,&cf_icons_outlined_download,local_168);
        _objc_retainAutoreleasedReturnValue();
        local_28 = pcVar3;
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_a8);
        }
        local_58 = 1;
      }
    }
    else {
      uVar6 = 0x4040000000000000;
      uVar5 = 0x4040000000000000;
      FUN_00284954();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar5,uVar6,pcVar3,puVar2,&cf_icons_outlined_download,local_68);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_60;
      puVar2 = local_70;
      local_78 = pcVar3;
      if (pcVar3 == (char *)0x0) {
        uVar6 = 0x4040000000000000;
        uVar5 = 0x4040000000000000;
        FUN_00284954();
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,uVar6,pcVar4,puVar2,&cf_icons_filled_download,local_68);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_78;
        local_78 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar3 = local_78;
        if (local_78 == (char *)0x0) {
          local_58 = 0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = pcVar3;
          local_58 = 1;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_58 = 1;
        local_28 = pcVar3;
      }
      _objc_storeStrong(&local_78,0);
      if (local_58 == 0) goto LAB_00284498;
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_48,0);
LAB_0028466c:
  _objc_autoreleaseReturnValue(local_28);
  return;
}

