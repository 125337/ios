// FUN_007c4ab0 @ 007c4ab0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_007c4ab0(double param_1,undefined8 param_2,double param_3,undefined8 param_4,ulong param_5,
                 undefined8 param_6)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  undefined8 uVar9;
  double local_658;
  double local_650;
  double local_648;
  ulong local_5e0;
  ulong local_5d8;
  double local_5b8;
  ulong local_570;
  ulong local_520;
  ulong local_518;
  double local_378;
  undefined1 auStack_298 [8];
  long local_290;
  long *local_288;
  ulong local_258;
  byte local_249;
  double local_248;
  undefined8 local_240;
  double local_238;
  double local_230;
  undefined8 local_228;
  undefined1 local_21a;
  byte local_219;
  ulong local_218;
  byte local_209;
  ulong local_208;
  ulong local_200;
  ulong local_1f8;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  ulong local_1b0;
  double local_1a8;
  double local_1a0;
  undefined8 local_198;
  double local_190;
  double local_188;
  double local_180;
  undefined8 local_178;
  double local_170;
  undefined8 local_168;
  double local_160;
  ulong local_158;
  undefined4 local_150;
  ulong local_140;
  undefined8 local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = param_6;
  local_130 = param_5;
  (*DAT_028ccde8)(param_5,param_6);
  uVar2 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_viewController_026a5588);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_130;
  local_140 = uVar2;
  FUN_007daf38();
  uVar1 = (uint)uVar3;
  if (((uVar3 & 1) != 0) && (FUN_007d92bc(), (uVar1 & 1) == 0)) {
    uVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    FUN_007db0f4();
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  uVar2 = local_140;
  FUN_007d06d0();
  if ((uVar2 & 1) == 0) {
    local_150 = 1;
  }
  else {
    uVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    FUN_007db814();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    FUN_007dc26c(local_130);
    if ((DAT_028cce6a & 1) == 0) {
      local_150 = 1;
    }
    else {
      uVar2 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      local_158 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_bounds_026ca548);
      dVar8 = param_3;
      local_180 = param_1;
      local_178 = param_2;
      local_170 = param_3;
      local_168 = param_4;
      local_160 = param_3;
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_bounds_026ca548);
      local_1a8 = param_3;
      local_1a0 = dVar8;
      local_198 = param_2;
      local_190 = param_1;
      local_188 = param_1;
      _memset(auStack_1f0,0,0x40);
      uVar2 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_518 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_518 != 0) {
        lVar5 = *local_1e0;
        local_520 = 0;
        do {
          do {
            if (*local_1e0 - lVar5 != 0) {
              _objc_enumerationMutation(*local_1e0 - lVar5,uVar2);
            }
            uVar6 = *(ulong *)(local_1e8 + local_520 * 8);
            puVar4 = PTR__OBJC_CLASS___UILabel_026cdfb8;
            local_1b0 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
            uVar3 = local_1b0;
            if ((uVar6 & 1) != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_1f8 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_text_0269ce68);
              _objc_retainAutoreleasedReturnValue();
              local_209 = 0;
              local_219 = 0;
              local_570 = uVar3;
              if (uVar3 == 0) {
                local_570 = local_1f8;
                (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_attributedText_0269fcf8);
                _objc_retainAutoreleasedReturnValue();
                local_209 = 1;
                local_208 = local_570;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                local_218 = local_570;
              }
              local_219 = uVar3 == 0;
              (*(code *)PTR__objc_retain_02578638)();
              local_200 = local_570;
              if ((local_219 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_218);
              }
              if ((local_209 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_208);
              }
              (*(code *)PTR__objc_release_02578630)(uVar3);
              uVar3 = local_200;
              puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
              if (((uVar3 & 1) == 0) ||
                 (uVar3 = local_200,
                 (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_length_0269cca0), uVar3 == 0)
                 ) {
                local_150 = 3;
              }
              else {
                uVar3 = local_1f8;
                FUN_007dd048(local_1f8,local_158);
                if ((uVar3 & 1) == 0) {
                  uVar3 = local_200;
                  FUN_007dd650();
                  local_21a = (undefined1)uVar3;
                  local_228 = 0x4028000000000000;
                  local_238 = local_160 - 24.0;
                  local_240 = 0x3ff0000000000000;
                  local_5b8 = local_238;
                  if (local_238 < 1.0) {
                    local_5b8 = 1.0;
                  }
                  local_248 = local_5b8;
                  local_230 = local_5b8;
                  local_378 = local_160;
                  if ((uVar3 & 1) != 0) {
                    local_249 = 0;
                    _memset(auStack_298,0,0x40);
                    uVar3 = local_158;
                    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_subviews_026cab40);
                    _objc_retainAutoreleasedReturnValue();
                    local_5d8 = uVar3;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    if (local_5d8 != 0) {
                      lVar7 = *local_288;
                      local_5e0 = 0;
                      do {
                        do {
                          if (*local_288 - lVar7 != 0) {
                            _objc_enumerationMutation(*local_288 - lVar7,uVar3);
                          }
                          uVar6 = *(ulong *)(local_290 + local_5e0 * 8);
                          local_258 = uVar6;
                          if (uVar6 != local_1f8) {
                            puVar4 = PTR__OBJC_CLASS___UILabel_026cdfb8;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
                            if (((uVar6 & 1) != 0) &&
                               (uVar6 = local_258, FUN_007dd048(local_258,local_158),
                               (uVar6 & 1) != 0)) {
                              local_249 = 1;
                              local_150 = 4;
                              goto LAB_007c540c;
                            }
                          }
                          local_5e0 = local_5e0 + 1;
                        } while (local_5e0 < local_5d8);
                        local_5d8 = uVar3;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_298
                                   ,auStack_128,0x10);
                        local_5e0 = 0;
                      } while (local_5d8 != 0);
                    }
                    local_150 = 0;
LAB_007c540c:
                    (*(code *)PTR__objc_release_02578630)(uVar3);
                    FUN_007dde0c(local_1f8);
                    uVar3 = local_1f8;
                    if ((local_249 & 1) == 0) {
                      dVar8 = 1.7976931348623157e+308;
                      FUN_007de24c();
                      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_sizeThatFits__0269ec10);
                      local_648 = (double)(long)dVar8;
                      if (local_648 < 1.0) {
                        local_648 = 1.0;
                      }
                      local_650 = local_188 - 4.0;
                      if (local_650 < 1.0) {
                        local_650 = 1.0;
                      }
                      if (local_650 <= local_648) {
                        local_658 = local_650;
                      }
                      else {
                        local_658 = local_648;
                      }
                      (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_frame_026ca640);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_228,(long)((local_188 - local_658) / 2.0),local_230,local_1f8
                                 ,PTR_s_setFrame__026ca960);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_1f8,PTR_s_setTextAlignment__026caa90,1);
                      local_150 = 3;
                      goto LAB_007c5948;
                    }
                  }
                  (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_bounds_026ca548);
                  (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_bounds_026ca548);
                  uVar3 = local_1f8;
                  dVar8 = 1.7976931348623157e+308;
                  FUN_007de24c();
                  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_sizeThatFits__0269ec10);
                  dVar8 = (double)(long)dVar8;
                  if ((0.0 < dVar8) && (dVar8 < local_378)) {
                    local_378 = dVar8;
                  }
                  if (local_160 < local_378) {
                    local_378 = local_160;
                  }
                  dVar8 = local_160 - local_378;
                  uVar9 = 0x4000000000000000;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_frame_026ca640);
                  (*(code *)PTR__objc_msgSend_02578628)
                            ((long)(dVar8 / 2.0),uVar9,local_378,local_1f8,PTR_s_setFrame__026ca960)
                  ;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1f8,PTR_s_setTextAlignment__026caa90,1);
                  local_150 = 0;
                }
                else {
                  local_150 = 3;
                }
              }
LAB_007c5948:
              _objc_storeStrong(&local_200);
              _objc_storeStrong(&local_1f8,0);
            }
            local_520 = local_520 + 1;
          } while (local_520 < local_518);
          local_518 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_a8,
                     0x10);
          local_520 = 0;
        } while (local_518 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      _objc_storeStrong(&local_158,0);
      local_150 = 0;
    }
  }
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

