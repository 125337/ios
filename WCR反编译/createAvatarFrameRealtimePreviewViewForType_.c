// createAvatarFrameRealtimePreviewViewForType: @ 01815e90

/* Function Stack Size: 0x18 bytes */

ID WCRefineAvatarCornerBeautifyViewController::createAvatarFrameRealtimePreviewViewForType_
             (ID param_1,SEL param_2,long_long param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  ID local_310;
  ID local_300;
  undefined1 auStack_2a8 [48];
  undefined1 auStack_278 [48];
  undefined1 auStack_248 [48];
  undefined1 auStack_218 [48];
  undefined1 auStack_1e8 [48];
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  undefined8 local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  undefined *local_128;
  bool local_119;
  ID local_118;
  ID local_110;
  bool local_101;
  ID local_100;
  ID local_f8;
  ID local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  double local_b0;
  double local_a8;
  undefined *local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  byte local_41;
  undefined *local_40;
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  dVar10 = DAT_02323ca0;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_41 = 0;
  local_50 = (undefined *)0x0;
  local_58 = (undefined *)0x0;
  local_60 = (undefined *)0x0;
  local_68 = (undefined *)0x0;
  local_70 = 0.0;
  local_78 = 0.0;
  dVar5 = 1.5;
  local_80 = 1.5;
  local_40 = puVar2;
  if (local_38 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_avatarFrameChatListEnabled_0269def0);
    local_41 = (byte)puVar2;
    puVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarFrameChatListPath_0269df10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_50;
    local_50 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarFrameChatListNightPath_0269df18);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_58;
    local_58 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarFrameChatListRandomMode_0269df40);
    puVar3 = local_40;
    local_60 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarFrameChatListAddMode_0269df58);
    local_68 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarFrameChatListOffsetX_0269df70);
    local_70 = dVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarFrameChatListOffsetY_0269df78);
    local_78 = dVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarFrameChatListScale_0269df80);
    local_80 = dVar5;
  }
  else if (local_38 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_avatarFrameChatPageEnabled_0269def8);
    local_41 = (byte)puVar2;
    puVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarFrameChatPageOtherPath_0269df20);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_50;
    local_50 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarFrameChatPageOtherNightPat_0269df28);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_58;
    local_58 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarFrameChatPageOtherRandomMo_0269df48);
    puVar3 = local_40;
    local_60 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarFrameChatPageOtherAddMode_0269df60);
    local_68 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarFrameChatPageOtherOffsetX_0269df88);
    local_70 = dVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarFrameChatPageOtherOffsetY_0269df90);
    local_78 = dVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarFrameChatPageOtherScale_0269df98);
    local_80 = dVar5;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_avatarFrameChatPageEnabled_0269def8);
    local_41 = (byte)puVar2;
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarFrameChatPageDistinguishSe_0269df00);
    if (((ulong)puVar2 & 1) == 0) {
      puVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarFrameChatPageOtherPath_0269df20);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_50;
      local_50 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_avatarFrameChatPageOtherNightPat_0269df28);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_58;
      local_58 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_avatarFrameChatPageOtherRandomMo_0269df48);
      puVar3 = local_40;
      local_60 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarFrameChatPageOtherAddMode_0269df60)
      ;
      local_68 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarFrameChatPageOtherOffsetX_0269df88)
      ;
      local_70 = dVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarFrameChatPageOtherOffsetY_0269df90)
      ;
      local_78 = dVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarFrameChatPageOtherScale_0269df98);
      local_80 = dVar5;
    }
    else {
      puVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarFrameChatPageSelfPath_0269df30);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_50;
      local_50 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_avatarFrameChatPageSelfNightPath_0269df38);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_58;
      local_58 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_avatarFrameChatPageSelfRandomMod_0269df50);
      puVar3 = local_40;
      local_60 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarFrameChatPageSelfAddMode_0269df68);
      local_68 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarFrameChatPageSelfOffsetX_0269dfa0);
      local_70 = dVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarFrameChatPageSelfOffsetY_0269dfa8);
      local_78 = dVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarFrameChatPageScale_0269dfb0);
      local_80 = dVar5;
    }
  }
  local_88 = 60.0;
  local_90 = 72.0;
  local_98 = 72.0;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uVar8 = 0;
  uVar6 = 0;
  dVar5 = local_90;
  dVar11 = local_98;
  FUN_01815654();
  local_c0 = uVar6;
  local_b8 = uVar8;
  local_b0 = dVar5;
  local_a8 = dVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar6,uVar8,dVar5,dVar11,puVar2,PTR_s_initWithFrame__026ca6e8);
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_a0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setClipsToBounds__026ca8c8,0);
  puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
  _objc_alloc();
  dVar5 = (local_90 - local_88) / 2.0;
  dVar9 = (local_98 - local_88) / 2.0;
  dVar11 = local_88;
  dVar12 = local_88;
  FUN_01815654();
  local_e8 = dVar5;
  local_e0 = dVar9;
  local_d8 = dVar11;
  local_d0 = dVar12;
  (*(code *)PTR__objc_msgSend_02578628)(dVar5,dVar9,puVar2,PTR_s_initWithFrame__026ca6e8);
  local_c8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setContentMode__026ca8e0,2);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  dVar5 = DAT_023242b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_023242b8,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentSelfAvatarImageForPreview_026b6078);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setImage__026ca978);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_applyAvatarCornerStyleToPreviewA_026b6080,local_c8,local_38);
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_effectiveAvatarFramePathForCurre_026b6088,local_50,local_58);
  _objc_retainAutoreleasedReturnValue();
  local_101 = false;
  bVar1 = (local_41 & 1) == 0;
  local_f0 = IVar4;
  if (bVar1) {
    local_300 = 0;
  }
  else {
    local_300 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_effectiveAvatarFrameRelativePath_026b6090,local_60,IVar4);
    _objc_retainAutoreleasedReturnValue();
    local_100 = local_300;
  }
  local_101 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_f8 = local_300;
  if ((local_101 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_100);
  }
  local_119 = false;
  bVar1 = (local_41 & 1) == 0;
  if (bVar1) {
    local_310 = 0;
  }
  else {
    local_310 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_resolvedAvatarFrameImagePathForP_026b6098,local_f8);
    _objc_retainAutoreleasedReturnValue();
    local_118 = local_310;
  }
  local_119 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_110 = local_310;
  if ((local_119 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_118);
  }
  local_128 = (undefined *)0x0;
  IVar4 = local_110;
  (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0);
  if (IVar4 != 0) {
    local_130 = local_80;
    if ((local_80 <= 0.0) || (5.0 < local_80)) {
      local_130 = 1.5;
    }
    if (local_130 < dVar10) {
      local_130 = dVar10;
    }
    local_138 = local_88 * local_130;
    dVar9 = local_88 * local_130;
    dVar10 = local_130;
    local_140 = dVar9;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_frame_026ca640);
    uVar6 = 0x4000000000000000;
    dVar7 = dVar9 + (local_88 - local_138) / 2.0 + local_70;
    dVar5 = local_70;
    local_168 = dVar9;
    local_160 = dVar10;
    local_158 = dVar11;
    local_150 = dVar12;
    local_148 = dVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_frame_026ca640);
    local_170 = (dVar5 + (local_88 - local_140) / 2.0) - local_78;
    puVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    local_190 = dVar7;
    local_188 = dVar5;
    local_180 = uVar6;
    local_178 = dVar12;
    _objc_alloc();
    dVar5 = local_148;
    dVar10 = local_170;
    dVar11 = local_138;
    dVar12 = local_140;
    FUN_01815654();
    local_1b0 = dVar5;
    local_1a8 = dVar10;
    local_1a0 = dVar11;
    local_198 = dVar12;
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar5,dVar10,dVar11,dVar12,puVar3,PTR_s_initWithFrame__026ca6e8);
    puVar2 = local_128;
    local_128 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setContentMode__026ca8e0,1);
    puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,local_110)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setImage__026ca978);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  if ((local_128 != (undefined *)0x0) && (local_68 != (undefined *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_addSubview__026ca4c0,local_128);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_addSubview__026ca4c0,local_c8);
  if ((local_128 != (undefined *)0x0) && (local_68 == (undefined *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_addSubview__026ca4c0,local_128);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_normalizedAvatarCornerScaleValue_026b60a0);
  local_1b8 = dVar5;
  if (DAT_02323d10 <= ABS(dVar5 - 1.0)) {
    _CGAffineTransformMakeScale(auStack_1e8,dVar5,dVar5);
  }
  else {
    _memcpy(auStack_1e8,PTR__CGAffineTransformIdentity_025782d8,0x30);
  }
  _memcpy(auStack_218,auStack_1e8,0x30);
  puVar2 = local_c8;
  _memcpy(auStack_248,auStack_218,0x30);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTransform__026caad0,auStack_248);
  if (local_128 != (undefined *)0x0) {
    _memcpy(auStack_278,auStack_1e8,0x30);
    puVar2 = local_128;
    _memcpy(auStack_2a8,auStack_278,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTransform__026caad0,auStack_2a8);
  }
  puVar2 = local_a0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_128);
  _objc_storeStrong(&local_110,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

