// installHeaderAvatarInView:width: @ 01786af8

/* Function Stack Size: 0x20 bytes */

void WCPluginsViewControllerBehavior::installHeaderAvatarInView_width_
               (ID param_1,SEL param_2,ID param_3,double param_4)

{
  bool bVar1;
  char *pcVar2;
  undefined *puVar3;
  ID IVar4;
  char *pcVar5;
  undefined *puVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  undefined *local_1e8;
  uint local_1bc;
  undefined *local_1b0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  undefined *local_168;
  double local_160;
  double dStack_158;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  undefined *local_118;
  bool local_109;
  undefined *local_108;
  undefined *local_100;
  char *local_f8;
  byte local_ea;
  bool local_e9;
  undefined *local_e8;
  undefined *local_e0;
  char *local_d8;
  double local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  double local_98;
  byte local_89;
  ID local_88;
  undefined *local_80;
  double local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  double local_50;
  double local_48;
  double local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_48 = 76.0;
  local_180 = (param_4 - 76.0) * 0.5;
  local_58 = 0x4041000000000000;
  uVar8 = 0x4041000000000000;
  uVar10 = 0x4053000000000000;
  uVar12 = 0x4053000000000000;
  local_50 = local_180;
  local_40 = param_4;
  FUN_0177f868();
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_78 = local_180;
  local_70 = uVar8;
  local_68 = uVar10;
  local_60 = uVar12;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_28;
  local_80 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_configuredHeaderImagePath_026b46b8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_80;
  local_88 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_pluginTopAvatarEnabled_026a65b8);
  local_89 = false;
  if (((ulong)puVar3 & 1) != 0) {
    IVar4 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
    local_89 = IVar4 != 0;
  }
  if ((bool)local_89 == false) {
    local_188 = 1.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_pluginTopAvatarScale_026a65d0);
    if (local_180 <= 0.0) {
      local_180 = 1.0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_pluginTopAvatarScale_026a65d0);
    }
    local_188 = local_180;
  }
  local_98 = local_188;
  if ((local_89 & 1) == 0) {
    local_198 = 0.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_pluginTopAvatarCornerRadius_026a65d8);
    if (local_188 <= 0.0) {
      local_190 = 1.0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_pluginTopAvatarCornerRadius_026a65d8);
      local_190 = local_188;
    }
    local_198 = local_190;
  }
  local_a0 = local_198;
  local_a8 = local_48 * local_98;
  dVar7 = local_78;
  _CGRectGetMidX(local_78,local_70,local_68,local_60);
  dVar7 = dVar7 - local_a8 * 0.5;
  dVar9 = local_78;
  _CGRectGetMidY(local_78,local_70,local_68,local_60);
  dVar9 = dVar9 - local_a8 * 0.5;
  dVar11 = local_a8;
  dVar13 = local_a8;
  FUN_0177f868();
  local_d0 = local_a8 * 0.5 * local_a0;
  local_d8 = (char *)0x0;
  local_e9 = false;
  bVar1 = (local_89 & 1) == 0;
  local_c8 = dVar7;
  dStack_c0 = dVar9;
  local_b8 = dVar11;
  dStack_b0 = dVar13;
  if (bVar1) {
    local_1b0 = (undefined *)0x0;
  }
  else {
    local_1b0 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_88);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = local_1b0;
  }
  local_e9 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_e0 = local_1b0;
  if ((local_e9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  puVar3 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
  local_1bc = 0;
  if (puVar3 != (undefined *)0x0) {
    puVar3 = PTR_WCRefineEmoticonUtil_026ce1c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineEmoticonUtil_026ce1c8,PTR_s_isGifData__0269e0a8,local_e0);
    local_1bc = (uint)puVar3;
  }
  local_ea = (byte)local_1bc & 1;
  if (((local_89 & 1) != 0) && ((local_1bc & 1) != 0)) {
    pcVar5 = "MMEmoticonView";
    _objc_getClass();
    local_f8 = pcVar5;
    if (pcVar5 != (char *)0x0) {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,dStack_c0,local_b8,dStack_b0);
      pcVar2 = local_d8;
      local_d8 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setTag__026caa80,DAT_02339b10);
      dVar7 = local_d0;
      pcVar5 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(dVar7);
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar5 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setUserInteractionEnabled__026caad8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addSubview__026ca4c0,local_d8);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineEmoticonUtil_026ce1c8,PTR_s_setEmoticonOnView_imageAtPath__026a65e0,
                 local_d8,local_88);
    }
  }
  if (local_d8 == (char *)0x0) {
    local_109 = false;
    bVar1 = (local_89 & 1) == 0;
    if (bVar1) {
      local_1e8 = (undefined *)0x0;
    }
    else {
      local_1e8 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,local_88
                );
      _objc_retainAutoreleasedReturnValue();
      local_108 = local_1e8;
    }
    local_109 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_100 = local_1e8;
    if ((local_109 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_108);
    }
    if (local_100 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageNamed__0269fd20,&cf_WeChat_Lab_Logo);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_100;
      local_100 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    dStack_138 = dStack_c0;
    local_140 = local_c8;
    dStack_128 = dStack_b0;
    local_130 = local_b8;
    dStack_158 = dStack_c0;
    local_160 = local_c8;
    dStack_148 = dStack_b0;
    local_150 = local_b8;
    local_118 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,dStack_c0,local_b8,dStack_b0,puVar3,PTR_s_setFrame__026ca960);
    uVar8 = 2;
    if ((local_89 & 1) == 0) {
      uVar8 = 1;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setContentMode__026ca8e0,uVar8);
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setClipsToBounds__026ca8c8,local_89 & 1);
    dVar7 = local_d0;
    if ((local_89 & 1) != 0) {
      puVar3 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(dVar7);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setTag__026caa80,DAT_02339b10);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setUserInteractionEnabled__026caad8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addSubview__026ca4c0,local_118);
    _objc_storeStrong(&local_d8,local_118);
    _objc_storeStrong(&local_118);
    _objc_storeStrong(&local_100,0);
  }
  _WCRefineInstallPluginHubHideGesture(local_d8);
  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_168 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setNumberOfTapsRequired__026ca9e0,2);
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addGestureRecognizer__026ca4a8,local_168);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineAvatarFramePageOverlayHelper_026cefb0,
             PTR_s_applySpecialPageFrameOnAvatarVie_026b46c8,local_d8,local_38,
             _WCRefineAvatarFrameSpecialKeyPluginHub);
  _objc_storeStrong(&local_168);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_38,0);
  return;
}

