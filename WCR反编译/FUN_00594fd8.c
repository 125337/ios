// FUN_00594fd8 @ 00594fd8

void FUN_00594fd8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  uint local_54;
  char *local_50;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  pcVar3 = "MMContext";
  _objc_getClass();
  pcVar4 = "MMThemeManager";
  local_38 = pcVar3;
  _objc_getClass();
  pcVar3 = local_38;
  local_50 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8);
  if (((ulong)pcVar3 & 1) == 0) {
    local_28 = (char *)0x0;
    local_54 = 1;
    goto LAB_00595440;
  }
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_currentContext_0269d5f8);
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar3;
  if ((pcVar3 == (char *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
     ((ulong)pcVar3 & 1) == 0)) {
    local_28 = (char *)0x0;
    local_54 = 1;
  }
  else {
    pcVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_getService__0269d170,local_50);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      local_28 = (char *)0x0;
      local_54 = 1;
    }
    else {
      local_70 = (char *)0x0;
      pcVar3 = "WCColor";
      _objc_getClass();
      local_78 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_FG_0_026a1348);
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar4 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_FG_0_026a1348);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_70;
        local_70 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      if (local_70 == (char *)0x0) {
        pcVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_70;
        local_70 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      pcVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_respondsToSelector__026ca818,
                 PTR_s_svgImageNamed_size_color__026a1350);
      uVar2 = local_30;
      pcVar3 = local_68;
      puVar1 = PTR_s_svgImageNamed_size_color__026a1350;
      if (((ulong)pcVar4 & 1) == 0) {
LAB_0059537c:
        pcVar3 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_imageNamed__0269fd20);
        if (((ulong)pcVar3 & 1) == 0) {
          local_28 = (char *)0x0;
          local_54 = 1;
        }
        else {
          pcVar3 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_imageNamed__0269fd20,local_30);
          _objc_retainAutoreleasedReturnValue();
          local_54 = 1;
          local_28 = pcVar3;
        }
      }
      else {
        uVar6 = 0x4038000000000000;
        uVar5 = 0x4038000000000000;
        FUN_00576944();
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,uVar6,pcVar3,puVar1,uVar2,local_70);
        _objc_retainAutoreleasedReturnValue();
        local_80 = pcVar3;
        if (pcVar3 != (char *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = pcVar3;
        }
        local_54 = (uint)(pcVar3 != (char *)0x0);
        _objc_storeStrong(&local_80,0);
        if (local_54 == 0) goto LAB_0059537c;
      }
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_60,0);
LAB_00595440:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

