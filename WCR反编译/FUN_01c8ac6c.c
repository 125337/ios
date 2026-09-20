// FUN_01c8ac6c @ 01c8ac6c

void FUN_01c8ac6c(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  char *local_68;
  char *local_60;
  bool local_51;
  char *local_50;
  char *local_48;
  char *local_40;
  undefined4 local_34;
  char *local_30;
  char *local_28;
  undefined8 local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar4 = "MMServiceCenter";
  _objc_getClass();
  pcVar5 = "MMThemeManager";
  local_28 = pcVar4;
  _objc_getClass();
  local_30 = pcVar5;
  if (((local_28 == (char *)0x0) || (pcVar5 == (char *)0x0)) ||
     (pcVar4 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
     ((ulong)pcVar4 & 1) == 0)) {
    local_18 = (char *)0x0;
    local_34 = 1;
  }
  else {
    pcVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
    local_51 = false;
    bVar1 = ((ulong)pcVar4 & 1) == 0;
    if (bVar1) {
      local_68 = (char *)0x0;
    }
    else {
      local_68 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getService__0269d170,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_68;
    }
    local_51 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_68;
    if ((local_51 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    local_60 = (char *)0x0;
    pcVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_svgImageNamed_color__0269f760);
    uVar3 = local_20;
    pcVar4 = local_48;
    puVar2 = PTR_s_svgImageNamed_color__0269f760;
    if (((ulong)pcVar5 & 1) != 0) {
      puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,puVar2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = local_60;
      local_60 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    if ((local_60 == (char *)0x0) &&
       (pcVar4 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_imageNamed__0269fd20),
       ((ulong)pcVar4 & 1) != 0)) {
      pcVar5 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_imageNamed__0269fd20,local_20);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_60;
      local_60 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    pcVar4 = local_60;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar4;
    local_34 = 1;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

