// FUN_00797918 @ 00797918

void FUN_00797918(double param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double local_238;
  ulong local_1e8;
  ulong local_1e0;
  double local_1c0;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  long local_f8;
  ulong local_f0;
  double local_e8;
  undefined4 local_e0;
  undefined *local_d0;
  double local_c8;
  double local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_3;
  local_b0 = param_2;
  _CACurrentMediaTime();
  local_c0 = param_1;
  (*DAT_028ccaf8)(local_b0,local_b8);
  _CACurrentMediaTime();
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_c8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_homepageCornerEnabled_0269fc40);
  if ((((ulong)puVar1 & 1) == 0) ||
     (puVar1 = local_d0,
     (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_mainFrameCornerEnabled_026a1ff0),
     ((ulong)puVar1 & 1) == 0)) {
    uVar2 = local_b0;
    dVar7 = (local_c8 - local_c0) * 1000.0;
    dVar8 = dVar7;
    _CACurrentMediaTime();
    _WCRHomeJankLogCellLayout(dVar7,(dVar8 - local_c8) * 1000.0,uVar2);
    local_e0 = 1;
  }
  else {
    puVar1 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_tpModeCornerEnabled_026a0230);
    uVar2 = local_b0;
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_globalCornerRadius_026a2040);
      local_e8 = (double)(long)puVar1;
      if (local_e8 <= 0.0) {
        local_e8 = 20.0;
      }
      if (40.0 < local_e8) {
        local_e8 = 40.0;
      }
      uVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_b0;
      local_f0 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      if (local_f0 == 0) {
        local_1c0 = 0.0;
      }
      else {
        local_1c0 = local_e8;
        FUN_0079ace8(local_b0);
      }
      FUN_0079ab34(local_1c0,uVar2,local_f0,1);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      _memset(auStack_138,0,0x40);
      uVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_1e0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_1e0 != 0) {
        lVar5 = *local_128;
        local_1e8 = 0;
        do {
          do {
            if (*local_128 - lVar5 != 0) {
              _objc_enumerationMutation(*local_128 - lVar5,uVar2);
            }
            lVar6 = *(long *)(local_130 + local_1e8 * 8);
            local_f8 = lVar6;
            (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(lVar6);
            lVar6 = local_f8;
            (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            if (lVar4 == 0) {
              local_238 = 0.0;
            }
            else {
              local_238 = local_e8;
              FUN_0079ace8(local_f8);
            }
            FUN_0079ab34(local_238,lVar6,lVar4,1);
            (*(code *)PTR__objc_release_02578630)(lVar6);
            local_1e8 = local_1e8 + 1;
          } while (local_1e8 < local_1e0);
          local_1e0 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          local_1e8 = 0;
        } while (local_1e0 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar3 = local_b0;
      FUN_007a5264();
      uVar2 = local_b0;
      if ((uVar3 & 1) == 0) {
        FUN_007991a4();
        _objc_retainAutoreleasedReturnValue();
        FUN_007993a0(uVar2);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar2 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_contentView_026ca5a8);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        FUN_007993a0(uVar2);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      else {
        FUN_0079adf0(local_b0);
      }
      uVar2 = local_b0;
      dVar7 = (local_c8 - local_c0) * 1000.0;
      dVar8 = dVar7;
      _CACurrentMediaTime();
      _WCRHomeJankLogCellLayout(dVar7,(dVar8 - local_c8) * 1000.0,uVar2);
      local_e0 = 0;
    }
    else {
      dVar7 = (local_c8 - local_c0) * 1000.0;
      dVar8 = dVar7;
      _CACurrentMediaTime();
      _WCRHomeJankLogCellLayout(dVar7,(dVar8 - local_c8) * 1000.0,uVar2);
      local_e0 = 1;
    }
  }
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

