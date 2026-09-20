// layoutChrome @ 015ea8ac

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRQuickChatWindow::layoutChrome(ID param_1,SEL param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  undefined1 *puVar6;
  ulong uVar7;
  cfstringStruct *pcVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  double in_d0;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double in_d2;
  undefined8 uVar16;
  double in_d3;
  double dVar17;
  double local_a38;
  double local_a30;
  double local_a28;
  double local_a10;
  double local_a00;
  double local_9e0;
  double local_9c8;
  ulong local_958;
  ulong local_950;
  double local_7d0;
  double local_7c8;
  double local_7c0;
  double local_7b8;
  double local_7a0;
  double local_798;
  double local_780;
  double local_758;
  uint local_744;
  uint local_740;
  uint local_73c;
  double local_5b0;
  double local_588;
  undefined1 auStack_478 [8];
  long local_470;
  long *local_468;
  ulong local_438;
  double local_430;
  double dStack_428;
  double local_420;
  double dStack_418;
  double local_410;
  double dStack_408;
  double local_400;
  double dStack_3f8;
  double local_3f0;
  double dStack_3e8;
  double local_3e0;
  double dStack_3d8;
  double local_3d0;
  double dStack_3c8;
  double local_3c0;
  double dStack_3b8;
  byte local_3aa;
  byte local_3a9;
  double local_3a8;
  double local_3a0;
  double dStack_398;
  double local_390;
  double dStack_388;
  double local_380;
  double dStack_378;
  double local_370;
  double dStack_368;
  double local_360;
  double dStack_358;
  double local_350;
  double dStack_348;
  double local_340;
  double local_338;
  double local_330;
  double local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  undefined4 local_2ec;
  double local_2e8;
  double local_2d0;
  double dStack_2c8;
  double local_2b0;
  double dStack_2a8;
  double local_2a0;
  double dStack_298;
  double local_290;
  double dStack_288;
  double local_280;
  double dStack_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  undefined8 local_248;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_200;
  undefined1 local_1f1;
  double local_1f0;
  double dStack_1e8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  byte local_171;
  ID local_170;
  byte local_161;
  ID local_160;
  undefined1 local_131;
  double local_130;
  double local_110;
  undefined8 uStack_108;
  double local_100;
  undefined8 uStack_f8;
  double local_e8;
  double local_d8;
  double local_d0;
  double local_c8;
  undefined1 *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_quickChatBallSize_026b1310);
  local_c8 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_bounds_026ca548);
  uStack_108 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 8);
  local_110 = *(double *)PTR__UIEdgeInsetsZero_02578118;
  uStack_f8 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 0x18);
  dVar12 = *(double *)(PTR__UIEdgeInsetsZero_02578118 + 0x10);
  IVar4 = local_b0;
  local_100 = dVar12;
  local_e8 = in_d0;
  local_d8 = in_d2;
  local_d0 = in_d3;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_rootViewController_026ca820);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_130 = dVar12;
  local_110 = dVar12;
  local_100 = in_d2;
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_b0;
  dVar12 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_restoreBallPositionWithSize_boun_026b1390);
  local_131 = (undefined1)IVar4;
  local_161 = 0;
  local_171 = 0;
  local_73c = 0;
  dVar15 = local_e8;
  if ((IVar4 & 1) == 0) {
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ball_026b11a0);
    _objc_retainAutoreleasedReturnValue();
    local_161 = 1;
    local_160 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _CGRectIsEmpty();
    local_740 = 1;
    if ((IVar4 & 1) == 0) {
      IVar4 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ball_026b11a0);
      _objc_retainAutoreleasedReturnValue();
      local_171 = 1;
      local_170 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_e8 = 1.0;
      local_744 = 0;
      if (dVar12 < 1.0) {
        IVar4 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_idleSnapped_026b1350);
        local_744 = (uint)IVar4 ^ 1;
      }
      local_740 = local_744;
    }
    local_73c = local_740;
    dVar15 = local_e8;
  }
  if ((local_171 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_170);
  }
  if ((local_161 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_160);
  }
  if ((local_73c & 1) == 0) {
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_idleSnapped_026b1350);
    if ((IVar4 & 1) == 0) {
      IVar4 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ball_026b11a0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_2d0 = dVar12;
      dStack_2c8 = dVar15;
      (*(code *)PTR__objc_release_02578630)(IVar4);
      dVar12 = local_c8;
      dVar15 = local_c8;
      FUN_015dffd0();
      local_2ec = 8;
      local_2f8 = local_2d0;
      if (local_2d0 <= 8.0) {
        local_7b8 = 8.0;
      }
      else {
        local_7b8 = local_2d0;
      }
      local_300 = local_7b8;
      local_2e8 = local_7b8;
      local_308 = (local_d8 - local_c8) - 8.0;
      local_7c0 = local_308;
      if (local_7b8 < local_308) {
        local_7c0 = local_7b8;
      }
      local_310 = local_7c0;
      local_2d0 = local_7c0;
      local_320 = local_110 + 8.0;
      local_328 = dStack_2c8;
      local_7c8 = local_320;
      if (local_320 < dStack_2c8) {
        local_7c8 = dStack_2c8;
      }
      local_330 = local_7c8;
      local_318 = local_7c8;
      local_338 = ((local_d0 - local_c8) - local_100) - 8.0;
      local_7d0 = local_338;
      if (local_7c8 < local_338) {
        local_7d0 = local_7c8;
      }
      local_340 = local_7d0;
      dStack_2c8 = local_7d0;
      dStack_358 = local_7d0;
      local_360 = local_7c0;
      IVar4 = local_b0;
      local_350 = dVar12;
      dStack_348 = dVar15;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ball_026b11a0);
      _objc_retainAutoreleasedReturnValue();
      dStack_378 = dStack_358;
      local_380 = local_360;
      dStack_368 = dStack_348;
      local_370 = local_350;
      dVar12 = dStack_358;
      (*(code *)PTR__objc_msgSend_02578628)(local_360);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      dVar15 = local_350;
      dVar13 = dStack_348;
    }
    else {
      IVar4 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ball_026b11a0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      uVar16 = 0x3fe0000000000000;
      bVar1 = local_d8 * 0.5 < dVar12;
      local_200 = dVar15;
      (*(code *)PTR__objc_release_02578630)(IVar4);
      local_210 = local_c8 * 0.5;
      if (bVar1) {
        local_780 = local_d8 - local_210;
      }
      else {
        local_780 = -local_210;
      }
      local_218 = local_780;
      dVar15 = 8.0;
      dVar12 = local_110 + 8.0;
      IVar4 = local_b0;
      local_230 = dVar12;
      local_1f1 = bVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ball_026b11a0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_258 = dVar12;
      local_250 = dVar15;
      local_248 = uVar16;
      (*(code *)PTR__objc_release_02578630)(IVar4);
      local_798 = dVar15;
      if (dVar15 <= local_230) {
        local_798 = local_230;
      }
      local_260 = local_798;
      local_228 = local_798;
      local_268 = ((local_d0 - local_c8) - local_100) - 8.0;
      local_7a0 = local_268;
      if (local_798 < local_268) {
        local_7a0 = local_798;
      }
      local_270 = local_7a0;
      local_220 = local_7a0;
      dVar12 = local_218;
      dVar13 = local_c8;
      dVar17 = local_c8;
      local_238 = dVar15;
      FUN_015dff84();
      IVar4 = local_b0;
      local_290 = dVar12;
      dStack_288 = local_7a0;
      local_280 = dVar13;
      dStack_278 = dVar17;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ball_026b11a0);
      _objc_retainAutoreleasedReturnValue();
      dStack_2a8 = dStack_288;
      local_2b0 = local_290;
      dStack_298 = dStack_278;
      local_2a0 = local_280;
      dVar12 = dStack_288;
      (*(code *)PTR__objc_msgSend_02578628)(local_290);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      dVar15 = local_280;
      dVar13 = dStack_278;
    }
  }
  else {
    dVar12 = (local_d8 - local_c8) - 10.0;
    local_1c0 = local_110 + 120.0;
    local_1c8 = local_d0 * DAT_02323f38;
    local_758 = local_1c0;
    if (local_1c0 < local_1c8) {
      local_758 = local_1c8;
    }
    local_1d0 = local_758;
    dVar15 = local_c8;
    dVar13 = local_c8;
    FUN_015dff84();
    IVar4 = local_b0;
    local_1b8 = dVar12;
    dStack_1b0 = local_758;
    local_1a8 = dVar15;
    dStack_1a0 = dVar13;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ball_026b11a0);
    _objc_retainAutoreleasedReturnValue();
    dStack_1e8 = dStack_1b0;
    local_1f0 = local_1b8;
    dVar12 = dStack_1b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setIdleSnapped__026b1370,0);
    dVar15 = local_1a8;
    dVar13 = dStack_1a0;
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ball_026b11a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ball_026b11a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ball_026b11a0);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ball_026b11a0);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ball_026b11a0);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0);
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_applyActiveBallAlpha_026b1290);
  FUN_015e8030();
  puVar6 = local_c0;
  local_3a8 = dVar15;
  local_3a0 = local_c8;
  dStack_398 = dVar12;
  local_390 = dVar15;
  dStack_388 = dVar13;
  FUN_015ec7ec();
  local_3a9 = (byte)puVar6;
  IVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ballAvatarHost_026b12f8);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  local_3aa = ((byte)IVar5 ^ 1) & 1;
  dStack_3c8 = dStack_398;
  local_3d0 = local_3a0;
  dStack_3b8 = dStack_388;
  local_3c0 = local_390;
  IVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ballDisc_026b1300);
  _objc_retainAutoreleasedReturnValue();
  dStack_3e8 = dStack_3c8;
  local_3f0 = local_3d0;
  dStack_3d8 = dStack_3b8;
  local_3e0 = local_3c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_3d0,dStack_3c8,local_3c0,dStack_3b8);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  dVar12 = local_3a8 * 0.5;
  IVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ballDisc_026b1300);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(dVar12);
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  dStack_408 = dStack_398;
  local_410 = local_3a0;
  dStack_3f8 = dStack_388;
  local_400 = local_390;
  IVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ballAvatarHost_026b12f8);
  _objc_retainAutoreleasedReturnValue();
  dStack_428 = dStack_408;
  local_430 = local_410;
  dStack_418 = dStack_3f8;
  local_420 = local_400;
  dVar12 = dStack_408;
  dVar15 = local_400;
  dVar13 = dStack_3f8;
  (*(code *)PTR__objc_msgSend_02578628)(local_410);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ballAvatarHost_026b12f8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ballAvatarHost_026b12f8);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  if ((local_3aa & 1) == 0) {
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ballDisc_026b1300);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    if ((local_3a9 & 1) == 0) {
      local_9c8 = local_3a8 * DAT_02323c70;
      dVar12 = DAT_02323c70;
    }
    else {
      local_9c8 = 0.0;
    }
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ballDisc_026b1300);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    _CGRectInset();
    IVar5 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ballIcon_026b1308);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_9c8,dVar12,dVar15,dVar13);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    if ((local_3a9 & 1) == 0) {
      local_9e0 = 0.0;
    }
    else {
      local_9e0 = local_3a8 * 0.5;
    }
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ballIcon_026b1308);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  else {
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ballDisc_026b1300);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ballDisc_026b1300);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ballIcon_026b1308);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ballIcon_026b1308);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ballIcon_026b1308);
    _objc_retainAutoreleasedReturnValue();
    local_9e0 = 0.0;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ball_026b11a0);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ballAvatarHost_026b12f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_bringSubviewToFront__026ca550);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _memset(auStack_478,0,0x40);
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ballAvatarHost_026b12f8);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    local_950 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_478,auStack_a8,0x10);
    if (local_950 != 0) {
      lVar11 = *local_468;
      local_958 = 0;
      do {
        do {
          if (*local_468 - lVar11 != 0) {
            _objc_enumerationMutation(*local_468 - lVar11,IVar5);
          }
          local_438 = *(ulong *)(local_470 + local_958 * 8);
          IVar4 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ballAvatarHost_026b12f8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)(local_9e0,dVar12,local_438,PTR_s_setFrame__026ca960)
          ;
          (*(code *)PTR__objc_release_02578630)(IVar4);
          (*(code *)PTR__objc_msgSend_02578628)(local_438,PTR_s_setClipsToBounds__026ca8c8,0);
          uVar7 = local_438;
          (*(code *)PTR__objc_msgSend_02578628)(local_438,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar7);
          dVar12 = 0.5;
          local_9e0 = local_3a8 * 0.5;
          uVar7 = local_438;
          (*(code *)PTR__objc_msgSend_02578628)(local_438,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar7);
          uVar7 = local_438;
          pcVar8 = &cf_setImageSize_;
          _NSSelectorFromString(&cf_setImageSize_);
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_respondsToSelector__026ca818,pcVar8);
          uVar2 = local_438;
          if ((uVar7 & 1) != 0) {
            pcVar8 = &cf_setImageSize_;
            _NSSelectorFromString();
            local_9e0 = local_3a8;
            dVar12 = local_3a8;
            FUN_015dffd0();
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,pcVar8);
          }
          local_958 = local_958 + 1;
        } while (local_958 < local_950);
        local_950 = IVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_478,auStack_a8,0x10
                  );
        local_958 = 0;
      } while (local_950 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar5);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_refreshBallBadge_026b1398);
  puVar6 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_quickChatSidebarSide_026b13a0);
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_quickChatSidebarWidth_026b13a8);
  local_a30 = local_110 + 8.0;
  dVar12 = (local_d0 - local_100) - 8.0;
  local_a00 = dVar12 - local_a30;
  if (local_a00 <= 120.0) {
    local_a00 = 120.0;
  }
  local_588 = local_a00;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_quickChatSidebarHeight_026b13b0);
  if (local_588 <= 0.0) {
    local_588 = local_a00;
  }
  if (local_a00 < local_588) {
    local_588 = local_a00;
  }
  puVar9 = local_c0;
  dVar15 = local_588;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_quickChatSeparateSessions_026b13b8);
  if (((ulong)puVar9 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_quickChatAvatarSize_026b13c0);
    puVar9 = local_c0;
    local_a10 = dVar15;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_quickChatShowNickname_026b13c8);
    if (((ulong)puVar9 & 1) == 0) {
      local_a10 = 12.0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_quickChatNicknameSpacing_026b13d0);
      local_a10 = local_a10 + 24.0;
    }
    dVar13 = dVar15 + local_a10;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_quickChatItemSpacing_026b13d8);
    puVar9 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_quickChatPrivateLimit_026b13e0);
    puVar10 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_quickChatGroupLimit_026b13e8);
    local_a28 = (dVar15 + local_a10 + dVar13) * (double)(long)(puVar9 + (long)puVar10) + 20.0;
    if (local_588 < local_a28) {
      local_a28 = local_588;
    }
    local_588 = local_a28;
  }
  puVar9 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_quickChatSidebarVerticalMode_026b13f0);
  if (puVar9 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    local_5b0 = local_a30 + 12.0;
    if (dVar12 < local_5b0 + local_588) {
      if (local_a30 < dVar12 - local_588) {
        local_a30 = dVar12 - local_588;
      }
      local_5b0 = local_a30;
    }
  }
  else {
    local_5b0 = local_a30 + (local_a00 - local_588) * 0.5;
  }
  if (puVar6 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    local_a38 = (local_d8 - local_9e0) - 6.0;
  }
  else {
    local_a38 = 6.0;
  }
  FUN_015dff84();
  IVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sidebar_026b1168);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_quickChatSidebarCornerRadius_026b13f8);
  IVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sidebar_026b1168);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_wcr_applyThemeIfChanged__026b1120,1);
  IVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sidebar_026b1168);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _CGRectInset();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_quickChatSeparateSessions_026b13b8);
  IVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_groupScroll_026b1178);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  puVar6 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_quickChatSeparateSessions_026b13b8);
  if (((ulong)puVar6 & 1) == 0) {
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sidebarScroll_026b1170);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_a38,local_5b0,local_9e0,local_588);
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  else {
    puVar6 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_quickChatPrivateLimit_026b13e0);
    puVar9 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_quickChatPrivateLimit_026b13e0);
    puVar10 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_quickChatGroupLimit_026b13e8);
    dVar14 = (local_588 * (double)(long)puVar6) / (double)(long)(puVar9 + (long)puVar10);
    dVar12 = local_a38;
    dVar15 = local_5b0;
    dVar13 = local_9e0;
    dVar17 = dVar14;
    FUN_015dff84();
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sidebarScroll_026b1170);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(dVar12,dVar15,dVar13,dVar17);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    local_5b0 = local_5b0 + dVar14;
    local_588 = local_588 - dVar14;
    FUN_015dff84();
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_groupScroll_026b1178);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_a38,local_5b0,local_9e0,local_588);
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

