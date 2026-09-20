// FUN_000b11e8 @ 000b11e8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_000b11e8(double param_1,double param_2,double param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  ulong local_520;
  ulong local_518;
  double local_510;
  double local_500;
  ulong local_490;
  ulong local_488;
  ulong local_350;
  ulong local_208;
  double local_180;
  undefined1 *local_128 [12];
  ulong local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  undefined8 uStack_88;
  byte local_79;
  ulong local_78;
  ulong local_70;
  byte local_61;
  ulong local_60;
  ulong local_48;
  ulong local_40;
  double local_38;
  double dStack_30;
  ulong local_28;
  
  local_40 = 0;
  local_38 = param_1;
  dStack_30 = param_2;
  _objc_storeStrong(&local_40,param_5);
  local_61 = 0;
  uVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_items_0269e4b0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (uVar4 == 0) {
    local_350 = 4;
  }
  else {
    local_350 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = local_350;
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  local_48 = local_350;
  puVar5 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  if (((ulong)puVar6 & 1) != 0) {
    uVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_viewWithTag__026cabe0,0x24f749);
    _objc_retainAutoreleasedReturnValue();
    local_79 = 0;
    bVar1 = false;
    local_70 = uVar3;
    if (uVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isHidden_026ca768);
      bVar1 = false;
      if ((uVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_alpha_026ca4d8);
        bVar1 = false;
        param_2 = DAT_02323d38;
        if (DAT_02323d38 < param_1) {
          uVar3 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          local_79 = 1;
          bVar1 = uVar3 != 0;
          local_78 = uVar3;
        }
      }
    }
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    uVar3 = local_70;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_bounds_026ca548);
      local_c0 = param_1;
      local_b8 = param_2;
      local_b0 = param_3;
      local_a8 = param_4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_convertRect_toView__0269ded8,local_40);
      uVar3 = local_48;
      local_a0 = param_1;
      dStack_98 = param_2;
      local_90 = param_3;
      uStack_88 = param_4;
      FUN_000b1f70();
      _objc_retainAutoreleasedReturnValue();
      dVar8 = local_a0;
      dVar9 = dStack_98;
      param_3 = local_90;
      uVar12 = uStack_88;
      local_c8 = uVar3;
      _CGRectInset();
      uVar2 = (uint)uVar3;
      _CGRectContainsPoint(dVar8,dVar9,param_3,uVar12,local_38,dStack_30);
      if (((uVar2 & 1) == 0) ||
         (uVar3 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0),
         uVar3 == 0)) {
        local_28 = 0xffffffffffffffff;
      }
      else {
        puVar5 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        local_128[0] = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_floatingTabBarExtraButtonEnabled_0269e4c0);
        bVar1 = false;
        if (((ulong)puVar5 & 1) != 0) {
          puVar7 = local_128[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128[0],PTR_s_floatingTabBarExtraButtonPositio_0269e4c8);
          bVar1 = puVar7 == (undefined1 *)((long)&MACH_HEADER.magic + 1);
        }
        uVar3 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
        dVar9 = local_a0;
        param_3 = local_90;
        _CGRectGetWidth(local_a0,dStack_98);
        dVar8 = local_38;
        dVar11 = (double)NEON_ucvtf(uVar3 + (long)(int)(uint)bVar1);
        if (0.0 < dVar9 / dVar11) {
          local_180 = local_38;
          dVar10 = local_a0;
          _CGRectGetMinX(local_a0,dStack_98,local_90,uStack_88);
          if (dVar10 + 1.0 <= dVar8) {
            dVar10 = local_a0;
            _CGRectGetMaxX(local_a0,dStack_98,local_90,uStack_88);
            if (dVar10 - 1.0 < dVar8) {
              local_180 = local_a0;
              _CGRectGetMaxX(local_a0,dStack_98,local_90,uStack_88);
              local_180 = local_180 - 1.0;
            }
          }
          else {
            local_180 = local_a0;
            _CGRectGetMinX(local_a0,dStack_98,local_90,uStack_88);
            local_180 = local_180 + 1.0;
          }
          dVar8 = local_a0;
          param_3 = local_90;
          _CGRectGetMinX(local_a0,dStack_98);
          local_488 = (ulong)((local_180 - dVar8) / (dVar9 / dVar11));
          local_490 = (uVar3 + (long)(int)(uint)bVar1) - 1;
          if ((long)local_488 < 1) {
            local_488 = 0;
          }
          if ((long)local_488 <= (long)local_490) {
            local_490 = local_488;
          }
          local_208 = local_490;
          if (bVar1) {
            if (local_490 == uVar3 / 2) {
              local_28 = 0xffffffffffffffff;
              goto LAB_000b1c0c;
            }
            if (uVar3 / 2 < local_490) {
              local_208 = local_490 - 1;
            }
          }
          if (((long)local_208 < 0) || (uVar3 <= local_208)) {
            local_28 = 0xffffffffffffffff;
          }
          else {
            uVar3 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c8,PTR_s_objectAtIndexedSubscript__0269cc78,local_208);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_28 = uVar4;
            (*(code *)PTR__objc_release_02578630)(uVar3);
          }
        }
        else {
          local_28 = 0xffffffffffffffff;
        }
LAB_000b1c0c:
        _objc_storeStrong(local_128,0);
      }
      bVar1 = true;
      _objc_storeStrong(&local_c8,0);
    }
    else {
      bVar1 = false;
    }
    _objc_storeStrong(&local_70,0);
    uVar3 = local_28;
    if (bVar1) goto LAB_000b1f38;
  }
  uVar3 = local_40;
  puVar5 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  FUN_000b21c4(uVar3,(ulong)puVar6 & 0xffffffff);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  if (((long)uVar3 < 0) || (3 < (long)uVar3)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
    local_500 = (double)NEON_ucvtf(local_48);
    if (local_500 <= 1.0) {
      local_500 = 1.0;
    }
    local_510 = param_3 / local_500;
    if (local_510 <= 1.0) {
      local_510 = 1.0;
    }
    local_518 = (ulong)(local_38 / local_510);
    local_520 = local_48 - 1;
    if ((long)local_518 < 1) {
      local_518 = 0;
    }
    if ((long)local_518 <= (long)local_520) {
      local_520 = local_518;
    }
    local_28 = local_520;
    uVar3 = local_28;
  }
LAB_000b1f38:
  local_28 = uVar3;
  _objc_storeStrong(&local_40,0);
  return local_28;
}

