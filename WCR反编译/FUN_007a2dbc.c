// FUN_007a2dbc @ 007a2dbc

void FUN_007a2dbc(undefined8 param_1)

{
  double dVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  double dVar12;
  ulong local_4a0;
  ulong local_318;
  ulong local_310;
  ulong local_2d0;
  ulong local_2c8;
  undefined *local_290;
  ulong local_260;
  byte local_251;
  ulong local_250;
  ulong local_248;
  byte local_239;
  ulong local_238;
  byte local_229;
  ulong local_228;
  byte local_219;
  ulong local_218;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  ulong local_1d0;
  undefined1 auStack_1c8 [8];
  long local_1c0;
  long *local_1b8;
  ulong local_188;
  undefined *local_180;
  byte local_171;
  undefined *local_170;
  byte local_161;
  undefined *local_160;
  undefined *local_158 [3];
  undefined *local_140;
  undefined4 local_134;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  dVar1 = DAT_02323d38;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  dVar12 = DAT_02323d38;
  _objc_storeStrong(&local_130,param_1);
  if (local_130 == 0) {
    local_134 = 1;
  }
  else {
    local_290 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_161 = 0;
    local_171 = 0;
    local_140 = local_290;
    (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_tpModeCornerEnabled_026a0230);
    if (((ulong)local_290 & 1) == 0) {
      FUN_007991a4();
      _objc_retainAutoreleasedReturnValue();
      local_171 = 1;
      local_170 = local_290;
    }
    else {
      FUN_00799150();
      _objc_retainAutoreleasedReturnValue();
      local_161 = 1;
      local_160 = local_290;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_158[0] = local_290;
    if ((local_171 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_170);
    }
    if ((local_161 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_160);
    }
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    local_180 = puVar3;
    _memset(auStack_1c8,0,0x40);
    uVar4 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_visibleCells_0269fc48);
    _objc_retainAutoreleasedReturnValue();
    local_2c8 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2c8 != 0) {
      lVar8 = *local_1b8;
      local_2d0 = 0;
      do {
        do {
          if (*local_1b8 - lVar8 != 0) {
            _objc_enumerationMutation(*local_1b8 - lVar8,uVar4);
          }
          uVar9 = *(ulong *)(local_1c0 + local_2d0 * 8);
          local_188 = uVar9;
          FUN_007996bc();
          if ((uVar9 & 1) != 0) {
            _memset(auStack_210,0,0x40);
            uVar9 = local_188;
            (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            local_310 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_310 != 0) {
              lVar10 = *local_200;
              local_318 = 0;
              do {
                do {
                  if (*local_200 - lVar10 != 0) {
                    _objc_enumerationMutation(*local_200 - lVar10,uVar9);
                  }
                  uVar11 = *(ulong *)(local_208 + local_318 * 8);
                  local_219 = 0;
                  local_229 = 0;
                  uVar5 = local_188;
                  local_1d0 = uVar11;
                  (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_contentView_026ca5a8);
                  _objc_retainAutoreleasedReturnValue();
                  uVar7 = local_1d0;
                  bVar2 = true;
                  if (uVar11 != uVar5) {
                    uVar6 = local_188;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_188,PTR_s_selectedBackgroundView_0269e620);
                    _objc_retainAutoreleasedReturnValue();
                    uVar11 = local_1d0;
                    local_219 = 1;
                    bVar2 = true;
                    local_218 = uVar6;
                    if (uVar7 != uVar6) {
                      uVar7 = local_188;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_188,PTR_s_multipleSelectionBackgroundView_026a2010);
                      _objc_retainAutoreleasedReturnValue();
                      local_229 = 1;
                      bVar2 = uVar11 == uVar7;
                      local_228 = uVar7;
                    }
                  }
                  if ((local_229 & 1) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_228);
                  }
                  if ((local_219 & 1) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_218);
                  }
                  (*(code *)PTR__objc_release_02578630)(uVar5);
                  uVar7 = local_1d0;
                  if (!bVar2) {
                    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar7,PTR_s_isMemberOfClass__026a2030,puVar3);
                    if ((uVar7 & 1) != 0) {
                      FUN_007993a0(local_1d0,local_180);
                      local_239 = 0;
                      uVar7 = local_1d0;
                      (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_layer_026ca788);
                      _objc_retainAutoreleasedReturnValue();
                      uVar5 = uVar7;
                      (*(code *)PTR__objc_msgSend_02578628)();
                      bVar2 = false;
                      if (uVar5 != 0) {
                        uVar5 = local_1d0;
                        (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_layer_026ca788);
                        _objc_retainAutoreleasedReturnValue();
                        local_239 = 1;
                        local_238 = uVar5;
                        (*(code *)PTR__objc_msgSend_02578628)();
                        _CGColorGetAlpha(uVar5);
                        bVar2 = dVar1 < dVar12;
                      }
                      if ((local_239 & 1) != 0) {
                        (*(code *)PTR__objc_release_02578630)(local_238);
                      }
                      (*(code *)PTR__objc_release_02578630)(uVar7);
                      puVar3 = local_180;
                      if (bVar2) {
                        _objc_retainAutorelease();
                        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
                        uVar7 = local_1d0;
                        (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_layer_026ca788);
                        _objc_retainAutoreleasedReturnValue();
                        (*(code *)PTR__objc_msgSend_02578628)();
                        (*(code *)PTR__objc_release_02578630)(uVar7);
                      }
                    }
                  }
                  local_318 = local_318 + 1;
                } while (local_318 < local_310);
                local_310 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,
                           auStack_128,0x10);
                local_318 = 0;
              } while (local_310 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar9);
            uVar9 = local_188;
            (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_backgroundView_026a0320);
            _objc_retainAutoreleasedReturnValue();
            local_248 = uVar9;
            if (uVar9 != 0) {
              puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isMemberOfClass__026a2030,puVar3);
              if ((uVar9 & 1) != 0) {
                FUN_007993a0(local_248,local_180);
                local_251 = 0;
                uVar9 = local_248;
                (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_layer_026ca788);
                _objc_retainAutoreleasedReturnValue();
                uVar7 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)();
                bVar2 = false;
                if (uVar7 != 0) {
                  uVar7 = local_248;
                  (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_layer_026ca788);
                  _objc_retainAutoreleasedReturnValue();
                  local_251 = 1;
                  local_250 = uVar7;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  _CGColorGetAlpha(uVar7);
                  bVar2 = dVar1 < dVar12;
                }
                if ((local_251 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_250);
                }
                (*(code *)PTR__objc_release_02578630)(uVar9);
                puVar3 = local_180;
                if (bVar2) {
                  _objc_retainAutorelease();
                  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
                  uVar9 = local_248;
                  (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_layer_026ca788);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(uVar9);
                }
              }
            }
            uVar9 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_130,PTR_s_indexPathForCell__0269e208,local_188);
            _objc_retainAutoreleasedReturnValue();
            local_4a0 = local_130;
            local_260 = uVar9;
            if (uVar9 == 0) {
              local_4a0 = 0;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_section_0269e988);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_4a0,PTR_s_numberOfRowsInSection__026a2008,uVar9);
            }
            FUN_0079a994();
            if ((local_4a0 & 1) == 0) {
              FUN_007993a0(local_188,local_158[0]);
            }
            else {
              FUN_0079adf0(local_188);
            }
            _objc_storeStrong(&local_260);
            _objc_storeStrong(&local_248,0);
          }
          local_2d0 = local_2d0 + 1;
        } while (local_2d0 < local_2c8);
        local_2c8 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_a8,0x10
                  );
        local_2d0 = 0;
      } while (local_2c8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar4);
    _objc_storeStrong(&local_180);
    _objc_storeStrong(local_158,0);
    _objc_storeStrong(&local_140,0);
    local_134 = 0;
  }
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

