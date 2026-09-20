// FUN_0044c5e8 @ 0044c5e8

void FUN_0044c5e8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  double dVar5;
  ulong local_168;
  uint local_108;
  ulong local_e0;
  double local_d8;
  double local_d0;
  double local_c0;
  ulong local_b8 [2];
  ulong local_a8;
  byte local_99;
  ulong local_98;
  byte local_89;
  ulong local_88;
  ulong local_80 [2];
  ulong local_70 [2];
  ulong local_60;
  undefined4 local_58;
  byte local_51;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*DAT_028caab8)(param_1,param_2);
  local_38 = 0;
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_38;
  local_38 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar3 = PTR_WCRefineLocalEmoticonStore_026ce440;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isEnabled_026a0ef0);
  local_108 = 0;
  if (((ulong)puVar3 & 1) != 0) {
    uVar4 = local_28;
    FUN_0045f078();
    local_108 = (uint)uVar4;
  }
  local_51 = (byte)local_108 & 1;
  if ((local_108 & 1) == 0) {
    if (local_38 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setHidden__026ca970,1);
    }
    local_58 = 1;
  }
  else {
    local_60 = 0;
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_60;
    local_60 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_60 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setHidden__026ca970,1);
    }
    local_70[0] = 0;
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_moveToFrontButton_026a10b8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_70[0];
    local_70[0] = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar4 = local_70[0];
    local_89 = 0;
    local_99 = 0;
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar4 & 1) == 0) {
      local_168 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_99 = 1;
      local_98 = local_168;
    }
    else {
      local_168 = local_70[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_89 = 1;
      local_88 = local_168;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_80[0] = local_168;
    if ((local_99 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    if ((local_70[0] == 0) &&
       (uVar4 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_28,PTR_s_respondsToSelector__026ca818,
                  PTR_s_actionButtonWithTitle_selector__026a10d0), (uVar4 & 1) != 0)) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_actionButtonWithTitle_selector__026a10d0,&cf_y0R,
                 PTR_s_onMoveEmoticonToFront__026a3c38);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_70[0];
      local_70[0] = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_80[0],PTR_s_addSubview__026ca4c0,local_70[0]);
    }
    local_a8 = 0;
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_deleteButton_026a0f28);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_a8;
    local_a8 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    if (((local_a8 == 0) ||
        (uVar4 = local_a8, (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_isHidden_026ca768),
        (uVar4 & 1) != 0)) &&
       (uVar4 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_28,PTR_s_respondsToSelector__026ca818,
                  PTR_s_actionButtonWithTitle_selector__026a10d0), (uVar4 & 1) != 0)) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_actionButtonWithTitle_selector__026a10d0,&cf_Rd,
                 PTR_s_onDeleteEmoticon__026a3c40);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_a8;
      local_a8 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_80[0],PTR_s_addSubview__026ca4c0,local_a8);
    }
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_b8[0] = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    if ((local_b8[0] == 0) &&
       (uVar4 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_28,PTR_s_respondsToSelector__026ca818,
                  PTR_s_actionButtonWithTitle_selector__026a10d0), (uVar4 & 1) != 0)) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_actionButtonWithTitle_selector__026a10d0,&cf_yRR_,
                 PTR_s_WCRLE_onPreviewAddToGroup__026a3c58);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_b8[0];
      local_b8[0] = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_b8[0],PTR_s_setTag__026caa80,DAT_023241c0);
      (*(code *)PTR__objc_msgSend_02578628)(local_80[0],PTR_s_addSubview__026ca4c0,local_b8[0]);
    }
    if ((local_b8[0] == 0) || (local_70[0] == 0)) {
      local_58 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_b8[0],PTR_s_setHidden__026ca970,0);
      uVar4 = local_70[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70[0],PTR_s_respondsToSelector__026ca818,PTR_s_setHidden__026ca970);
      if ((uVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_setHidden__026ca970,0);
      }
      if ((local_a8 != 0) &&
         (uVar4 = local_a8,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_a8,PTR_s_respondsToSelector__026ca818,PTR_s_setHidden__026ca970),
         (uVar4 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setHidden__026ca970,0);
      }
      dVar5 = 152.0;
      local_c0 = 152.0;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewPopoverWidth_026a10d8);
      local_c0 = dVar5;
      if (dVar5 < 80.0) {
        local_c0 = 152.0;
      }
      dVar5 = local_c0 / 3.0;
      local_d0 = dVar5;
      FUN_0045f1b0(local_28,local_70[0]);
      local_d8 = dVar5;
      FUN_0045f964(local_c0 * 0.16666666666666666,local_d0,dVar5,local_70[0]);
      if ((local_a8 != 0) &&
         (uVar4 = local_a8, (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_isHidden_026ca768),
         (uVar4 & 1) == 0)) {
        FUN_0045f964(local_c0 * 0.5,local_d0,local_d8,local_a8);
      }
      FUN_0045f964(local_c0 * DAT_02323e78,local_d0,local_d8,local_b8[0]);
      local_e0 = 0;
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_verticalDivider_026a10f8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_e0;
      local_e0 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      if (local_e0 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setHidden__026ca970,1);
      }
      _objc_storeStrong(&local_e0,0);
      local_58 = 0;
    }
    _objc_storeStrong(local_b8);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(local_80,0);
    _objc_storeStrong(local_70,0);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

