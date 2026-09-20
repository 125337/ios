// FUN_0024d844 @ 0024d844

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0024d844(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double local_330;
  double local_300;
  double local_2d0;
  undefined8 local_e8;
  double local_88;
  ulong local_80 [3];
  ulong local_68;
  ulong local_60 [2];
  ulong local_50;
  undefined4 local_48;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_30 = param_6;
  local_28 = param_5;
  (*DAT_028c93d0)(param_5,param_6);
  FUN_00259980(local_28);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_viewWithTag__026cabe0,0x24f74a);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  if (uVar2 == 0) {
    FUN_00259c64(local_28,0);
    puVar3 = PTR_WCRefineEmoticonGroupStore_026ce420;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_isEnabled_026a0ef0);
    if (((ulong)puVar3 & 1) == 0) {
      local_48 = 1;
    }
    else {
      local_48 = 1;
    }
  }
  else {
    puVar3 = PTR_WCRefineEmoticonGroupStore_026ce420;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_isEnabled_026a0ef0);
    if (((ulong)puVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setHidden__026ca970,1);
      FUN_00259c64(local_28,0);
      local_48 = 1;
    }
    else {
      local_50 = 0;
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_viewModel_0269d080);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_50;
      local_50 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_50;
      FUN_00258a44();
      if ((uVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setHidden__026ca970,1);
        FUN_00259c64(local_28,0);
        local_48 = 1;
      }
      else {
        local_60[0] = 0;
        local_68 = 0;
        uVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleLabel_026caba0);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_60[0];
        local_60[0] = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        uVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manageButton_026a1000);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_68;
        local_68 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        if ((local_60[0] != 0) &&
           (uVar2 = local_60[0],
           (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_isHidden_026ca768),
           (uVar2 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_setHidden__026ca970,1);
        }
        uVar2 = local_38;
        (*(code *)PTR__objc_retain_02578638)();
        local_80[0] = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isHidden_026ca768);
        if ((uVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_80[0],PTR_s_setHidden__026ca970,0);
        }
        FUN_00259c64(local_28,1);
        local_88 = 12.0;
        if ((local_68 != 0) &&
           (uVar2 = local_68,
           (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isHidden_026ca768), (uVar2 & 1) == 0
           )) {
          dVar5 = 12.0;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
          _CGRectGetWidth();
          dVar6 = dVar5;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_frame_026ca640);
          _CGRectGetMinX(dVar6,param_2);
          param_2 = (dVar5 - dVar6) + 8.0;
          local_2d0 = param_2;
          if (param_2 <= 12.0) {
            local_2d0 = 12.0;
          }
          local_88 = local_2d0;
        }
        local_e8 = 0x4028000000000000;
        dVar6 = 80.0;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
        _CGRectGetWidth(dVar6,param_2);
        local_88 = (dVar6 - 12.0) - local_88;
        local_300 = local_88;
        if (local_88 <= 80.0) {
          local_300 = 80.0;
        }
        dVar6 = 0.0;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
        _CGRectGetHeight(dVar6,local_88,param_3,param_4);
        local_330 = (dVar6 - 30.0) * 0.5;
        if (local_330 <= 0.0) {
          local_330 = 0.0;
        }
        uVar8 = 0x403e000000000000;
        FUN_00255258();
        uVar2 = local_80[0];
        uVar7 = local_e8;
        dVar6 = local_330;
        dVar5 = local_300;
        uVar9 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)(local_80[0],PTR_s_frame_026ca640);
        uVar1 = (uint)uVar2;
        _CGRectEqualToRect(uVar7,dVar6,dVar5,uVar9,local_e8,local_330,local_300,uVar8);
        if ((uVar1 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e8,local_330,local_300,uVar8,local_80[0],PTR_s_setFrame__026ca960);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_bringSubviewToFront__026ca550,local_80[0]);
        if ((local_68 != 0) &&
           (uVar2 = local_68,
           (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isHidden_026ca768), (uVar2 & 1) == 0
           )) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_bringSubviewToFront__026ca550,local_68);
        }
        _objc_storeStrong(local_80);
        _objc_storeStrong(&local_68,0);
        _objc_storeStrong(local_60,0);
        local_48 = 0;
      }
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

