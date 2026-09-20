// FUN_003f6698 @ 003f6698

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_003f6698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  undefined8 uVar9;
  undefined *local_230;
  undefined *local_128;
  undefined *local_118;
  undefined *local_108;
  undefined *local_f8;
  undefined *local_e8;
  undefined1 local_d9;
  undefined8 local_d8;
  undefined8 local_d0;
  double local_c8;
  double local_c0;
  undefined1 local_b1;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double dStack_98;
  byte local_83;
  byte local_82;
  byte local_81;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  long local_50;
  undefined4 local_48;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = 0;
  local_30 = param_4;
  local_28 = param_3;
  _objc_storeStrong(&local_38,param_5);
  lVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
  if ((lVar3 == 1) ||
     (lVar3 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20),
     lVar3 == 2)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
    FUN_003faccc(local_38);
    FUN_003fae24(local_38);
    local_48 = 1;
    goto LAB_003f74a8;
  }
  lVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
  if (lVar3 != 3) {
    lVar3 = local_38;
    _objc_getAssociatedObject(local_38,DAT_026e0328);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = local_38;
    local_50 = lVar3;
    _objc_getAssociatedObject(local_38,DAT_026e0330);
    _objc_retainAutoreleasedReturnValue();
    local_58 = lVar4;
    if (local_50 == 0) {
      uStack_68 = *(undefined8 *)(PTR__CGPointZero_025782e0 + 8);
      uVar9 = *(undefined8 *)PTR__CGPointZero_025782e0;
      local_70 = uVar9;
    }
    else {
      uVar9 = param_2;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_CGPointValue_0269e330);
      param_2 = param_1;
      local_70 = param_1;
      uStack_68 = uVar9;
    }
    if (local_58 == 0) {
      uStack_78 = *(undefined8 *)(PTR__CGPointZero_025782e0 + 8);
      local_80 = *(undefined8 *)PTR__CGPointZero_025782e0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_CGPointValue_0269e330);
      local_80 = uVar9;
      uStack_78 = param_2;
    }
    FUN_003f2a18(local_38);
    local_48 = 1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    goto LAB_003f74a8;
  }
  local_81 = (byte)local_38;
  FUN_003faccc();
  lVar3 = local_38;
  _objc_getAssociatedObject(local_38,DAT_026e0310);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar3);
  local_82 = (byte)lVar4;
  local_83 = (byte)local_38;
  FUN_003f2af4();
  dStack_98 = *(double *)(PTR__CGPointZero_025782e0 + 8);
  local_a0 = *(double *)PTR__CGPointZero_025782e0;
  dStack_a8 = *(double *)(PTR__CGPointZero_025782e0 + 8);
  local_b0 = *(double *)PTR__CGPointZero_025782e0;
  FUN_003fb214(local_38,local_28,&local_a0,&local_b0);
  uVar2 = (uint)local_38;
  FUN_003f2a18();
  if (((local_81 & 1) != 0) || ((DAT_028ca530 & 1) != 0)) {
    local_48 = 1;
    goto LAB_003f74a8;
  }
  FUN_003f4598();
  if ((uVar2 & 1) == 0) {
    local_48 = 1;
    goto LAB_003f74a8;
  }
  puVar5 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    local_48 = 1;
    goto LAB_003f74a8;
  }
  puVar5 = PTR_WCRefineInputBoxGestureSupport_026ce678;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineInputBoxGestureSupport_026ce678,PTR_s_isChatInputGrowTextView__026a3418,
             local_28);
  if (((ulong)puVar5 & 1) == 0) {
    local_48 = 1;
    goto LAB_003f74a8;
  }
  puVar5 = PTR_WCRefineInputBoxGestureSupport_026ce678;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineInputBoxGestureSupport_026ce678,PTR_s_hasInputTextInGrowTextView__026a3420,
             local_28);
  local_b1 = SUB81(puVar5,0);
  local_c0 = 40.0;
  dVar8 = 350.0;
  local_c8 = 350.0;
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_c0 = dVar8;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    if (local_c0 < 40.0) {
      local_c0 = 40.0;
    }
    if (200.0 < local_c0) {
      local_c0 = 200.0;
    }
    local_c8 = local_c0 * 8.75;
  }
  local_d0 = 0x403e000000000000;
  local_d8 = 0x406f400000000000;
  local_d9 = ABS(local_a0) <= ABS(dStack_98);
  local_e8 = (undefined *)0x0;
  if ((bool)local_d9) {
    if (((local_83 & 1) == 0) && ((local_82 & 1) != 0)) {
      local_48 = 1;
    }
    else {
      bVar1 = true;
      if ((0.0 <= dStack_98) && (bVar1 = false, ABS(dStack_98) < 1.0)) {
        bVar1 = dStack_a8 < 0.0;
      }
      if (bVar1) {
        if ((30.0 <= ABS(dStack_98)) || (250.0 <= ABS(dStack_a8))) {
          puVar6 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = local_e8;
          local_e8 = puVar7;
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          goto LAB_003f7374;
        }
        local_48 = 1;
      }
      else {
        local_48 = 1;
      }
    }
  }
  else if ((local_83 & 1) == 0) {
    if ((local_c0 <= ABS(local_a0)) || (local_c8 <= ABS(local_b0))) {
      bVar1 = true;
      if ((0.0 <= local_a0) && (bVar1 = false, ABS(local_a0) < 1.0)) {
        bVar1 = local_b0 < 0.0;
      }
      if (!bVar1) {
        local_118 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        local_230 = local_118;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_128 = local_230;
      }
      else {
        local_f8 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        local_230 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_108 = local_230;
      }
      _objc_storeStrong(&local_e8,local_230);
      if (!bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_128);
        (*(code *)PTR__objc_release_02578630)(local_118);
      }
      else {
        (*(code *)PTR__objc_release_02578630)(local_108);
        (*(code *)PTR__objc_release_02578630)(local_f8);
      }
LAB_003f7374:
      puVar6 = PTR_WCRefineInputBoxGestureSupport_026ce678;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineInputBoxGestureSupport_026ce678,PTR_s_normalizedAction__026a3438,
                 local_e8);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_e8;
      local_e8 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_isEqualToString__0269ccc8,_WCRInputBoxActionNone);
      uVar2 = (uint)puVar5;
      if (((ulong)puVar5 & 1) == 0) {
        FUN_003fab0c();
        if ((uVar2 & 1) == 0) {
          local_48 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineInputBoxGestureSupport_026ce678,
                     PTR_s_performAction_growTextView__026a34d0,local_e8,local_28);
          local_48 = 0;
        }
      }
      else {
        local_48 = 1;
      }
    }
    else {
      local_48 = 1;
    }
  }
  else {
    local_48 = 1;
  }
  _objc_storeStrong(&local_e8,0);
LAB_003f74a8:
  _objc_storeStrong(&local_38,0);
  return;
}

