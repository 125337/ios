// avatarFramePreviewForUsername: @ 0184752c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRefineAvatarFrameSpecialUsersViewController::avatarFramePreviewForUsername_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  undefined *local_288;
  undefined *local_1a0;
  undefined *local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  long local_178;
  double local_170;
  double local_168;
  double local_160;
  long local_158;
  undefined8 local_150;
  byte local_141;
  double local_140;
  undefined8 uStack_138;
  double local_130;
  double dStack_128;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  byte local_f1;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  double local_c8;
  double local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  undefined *local_80;
  double local_78;
  undefined8 local_70;
  undefined8 local_68;
  double local_60;
  double local_58;
  undefined *local_50;
  double local_48;
  double local_40;
  ulong local_38;
  SEL local_30;
  undefined *local_28;
  
  dVar10 = DAT_02339d20;
  local_38 = 0;
  local_30 = param_2;
  local_28 = (undefined *)param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 58.0;
  local_48 = 40.0;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uVar11 = 0;
  uVar6 = 0;
  dVar7 = local_40;
  dVar8 = local_40;
  FUN_01846960();
  local_70 = uVar6;
  local_68 = uVar11;
  local_60 = dVar7;
  local_58 = dVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar6,uVar11,dVar7,dVar8,puVar2,PTR_s_initWithFrame__026ca6e8);
  local_50 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTag__026caa80,DAT_02339d28);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setClipsToBounds__026ca8c8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setUserInteractionEnabled__026caad8,0);
  local_78 = (local_40 - local_48) / 2.0;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  dVar7 = local_78;
  dVar8 = local_78;
  dVar9 = local_48;
  dVar12 = local_48;
  FUN_01846960();
  local_a0 = dVar7;
  local_98 = dVar8;
  local_90 = dVar9;
  local_88 = dVar12;
  (*(code *)PTR__objc_msgSend_02578628)(dVar7,dVar8,puVar2,PTR_s_initWithFrame__026ca6e8);
  local_80 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTag__026caa80,DAT_02339d30);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setClipsToBounds__026ca8c8,1);
  uVar6 = 0x4000000000000000;
  dVar7 = local_48 / 2.0;
  puVar2 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_a8 = (undefined *)0x0;
  puVar2 = PTR_WCRefineAvatarFramePageOverlayHelper_026cefb0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineAvatarFramePageOverlayHelper_026cefb0,PTR_s_isReservedSpecialKey__026b6610,
             local_38);
  if (((ulong)puVar2 & 1) == 0) {
    puVar4 = local_28;
    dVar7 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_nativeHeadViewForUsername_size__026b67c0,local_38);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_a8;
    local_a8 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else {
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_isEqualToString__0269ccc8,_WCRefineAvatarFrameSpecialKeyMyPage);
    if (((uVar3 & 1) != 0) ||
       (uVar3 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_38,PTR_s_isEqualToString__0269ccc8,_WCRefineAvatarFrameSpecialKeyPluginMenu)
       , (uVar3 & 1) != 0)) {
      puVar2 = PTR_WCRefineAvatarFramePageOverlayHelper_026cefb0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineAvatarFramePageOverlayHelper_026cefb0,
                 PTR_s_selfContactUsername_026b67b8);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
      if (puVar2 != (undefined *)0x0) {
        puVar4 = local_28;
        dVar7 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_nativeHeadViewForUsername_size__026b67c0,local_b0);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_a8;
        local_a8 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      _objc_storeStrong(&local_b0,0);
    }
    if (local_a8 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
      _objc_alloc();
      uVar11 = 0;
      uVar6 = 0;
      dVar9 = local_48;
      dVar12 = local_48;
      FUN_01846960();
      local_d8 = uVar6;
      local_d0 = uVar11;
      local_c8 = dVar9;
      local_c0 = dVar12;
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,uVar11,puVar2,PTR_s_initWithFrame__026ca6e8);
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_b8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_023242b8,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setContentMode__026ca8e0,2);
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setClipsToBounds__026ca8c8,1);
      uVar6 = 0x4000000000000000;
      dVar7 = local_48 / 2.0;
      puVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_avatarImageCache_026b67a0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_e0 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_f1 = 0;
      bVar1 = local_e0 == (undefined *)0x0;
      if (bVar1) {
        local_288 = PTR_WCRefineAvatarFramePageOverlayHelper_026cefb0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineAvatarFramePageOverlayHelper_026cefb0,
                   PTR_s_syncPreviewAvatarImageForSpecial_026ab1f0,local_38);
        _objc_retainAutoreleasedReturnValue();
        local_f0 = local_288;
      }
      else {
        local_288 = local_e0;
      }
      local_f1 = bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_e8 = local_288;
      if ((local_f1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_f0);
      }
      if (local_e8 == (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_loadPageAvatarImageForSpecialKey_026b67b0,local_38);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setImage__026ca978,local_e8);
        if (local_e0 == (undefined *)0x0) {
          puVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_avatarImageCache_026b67a0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
      }
      _objc_storeStrong(&local_a8,local_b8);
      _objc_storeStrong(&local_e8);
      _objc_storeStrong(&local_e0,0);
      _objc_storeStrong(&local_b8,0);
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_bounds_026ca548);
  local_140 = dVar7;
  uStack_138 = uVar6;
  local_130 = dVar9;
  dStack_128 = dVar12;
  local_118 = dVar7;
  uStack_110 = uVar6;
  local_108 = dVar9;
  dStack_100 = dVar12;
  (*(code *)PTR__objc_msgSend_02578628)(dVar7,uVar6,dVar9,dVar12,local_a8,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setAutoresizingMask__026ca878,0x12);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_addSubview__026ca4c0,local_a8);
  local_141 = 0;
  local_150 = 0;
  local_158 = 0;
  local_160 = 1.5;
  local_168 = 0.0;
  local_170 = 0.0;
  local_178 = 0;
  local_180 = 0;
  local_188 = 0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_resolvePreviewFrameForUsername_d_026b67c8,local_38,&local_180,&local_188
             ,&local_160,&local_168,&local_170,&local_178,&local_141);
  _objc_storeStrong(&local_150,local_180);
  _objc_storeStrong(&local_158,local_188);
  local_190 = 0;
  if ((local_141 & 1) != 0) {
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isDarkMode_0269f410);
    if ((((ulong)puVar2 & 1) == 0) ||
       (lVar5 = local_158, (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0),
       lVar5 == 0)) {
      _objc_storeStrong(&local_190,local_150);
    }
    else {
      _objc_storeStrong(lVar5,&local_190,local_158);
    }
  }
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_resolvedImagePathForRelative__026ab210,local_190);
  _objc_retainAutoreleasedReturnValue();
  local_1a0 = (undefined *)0x0;
  local_198 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
  if (puVar2 != (undefined *)0x0) {
    dVar7 = local_48 * local_160;
    dVar8 = local_48 * local_160;
    dVar9 = local_78 + (local_48 - dVar7) / 2.0 + dVar10 * local_168;
    dVar10 = (local_78 + (local_48 - dVar8) / 2.0) - dVar10 * local_170;
    puVar4 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    _objc_alloc();
    FUN_01846960();
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar9,dVar10,dVar7,dVar8,puVar4,PTR_s_initWithFrame__026ca6e8);
    puVar2 = local_1a0;
    local_1a0 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_setTag__026caa80,DAT_02339d38);
    (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_setContentMode__026ca8e0,1);
    puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,local_198)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_setImage__026ca978);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_setUserInteractionEnabled__026caad8,0);
  }
  if ((local_1a0 != (undefined *)0x0) && (local_178 != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_1a0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_80);
  if ((local_1a0 != (undefined *)0x0) && (local_178 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_1a0);
  }
  puVar2 = local_50;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_1a0);
  _objc_storeStrong(&local_198,0);
  _objc_storeStrong(&local_190,0);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

