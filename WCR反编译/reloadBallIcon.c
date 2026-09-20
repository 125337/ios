// reloadBallIcon @ 015e6cc8

/* Function Stack Size: 0x10 bytes */

void WCRQuickChatWindow::reloadBallIcon(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  cfstringStruct *pcVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  double in_d2;
  double dVar11;
  undefined8 in_d3;
  undefined8 uVar12;
  double local_410;
  cfstringStruct *local_328;
  uint local_314;
  cfstringStruct *local_308;
  double local_2f8;
  cfstringStruct *local_190;
  double local_188;
  double local_180;
  undefined8 local_178;
  double local_170;
  double local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  double local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  double local_130;
  undefined8 uStack_128;
  double local_120;
  double dStack_118;
  double local_110;
  undefined8 uStack_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  undefined8 uStack_e8;
  cfstringStruct *local_d8;
  byte local_c9;
  undefined *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  double local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  undefined8 uStack_88;
  double local_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  double local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_38 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ball_026b11a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ball_026b11a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ball_026b11a0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ball_026b11a0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ball_026b11a0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballAvatarHost_026b12f8);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  if ((IVar4 & 1) == 0) {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballDisc_026b1300);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballDisc_026b1300);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballIcon_026b1308);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballIcon_026b1308);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballIcon_026b1308);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ball_026b11a0);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballAvatarHost_026b12f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_bringSubviewToFront__026ca550);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_3c = 1;
  }
  else {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ball_026b11a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar11 = in_d2;
    local_68 = uVar6;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    dVar9 = 1.0;
    local_48 = in_d2;
    if (in_d2 < 1.0) {
      dVar9 = 1.0;
      local_70 = 1.0;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_quickChatBallSize_026b1310);
      local_2f8 = dVar9;
      if (dVar9 <= local_70) {
        local_2f8 = local_70;
      }
      local_80 = local_2f8;
      local_48 = local_2f8;
      local_78 = dVar9;
    }
    dVar7 = local_48;
    FUN_015e8030();
    pcVar1 = local_38;
    local_a8 = dVar11;
    local_a0 = dVar7;
    dStack_98 = dVar9;
    local_90 = dVar11;
    uStack_88 = in_d3;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_quickChatBallIconPath_026b1318);
    _objc_retainAutoreleasedReturnValue();
    local_308 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_308 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = local_308;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    local_b8 = (cfstringStruct *)0x0;
    pcVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
    if (pcVar1 != (cfstringStruct *)0x0) {
      pcVar5 = local_b0;
      FUN_015e8120(pcVar1);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_length_0269cca0);
      local_c9 = 0;
      local_314 = 0;
      if (pcVar5 != (cfstringStruct *)0x0) {
        puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        local_c9 = 1;
        local_c8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_314 = (uint)puVar2;
      }
      if ((local_c9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_c8);
      }
      if ((local_314 & 1) != 0) {
        pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___UIImage_026cdfd0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,
                   local_c0);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_b8;
        local_b8 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      _objc_storeStrong(&local_c0,0);
    }
    if (local_b8 == (cfstringStruct *)0x0) {
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_quickChatBallIconId_026b1320);
      _objc_retainAutoreleasedReturnValue();
      local_328 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_328 = &::cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_d8 = local_328;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
      if (pcVar1 != (cfstringStruct *)0x0) {
        pcVar5 = local_d8;
        FUN_015e827c(pcVar1,local_a8,local_d8,0);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_b8;
        local_b8 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      _objc_storeStrong(&local_d8,0);
    }
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballDisc_026b1300);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    dStack_f8 = dStack_98;
    local_100 = local_a0;
    uStack_e8 = uStack_88;
    local_f0 = local_90;
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballDisc_026b1300);
    _objc_retainAutoreleasedReturnValue();
    dStack_118 = dStack_f8;
    local_120 = local_100;
    uStack_108 = uStack_e8;
    local_110 = local_f0;
    dVar11 = local_f0;
    uVar6 = uStack_e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,dStack_f8);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    uVar10 = 0x3fe0000000000000;
    dVar9 = local_a8 * 0.5;
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballDisc_026b1300);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(dVar9);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballDisc_026b1300);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballIcon_026b1308);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = 0x3ff0000000000000;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballIcon_026b1308);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if (local_b8 == (cfstringStruct *)0x0) {
      local_168 = local_a8 * DAT_02323c70;
      local_178 = 0x3ff0000000000000;
      local_180 = local_a8 - local_168 * 2.0;
      local_410 = local_180;
      if (local_180 <= 1.0) {
        local_410 = 1.0;
      }
      local_188 = local_410;
      local_170 = local_410;
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = &cf_icons_filled_chats;
      FUN_015e827c(local_410);
      _objc_retainAutoreleasedReturnValue();
      local_190 = pcVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      uVar6 = 0x3fc3333333333333;
      uVar10 = 0x3fe8000000000000;
      uVar8 = 0x3fd6666666666666;
      uVar12 = 0x3ff0000000000000;
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballDisc_026b1300);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballIcon_026b1308);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballIcon_026b1308);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballIcon_026b1308);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballDisc_026b1300);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      _CGRectInset();
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballIcon_026b1308);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,uVar10,uVar8,uVar12);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballIcon_026b1308);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballIcon_026b1308);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      _objc_storeStrong(&local_190,0);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballDisc_026b1300);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballIcon_026b1308);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballIcon_026b1308);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballIcon_026b1308);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballDisc_026b1300);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      IVar4 = local_28;
      local_140 = uVar8;
      uStack_138 = uVar10;
      local_130 = dVar11;
      uStack_128 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballIcon_026b1308);
      _objc_retainAutoreleasedReturnValue();
      uStack_158 = uStack_138;
      local_160 = local_140;
      uStack_148 = uStack_128;
      local_150 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,uStack_138,local_130,uStack_128);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballIcon_026b1308);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_a8 * 0.5);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballIcon_026b1308);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    _objc_storeStrong(&local_b8);
    _objc_storeStrong(&local_b0,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

