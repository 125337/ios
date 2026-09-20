// FUN_0013ed9c @ 0013ed9c

double FUN_0013ed9c(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                   ulong param_5,undefined8 param_6)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double local_418;
  double local_410;
  double local_400;
  double local_3f8;
  double local_3f0;
  double local_3e0;
  double local_3d8;
  double local_3b8;
  double local_3a8;
  byte local_2bc;
  ulong local_2b0;
  ulong local_298;
  uint local_280;
  double local_1b0;
  double local_188;
  double local_180;
  double local_160;
  ulong local_118;
  double local_110;
  byte local_101;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined8 local_e0;
  double local_d8;
  undefined8 local_d0;
  double local_c8;
  undefined8 local_c0;
  double local_b8;
  undefined8 local_b0;
  double local_a8;
  undefined4 local_a0;
  byte local_99;
  ulong local_98;
  byte local_8b;
  byte local_8a;
  bool local_89;
  ulong local_88;
  ulong local_80;
  bool local_71;
  ulong local_70;
  ulong local_68;
  byte local_5d;
  undefined *local_50;
  ulong local_48;
  double local_40;
  undefined8 local_38;
  ulong local_30;
  double local_28;
  
  local_38 = param_6;
  local_30 = param_5;
  (*DAT_028c86d8)(param_5,param_6);
  uVar3 = local_30;
  local_40 = param_1;
  FUN_0014a58c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_WCRefineConfig_026cdf58;
  local_48 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_chatToolbarEnabled_0269f478);
  local_280 = 0;
  if (((ulong)puVar4 & 1) != 0) {
    local_280 = 0;
    _WCRChatToolbarRuntimeFeatureAllowed();
  }
  local_5d = (byte)local_280 & 1;
  local_71 = false;
  bVar2 = (local_280 & 1) == 0;
  if (bVar2) {
    local_298 = 0;
  }
  else {
    local_298 = local_30;
    _WCRChatToolbarAttachmentController();
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_298;
  }
  local_71 = !bVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_298;
  if ((local_71 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  local_89 = false;
  bVar2 = (local_5d & 1) == 0;
  if (bVar2) {
    local_2b0 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_2b0 = local_68;
    _WCRChatToolbarEnabledActions();
    _objc_retainAutoreleasedReturnValue();
    local_88 = local_2b0;
  }
  local_89 = !bVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = local_2b0;
  if ((local_89 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  local_2bc = 0;
  if ((local_5d & 1) != 0) {
    puVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_chatToolbarHideWhileInput_0269f480);
    local_2bc = 0;
    if (((ulong)puVar4 & 1) != 0) {
      uVar3 = local_30;
      FUN_0014d80c();
      local_2bc = (byte)uVar3;
    }
  }
  local_8a = local_2bc & 1;
  uVar3 = local_30;
  FUN_0014da40();
  local_8b = (byte)uVar3;
  local_99 = 0;
  uVar3 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_count_0269cfe0);
  bVar1 = 1;
  if (uVar3 != 0) {
    uVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_99 = 1;
    local_98 = uVar3;
    bVar1 = 1;
    if ((uVar3 != 0) && (bVar1 = 1, (local_8a & 1) == 0)) {
      bVar1 = local_8b;
    }
  }
  if ((local_99 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_98);
  }
  if ((bVar1 & 1) == 0) {
    uVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_c8 = param_1;
    local_c0 = param_2;
    local_b8 = param_3;
    local_b0 = param_4;
    _CGRectGetWidth();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    dVar6 = param_1;
    local_a8 = param_1;
    if (param_1 <= 0.0) {
      puVar4 = PTR__OBJC_CLASS___UIScreen_026cdf70;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
      _objc_retainAutoreleasedReturnValue();
      dVar6 = param_3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_e8 = param_1;
      local_e0 = param_2;
      local_d8 = dVar6;
      local_d0 = param_4;
      local_a8 = dVar6;
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    FUN_00134e1c();
    local_f0 = dVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_chatToolbarInputSpacing_0269f490);
    FUN_00135dc0(&cf_chatToolbarInputSpacing);
    local_f8 = dVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_chatToolbarBottomSpacing_0269f498);
    pcVar5 = &cf_chatToolbarBottomSpacing;
    FUN_00135dc0();
    local_100 = dVar6;
    FUN_00147e08();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    uVar3 = local_30;
    dVar6 = 0.0;
    local_110 = 0.0;
    local_101 = pcVar5 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_118 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getTransToolHeight_0269f4a0);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_getTransToolHeight_0269f4a0);
      local_110 = dVar6;
    }
    dVar6 = local_100;
    if ((local_101 & 1) == 0) {
      local_3a8 = 0.0;
    }
    else {
      local_3a8 = 48.0;
      if (local_110 <= 0.0) {
        local_3a8 = 35.0;
      }
    }
    bVar1 = local_101 & 1;
    bVar2 = DAT_02323c68 <= ABS(local_f0 - 35.0);
    if (local_f8 <= 0.0) {
      local_3b8 = 0.0;
    }
    else {
      local_3b8 = local_f8;
    }
    dVar7 = local_100;
    FUN_00135d00();
    dVar10 = local_f0;
    dVar8 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_chatToolbarItemHeight_0269f198);
    FUN_00135dc0(&cf_chatToolbarItemHeight);
    local_3d8 = (double)(long)(dVar8 * dVar7 * 10.0) / 10.0;
    if (dVar10 < local_3d8) {
      local_3d8 = dVar10;
    }
    local_160 = local_3d8;
    if (local_3d8 < 1.0) {
      local_160 = local_f0;
    }
    if ((local_101 & 1) == 0) {
      local_188 = (local_f0 + local_3b8 + dVar6) - 8.0;
      if (local_188 < 0.0) {
        local_188 = 0.0;
      }
      local_410 = (local_f0 - local_160) * 0.5;
      if (local_410 <= 0.0) {
        local_410 = 0.0;
      }
      local_418 = (local_f0 - local_160) * 0.5;
      if (local_418 <= 0.0) {
        local_418 = 0.0;
      }
      local_180 = (local_40 + ((local_3b8 + local_410) - dVar6)) - local_418;
    }
    else {
      if (bVar1 == 0 || bVar2) {
        local_3e0 = local_f0;
      }
      else {
        local_3e0 = local_3a8;
      }
      if (dVar6 <= 0.0) {
        local_3f0 = 0.0;
      }
      else {
        local_3f0 = dVar6;
      }
      local_188 = local_3e0 + local_3b8 + local_3f0;
      local_1b0 = (local_3b8 + (local_3e0 - local_160) * 0.5) - dVar6;
      if ((local_3b8 == 0.0) && (ABS(dVar6) < DAT_02323c88)) {
        local_1b0 = local_1b0 - 5.0;
      }
      local_3f8 = (local_f0 - local_160) * 0.5;
      if (local_3f8 <= 0.0) {
        local_3f8 = 0.0;
      }
      if (0.0 <= local_40) {
        local_400 = local_40;
      }
      else {
        local_400 = 0.0;
      }
      local_180 = (local_400 + local_1b0) - local_3f8;
    }
    uVar9 = 0;
    dVar6 = local_a8;
    dVar10 = local_f0;
    FUN_0013a194();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar9,local_180,dVar6,dVar10,local_48,PTR_s_setFrame__026ca960);
    local_40 = local_40 + local_188;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setHidden__026ca970,0);
    uVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_reloadWithActions_inputToolView__0269f158,local_80,local_30,local_68);
    FUN_0014e090(local_30,1);
    local_28 = local_40;
    local_a0 = 1;
    _objc_storeStrong(&local_118,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setHidden__026ca970,1);
    FUN_0014e090(local_30,0);
    local_28 = local_40;
    local_a0 = 1;
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  return local_28;
}

