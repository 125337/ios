// FUN_004536d0 @ 004536d0

void FUN_004536d0(double param_1,double param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  double dVar6;
  double dVar7;
  double local_250;
  char *local_1b8;
  char *local_180;
  char *local_a0;
  char *local_98;
  byte local_89;
  char *local_88;
  char *local_80;
  char *local_78;
  double local_70;
  double dStack_68;
  char *local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  double local_38;
  double dStack_30;
  char *local_28;
  
  local_40 = 0;
  local_38 = param_1;
  dStack_30 = param_2;
  _objc_storeStrong(&local_40,param_3);
  lVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_28 = (char *)0x0;
    local_50 = 1;
  }
  else {
    FUN_00453304();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = PTR_WCRefineWechatThemeStore_026ce6d0;
    local_58 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_40;
    dStack_68 = dStack_30;
    local_70 = local_38;
    puVar4 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    dVar6 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar5 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,dStack_68,dVar6,pcVar3,PTR_s_replacementImageNamed_size_scale_026a3d10,lVar2
               ,local_58);
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = "MMServiceCenter";
    _objc_getClass();
    local_89 = 0;
    local_78 = pcVar3;
    if ((pcVar3 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
       ((ulong)pcVar3 & 1) == 0)) {
      local_180 = (char *)0x0;
    }
    else {
      local_180 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_89 = 1;
      local_88 = local_180;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = local_180;
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    bVar1 = false;
    if ((local_80 == (char *)0x0) ||
       (pcVar3 = local_80,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_80,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       local_1b8 = local_80, puVar4 = PTR_s_getService__0269d170, ((ulong)pcVar3 & 1) == 0)) {
      local_1b8 = (char *)0x0;
    }
    else {
      pcVar3 = "MMThemeManager";
      _objc_getClass();
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,puVar4,pcVar3);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_a0 = local_1b8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = local_1b8;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_a0);
    }
    puVar4 = PTR_s_svgImageNamed_size_color__026a1350;
    if ((local_60 == (char *)0x0) && (local_98 != (char *)0x0)) {
      pcVar3 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98,PTR_s_respondsToSelector__026ca818,
                 PTR_s_svgImageNamed_size_color__026a1350);
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar5 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,dStack_30,local_98,puVar4,local_40,local_58);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_60;
        local_60 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      puVar4 = PTR_s_svgImageNamed_size_color_alpha__026a3d18;
      if ((local_60 == (char *)0x0) &&
         (pcVar3 = local_98,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_98,PTR_s_respondsToSelector__026ca818,
                    PTR_s_svgImageNamed_size_color_alpha__026a3d18), ((ulong)pcVar3 & 1) != 0)) {
        pcVar5 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,dStack_30,0x3ff0000000000000,local_98,puVar4,local_40,local_58);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_60;
        local_60 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      if ((local_60 == (char *)0x0) &&
         (pcVar3 = local_98,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_98,PTR_s_respondsToSelector__026ca818,PTR_s_svgImageNamed_color__0269f760)
         , ((ulong)pcVar3 & 1) != 0)) {
        pcVar5 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_98,PTR_s_svgImageNamed_color__0269f760,local_40,local_58);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_60;
        local_60 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      if ((local_60 == (char *)0x0) &&
         (pcVar3 = local_98,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_98,PTR_s_respondsToSelector__026ca818,PTR_s_imageNamed__0269fd20),
         ((ulong)pcVar3 & 1) != 0)) {
        pcVar5 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_imageNamed__0269fd20,local_40);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_60;
        local_60 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
    }
    if (local_60 == (char *)0x0) {
      pcVar5 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageNamed__0269fd20,local_40);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_60;
      local_60 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    bVar1 = false;
    if ((local_60 != (char *)0x0) && (bVar1 = false, 1.0 <= local_38)) {
      dVar6 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_size_026cab00);
      dVar7 = 0.5;
      bVar1 = true;
      if (ABS(dVar6 - local_38) <= 0.5) {
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_size_026cab00);
        bVar1 = 0.5 < ABS(dVar7 - dStack_30);
      }
    }
    if (bVar1) {
      if (dStack_30 <= local_38) {
        local_250 = dStack_30;
      }
      else {
        local_250 = local_38;
      }
      pcVar5 = PTR_WCRefinePluginIconCatalog_026ce4e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_250,PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_resizedImage_side__026a3d20,
                 local_60);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_60;
      local_60 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    if (local_60 != (char *)0x0) {
      pcVar5 = local_60;
      _WCRefineColorizePngForSvgRule(local_60,local_40);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_60;
      local_60 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    pcVar3 = local_60;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar3;
    local_50 = 1;
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

