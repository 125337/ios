// FUN_016624c8 @ 016624c8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016624c8(long param_1)

{
  undefined8 uVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *local_3d0;
  undefined *local_3c0;
  ulong local_388;
  ulong local_380;
  undefined *local_338;
  undefined *local_328;
  ulong local_2f0;
  ulong local_2e8;
  undefined *local_2a8;
  undefined *local_298;
  undefined *local_288;
  undefined *local_278;
  undefined *local_268;
  undefined *local_258;
  ulong local_248;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  ulong local_200;
  byte local_1f1;
  undefined *local_1f0;
  byte local_1e1;
  undefined *local_1e0;
  byte local_1d1;
  undefined *local_1d0;
  byte local_1c1;
  undefined *local_1c0;
  byte local_1b1;
  undefined *local_1b0;
  byte local_1a1;
  undefined *local_1a0;
  byte local_191;
  ulong local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  ulong local_148;
  long local_140;
  ulong local_138;
  long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  uVar1 = DAT_02323c90;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  local_130 = param_1;
  _objc_storeStrong(&local_138);
  local_140 = param_1;
  _memset(auStack_188,0,0x40);
  uVar3 = local_138;
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  local_2e8 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_2e8 != 0) {
    lVar8 = *local_178;
    local_2f0 = 0;
    do {
      do {
        if (*local_178 - lVar8 != 0) {
          _objc_enumerationMutation(*local_178 - lVar8,uVar3);
        }
        uVar9 = *(ulong *)(local_180 + local_2f0 * 8);
        local_148 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_tag_026cab98);
        if (((long)uVar9 < 300) ||
           (uVar10 = local_148, (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_tag_026cab98),
           uVar9 = local_148, 0x136 < (long)uVar10)) {
LAB_01662a9c:
          uVar9 = local_148;
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar9);
          if (uVar10 != 0) {
            _memset(auStack_240,0,0x40);
            uVar9 = local_148;
            (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            local_380 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_380 != 0) {
              lVar5 = *local_230;
              local_388 = 0;
              do {
                do {
                  if (*local_230 - lVar5 != 0) {
                    _objc_enumerationMutation(*local_230 - lVar5,uVar9);
                  }
                  uVar10 = *(ulong *)(local_238 + local_388 * 8);
                  local_200 = uVar10;
                  (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_tag_026cab98);
                  if ((299 < (long)uVar10) &&
                     (uVar6 = local_200,
                     (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_tag_026cab98),
                     uVar10 = local_200, (long)uVar6 < 0x137)) {
                    puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar10,PTR_s_isKindOfClass__0269cd68,puVar4);
                    uVar6 = local_200;
                    if ((uVar10 & 1) != 0) {
                      uVar10 = local_200;
                      (*(code *)PTR__objc_retain_02578638)();
                      local_248 = uVar10;
                      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_tag_026cab98);
                      lVar7 = *(long *)(param_1 + 0x20);
                      (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_annotateShapeTool_026b1e28);
                      bVar2 = uVar6 - 300 != lVar7;
                      if (bVar2) {
                        local_278 = PTR__OBJC_CLASS___UIColor_026cdf78;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
                        _objc_retainAutoreleasedReturnValue();
                        local_3c0 = local_278;
                        (*(code *)PTR__objc_msgSend_02578628)(uVar1);
                        _objc_retainAutoreleasedReturnValue();
                        local_288 = local_3c0;
                      }
                      else {
                        local_258 = PTR__OBJC_CLASS___UIColor_026cdf78;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___UIColor_026cdf78,
                                   PTR_s_systemYellowColor_0269f758);
                        _objc_retainAutoreleasedReturnValue();
                        local_3c0 = local_258;
                        (*(code *)PTR__objc_msgSend_02578628)(0x3fd6666666666666);
                        _objc_retainAutoreleasedReturnValue();
                        local_268 = local_3c0;
                      }
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_248,PTR_s_setBackgroundColor__026ca888,local_3c0);
                      if (bVar2) {
                        (*(code *)PTR__objc_release_02578630)(local_288);
                        (*(code *)PTR__objc_release_02578630)(local_278);
                        local_3d0 = PTR__OBJC_CLASS___UIColor_026cdf78;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (0x3ff0000000000000,0x3fd0000000000000,
                                   PTR__OBJC_CLASS___UIColor_026cdf78,
                                   PTR_s_colorWithWhite_alpha__0269cf30);
                        _objc_retainAutoreleasedReturnValue();
                        local_2a8 = local_3d0;
                      }
                      else {
                        (*(code *)PTR__objc_release_02578630)(local_268);
                        (*(code *)PTR__objc_release_02578630)(local_258);
                        local_3d0 = PTR__OBJC_CLASS___UIColor_026cdf78;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___UIColor_026cdf78,
                                   PTR_s_systemYellowColor_0269f758);
                        _objc_retainAutoreleasedReturnValue();
                        local_298 = local_3d0;
                      }
                      _objc_retainAutorelease();
                      (*(code *)PTR__objc_msgSend_02578628)(local_3d0,PTR_s_CGColor_026ca470);
                      uVar10 = local_248;
                      (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_layer_026ca788);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(uVar10);
                      if (bVar2) {
                        (*(code *)PTR__objc_release_02578630)(local_2a8);
                      }
                      else {
                        (*(code *)PTR__objc_release_02578630)(local_298);
                      }
                      _objc_storeStrong(&local_248,0);
                    }
                  }
                  local_388 = local_388 + 1;
                } while (local_388 < local_380);
                local_380 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,
                           auStack_128,0x10);
                local_388 = 0;
              } while (local_380 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar9);
          }
        }
        else {
          puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar4);
          uVar10 = local_148;
          if ((uVar9 & 1) == 0) goto LAB_01662a9c;
          (*(code *)PTR__objc_retain_02578638)();
          local_190 = uVar10;
          (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_tag_026cab98);
          lVar5 = *(long *)(param_1 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_annotateShapeTool_026b1e28);
          local_191 = uVar10 - 300 == lVar5;
          local_1a1 = 0;
          local_1b1 = 0;
          local_1c1 = 0;
          local_1d1 = 0;
          local_328 = PTR__OBJC_CLASS___UIColor_026cdf78;
          if ((bool)local_191) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemYellowColor_0269f758);
            _objc_retainAutoreleasedReturnValue();
            local_1a1 = 1;
            local_1a0 = local_328;
            (*(code *)PTR__objc_msgSend_02578628)(0x3fd6666666666666);
            _objc_retainAutoreleasedReturnValue();
            local_1b1 = 1;
            local_1b0 = local_328;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
            _objc_retainAutoreleasedReturnValue();
            local_1c1 = 1;
            local_1c0 = local_328;
            (*(code *)PTR__objc_msgSend_02578628)(uVar1);
            _objc_retainAutoreleasedReturnValue();
            local_1d1 = 1;
            local_1d0 = local_328;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_190,PTR_s_setBackgroundColor__026ca888,local_328);
          if ((local_1d1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1d0);
          }
          if ((local_1c1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1c0);
          }
          if ((local_1b1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1b0);
          }
          if ((local_1a1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1a0);
          }
          local_1e1 = 0;
          local_1f1 = 0;
          local_338 = PTR__OBJC_CLASS___UIColor_026cdf78;
          if ((local_191 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (0x3ff0000000000000,0x3fd0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                       PTR_s_colorWithWhite_alpha__0269cf30);
            _objc_retainAutoreleasedReturnValue();
            local_1f1 = 1;
            local_1f0 = local_338;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemYellowColor_0269f758);
            _objc_retainAutoreleasedReturnValue();
            local_1e1 = 1;
            local_1e0 = local_338;
          }
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(local_338,PTR_s_CGColor_026ca470);
          uVar9 = local_190;
          (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar9);
          if ((local_1f1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1f0);
          }
          if ((local_1e1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1e0);
          }
          _objc_storeStrong(&local_190,0);
        }
        local_2f0 = local_2f0 + 1;
      } while (local_2f0 < local_2e8);
      local_2e8 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
      local_2f0 = 0;
    } while (local_2e8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

