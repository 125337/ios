// compactHeaderLayoutIfNeeded @ 00ee2cd4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRChatRoomPickerBridge::compactHeaderLayoutIfNeeded(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  double in_d0;
  double dVar6;
  double in_d1;
  double dVar7;
  undefined8 uVar8;
  undefined8 in_d2;
  undefined8 uVar9;
  double in_d3;
  double dVar10;
  double dVar11;
  ulong local_338;
  ulong local_330;
  ID local_288 [2];
  undefined8 uStack_278;
  undefined8 local_270;
  double dStack_268;
  undefined8 uStack_250;
  undefined8 local_248;
  double dStack_240;
  double local_230;
  undefined8 local_228;
  double local_220;
  undefined1 local_211;
  ID local_210;
  ID local_208 [2];
  double dStack_1f8;
  undefined8 local_1f0;
  double dStack_1e8;
  double dStack_1d0;
  undefined8 local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1b0;
  undefined8 local_1a8;
  double local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  ID local_158;
  double dStack_138;
  double dStack_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  double local_e0;
  undefined4 local_d4;
  ID local_d0;
  ID local_c8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hasCompactedHeader_026ab808);
  if ((param_1 & 1) == 0) {
    IVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_getViewController_0269d328);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_b0;
    local_c8 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_pickerController_026ab800);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar4;
    FUN_00ee347c();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    if ((local_c8 == 0) || (local_d0 == 0)) {
      local_d4 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_frame_026ca640);
      local_f8 = in_d0;
      local_f0 = in_d1;
      local_e8 = in_d2;
      local_e0 = in_d3;
      _CGRectGetHeight(in_d0,in_d1,in_d2,in_d3);
      local_108 = 56.0;
      if ((in_d0 <= 0.0) || (ABS(in_d0 - 56.0) < 0.5)) {
        local_d4 = 1;
      }
      else {
        local_100 = in_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setHasCompactedHeader__026ab810,1);
        local_110 = local_100 - local_108;
        dVar6 = local_f8;
        dVar7 = local_f0;
        uVar9 = local_e8;
        dVar10 = local_108;
        FUN_00ee3968();
        dStack_138 = dVar10;
        dStack_118 = dVar10;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setFrame__026ca960);
        _memset(auStack_198,0,0x40);
        IVar3 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_330 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_330 != 0) {
          lVar5 = *local_188;
          local_338 = 0;
          do {
            do {
              if (*local_188 - lVar5 != 0) {
                _objc_enumerationMutation(*local_188 - lVar5,IVar3);
              }
              local_158 = *(ID *)(local_190 + local_338 * 8);
              if (local_158 != local_d0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_frame_026ca640);
                local_1b8 = dVar6;
                local_1b0 = dVar7;
                local_1a8 = uVar9;
                local_1a0 = dVar10;
                _CGRectGetMinY(dVar6,dVar7,uVar9,dVar10);
                dVar7 = local_f8;
                dVar10 = local_e0;
                _CGRectGetMaxY(local_f8,local_f0,local_e8);
                uVar9 = 0x3ff0000000000000;
                dVar7 = dVar7 - 1.0;
                if (dVar7 <= dVar6) {
                  dVar7 = local_1b0 - local_110;
                  uVar9 = local_1a8;
                  dVar10 = local_1a0;
                  FUN_00ee3968();
                  dStack_1f8 = dVar7;
                  local_1f0 = uVar9;
                  dStack_1e8 = dVar10;
                  dStack_1d0 = dVar7;
                  local_1c8 = uVar9;
                  dStack_1c0 = dVar10;
                  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setFrame__026ca960);
                  dVar6 = local_1b8;
                }
              }
              local_338 = local_338 + 1;
            } while (local_338 < local_330);
            local_330 = IVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,
                       0x10);
            local_338 = 0;
          } while (local_330 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(IVar3);
        IVar3 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_pickerController_026ab800);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = IVar3;
        FUN_00ee39b4();
        _objc_retainAutoreleasedReturnValue();
        local_208[0] = IVar4;
        (*(code *)PTR__objc_release_02578630)(IVar3);
        local_211 = 0;
        bVar2 = false;
        uVar1 = local_208[0] != 0;
        if ((bool)uVar1) {
          IVar3 = local_208[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_208[0],PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = IVar3 == local_d0;
          local_211 = uVar1;
          local_210 = IVar3;
          (*(code *)PTR__objc_release_02578630)(IVar3);
          uVar1 = local_211;
        }
        local_211 = uVar1;
        if (bVar2) {
          (*(code *)PTR__objc_msgSend_02578628)(local_208[0],PTR_s_frame_026ca640);
          uVar8 = 0;
          dVar11 = local_108;
          local_230 = dVar7;
          local_228 = uVar9;
          local_220 = dVar10;
          FUN_00ee3968();
          uStack_278 = uVar8;
          local_270 = uVar9;
          dStack_268 = dVar11;
          uStack_250 = uVar8;
          local_248 = uVar9;
          dStack_240 = dVar11;
          (*(code *)PTR__objc_msgSend_02578628)(local_208[0],PTR_s_setFrame__026ca960);
        }
        IVar3 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_pickerController_026ab800);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = IVar3;
        FUN_00ee3a8c();
        _objc_retainAutoreleasedReturnValue();
        local_288[0] = IVar4;
        (*(code *)PTR__objc_release_02578630)(IVar3);
        bVar2 = false;
        if (local_288[0] != 0) {
          IVar3 = local_288[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_288[0],PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = IVar3 == local_d0;
          (*(code *)PTR__objc_release_02578630)(IVar3);
        }
        if (bVar2) {
          (*(code *)PTR__objc_msgSend_02578628)(local_288[0],PTR_s_frame_026ca640);
          uVar8 = 0;
          dVar7 = local_108;
          FUN_00ee3968();
          (*(code *)PTR__objc_msgSend_02578628)
                    (dVar6,uVar8,uVar9,dVar7,local_288[0],PTR_s_setFrame__026ca960);
        }
        _objc_storeStrong(local_288);
        _objc_storeStrong(local_208,0);
        local_d4 = 0;
      }
    }
    _objc_storeStrong(&local_d0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_c0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

