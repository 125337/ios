// onBallPan: @ 015ed620

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRQuickChatWindow::onBallPan_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  long lVar6;
  double in_d0;
  double dVar7;
  double dVar8;
  double in_d1;
  double in_d2;
  double in_d3;
  uint local_2b4;
  double local_270;
  double local_268;
  double local_260;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  ID local_1d8;
  undefined *local_180;
  byte local_171;
  double local_170;
  double dStack_168;
  double local_160;
  double dStack_158;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_90;
  undefined8 uStack_88;
  double local_80;
  undefined8 uStack_78;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar6 = local_38;
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rootViewController_026ca820);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_translationInView__026cabb0);
  local_48 = in_d0;
  local_40 = in_d1;
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar5 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  local_50 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
  uStack_88 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 8);
  local_90 = *(double *)PTR__UIEdgeInsetsZero_02578118;
  uStack_78 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 0x18);
  dVar8 = *(double *)(PTR__UIEdgeInsetsZero_02578118 + 0x10);
  IVar3 = local_28;
  local_80 = dVar8;
  local_60 = in_d2;
  local_58 = in_d3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rootViewController_026ca820);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_b0 = dVar8;
  local_90 = dVar8;
  local_80 = in_d2;
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  local_b8 = local_50 * 0.5;
  local_c0 = 0.0;
  local_c8 = local_60;
  dVar7 = local_90 + local_b8 + 8.0;
  dVar8 = ((local_58 - local_80) - local_b8) - 8.0;
  local_d8 = dVar8;
  if (dVar8 < dVar7) {
    dVar8 = 0.5;
    dVar7 = local_58 * 0.5;
    local_d8 = dVar7;
  }
  lVar6 = local_38;
  local_d0 = dVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
  if (lVar6 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBallDragging__026b1460,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cancelIdleSnap_026b12a0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setIdleSnapped__026b1370,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_applyActiveBallAlpha_026b1290);
  }
  else {
    lVar6 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
    if (lVar6 == 2) {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ball_026b11a0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_e8 = dVar7;
      dStack_e0 = dVar8;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      local_100 = local_e8 + local_48;
      local_130 = dStack_e0 + local_40;
      local_f8 = local_c0;
      local_230 = local_100;
      if (local_100 <= local_c0) {
        local_230 = local_c0;
      }
      local_108 = local_230;
      local_f0 = local_230;
      local_110 = local_c8;
      if (local_c8 <= local_230) {
        local_238 = local_c8;
      }
      else {
        local_238 = local_230;
      }
      local_118 = local_238;
      local_e8 = local_238;
      local_128 = local_d0;
      local_240 = local_130;
      if (local_130 <= local_d0) {
        local_240 = local_d0;
      }
      local_138 = local_240;
      local_120 = local_240;
      local_140 = local_d8;
      if (local_d8 <= local_240) {
        local_248 = local_d8;
      }
      else {
        local_248 = local_240;
      }
      local_148 = local_248;
      dStack_e0 = local_248;
      dStack_158 = local_248;
      local_160 = local_238;
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ball_026b11a0);
      _objc_retainAutoreleasedReturnValue();
      dStack_168 = dStack_158;
      local_170 = local_160;
      (*(code *)PTR__objc_msgSend_02578628)(local_160,dStack_158);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      local_171 = local_e8 <= local_b8 || local_60 - local_b8 <= local_e8;
      puVar5 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_180 = puVar5;
      if ((local_171 & 1) == 0) {
        local_268 = 1.0;
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_quickChatBallAlpha_026b1358);
        if (1.0 < local_268) {
          local_268 = 1.0;
        }
        if (local_268 <= 0.0) {
          local_270 = 0.0;
        }
        else {
          local_270 = local_268;
        }
        local_260 = local_270;
      }
      else {
        local_260 = DAT_02323c78;
      }
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ball_026b11a0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_260);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      lVar6 = local_38;
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rootViewController_026ca820);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)PTR__CGPointZero_025782e0,
                 *(undefined8 *)(PTR__CGPointZero_025782e0 + 8),lVar6,
                 PTR_s_setTranslation_inView__026a9fe8);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      _objc_storeStrong(&local_180,0);
    }
    else {
      lVar6 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
      if ((lVar6 == 3) ||
         (lVar6 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20),
         lVar6 == 4)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBallDragging__026b1460,0);
        IVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ball_026b11a0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar3);
        bVar1 = dVar7 <= local_b8;
        dVar8 = local_60 - local_b8;
        IVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sidebarExpanded_026b1248);
        bVar2 = false;
        local_2b4 = 0;
        if (((IVar3 & 1) == 0) && (local_2b4 = 0, bVar1 || dVar8 <= dVar7)) {
          local_1d8 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballAvatarHost_026b12f8);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = true;
          IVar3 = local_1d8;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_2b4 = (uint)IVar3;
        }
        if (bVar2) {
          (*(code *)PTR__objc_release_02578630)(local_1d8);
        }
        if ((local_2b4 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setIdleSnapped__026b1370,0);
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layoutChrome_026b1410);
          IVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sidebarExpanded_026b1248);
          if ((IVar3 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_scheduleIdleSnap_026b12d0);
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_refreshBallBadge_026b1398);
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_performIdleSnapAnimated__026b1388,1);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_persistBallPosition_026b1378);
      }
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

