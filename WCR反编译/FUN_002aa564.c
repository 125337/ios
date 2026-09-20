// FUN_002aa564 @ 002aa564

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_002aa564(double param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  double dVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *local_438;
  undefined *local_430;
  undefined *local_3a8;
  undefined *local_3a0;
  undefined *local_370;
  undefined *local_350;
  undefined *local_330;
  undefined1 auStack_298 [8];
  long local_290;
  long *local_288;
  ulong local_258;
  double local_250;
  undefined8 uStack_248;
  double local_240;
  undefined8 uStack_238;
  double local_230;
  undefined8 uStack_228;
  ulong local_220;
  undefined1 auStack_218 [8];
  long local_210;
  long *local_208;
  ulong local_1d8;
  byte local_1c9;
  undefined *local_1c8;
  byte local_1b9;
  undefined *local_1b8;
  byte local_1a9;
  undefined *local_1a8;
  undefined *local_1a0;
  int local_194;
  double local_190;
  undefined8 uStack_188;
  undefined8 local_170;
  undefined8 local_168;
  undefined *local_160;
  double local_158;
  undefined8 uStack_150;
  byte local_141;
  undefined1 auStack_140 [128];
  undefined1 auStack_c0 [128];
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  dVar1 = DAT_02323d38;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_170 = 0;
  local_168 = param_4;
  local_160 = param_3;
  local_158 = param_1;
  uStack_150 = param_2;
  _objc_storeStrong(&local_170,param_5);
  puVar2 = local_160;
  FUN_002bad18();
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((ulong)puVar3 & 1) != 0) {
      puVar2 = local_160;
      FUN_0029ded4(local_160,0x24f749);
      _objc_retainAutoreleasedReturnValue();
      local_1a9 = 0;
      local_330 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_330 = PTR__OBJC_CLASS___NSNull_026ce0e8;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_1a8 = local_330;
      }
      local_40 = local_330;
      puVar3 = local_160;
      local_1a9 = puVar2 == (undefined *)0x0;
      FUN_0029ded4(local_160,0x24f74a);
      _objc_retainAutoreleasedReturnValue();
      local_1b9 = 0;
      local_350 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        local_350 = PTR__OBJC_CLASS___NSNull_026ce0e8;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_1b8 = local_350;
      }
      local_38 = local_350;
      puVar4 = local_160;
      local_1b9 = puVar3 == (undefined *)0x0;
      FUN_0029ded4(local_160,0x24f74b);
      _objc_retainAutoreleasedReturnValue();
      local_1c9 = 0;
      local_370 = puVar4;
      if (puVar4 == (undefined *)0x0) {
        local_370 = PTR__OBJC_CLASS___NSNull_026ce0e8;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_1c8 = local_370;
      }
      local_30 = local_370;
      puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_1c9 = puVar4 == (undefined *)0x0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      local_1a0 = puVar5;
      if ((local_1c9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1c8);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if ((local_1b9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1b8);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if ((local_1a9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1a8);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _memset(auStack_218,0,0x40);
      puVar2 = local_1a0;
      (*(code *)PTR__objc_retain_02578638)();
      local_3a0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_c0,0x10)
      ;
      if (local_3a0 != (undefined *)0x0) {
        lVar6 = *local_208;
        local_3a8 = (undefined *)0x0;
        do {
          do {
            if (*local_208 - lVar6 != 0) {
              _objc_enumerationMutation(*local_208 - lVar6,puVar2);
            }
            uVar7 = *(ulong *)(local_210 + (long)local_3a8 * 8);
            puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
            local_1d8 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
            uVar8 = local_1d8;
            if ((uVar7 & 1) != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_220 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isHidden_026ca768);
              if ((((uVar8 & 1) != 0) ||
                  ((*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_alpha_026ca4d8),
                  param_1 <= dVar1)) ||
                 (uVar8 = local_220,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_220,PTR_s_isUserInteractionEnabled_026ca770), (uVar8 & 1) == 0)) {
                local_194 = 3;
              }
              else {
                uStack_238 = uStack_150;
                local_240 = local_158;
                param_1 = local_158;
                uVar9 = uStack_150;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_220,PTR_s_convertPoint_fromView__026a1c40,local_160);
                uVar8 = local_220;
                local_250 = param_1;
                uStack_248 = uVar9;
                local_230 = param_1;
                uStack_228 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)
                          (param_1,uVar9,local_220,PTR_s_pointInside_withEvent__0269e768,local_170);
                if ((uVar8 & 1) == 0) {
                  local_194 = 0;
                }
                else {
                  local_141 = 1;
                  local_194 = 1;
                }
              }
              _objc_storeStrong(&local_220,0);
              if ((local_194 != 0) && (local_194 != 3)) goto LAB_002aadd4;
            }
            local_3a8 = local_3a8 + 1;
          } while (local_3a8 < local_3a0);
          local_3a0 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_c0,
                     0x10);
          local_3a8 = (undefined *)0x0;
        } while (local_3a0 != (undefined *)0x0);
      }
      local_194 = 0;
LAB_002aadd4:
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_194 == 0) {
        _memset(auStack_298,0,0x40);
        puVar2 = local_160;
        FUN_002ae960(local_160,&cf_UITabBarButton);
        _objc_retainAutoreleasedReturnValue();
        local_430 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_430 != (undefined *)0x0) {
          lVar6 = *local_288;
          local_438 = (undefined *)0x0;
          do {
            do {
              if (*local_288 - lVar6 != 0) {
                _objc_enumerationMutation(*local_288 - lVar6,puVar2);
              }
              uVar8 = *(ulong *)(local_290 + (long)local_438 * 8);
              local_258 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isHidden_026ca768);
              if ((((uVar8 & 1) == 0) &&
                  ((*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_alpha_026ca4d8),
                  dVar1 < param_1)) &&
                 (uVar8 = local_258,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_258,PTR_s_isUserInteractionEnabled_026ca770), (uVar8 & 1) != 0)) {
                param_1 = local_158;
                uVar9 = uStack_150;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_258,PTR_s_convertPoint_fromView__026a1c40,local_160);
                uVar8 = local_258;
                (*(code *)PTR__objc_msgSend_02578628)
                          (param_1,uVar9,local_258,PTR_s_pointInside_withEvent__0269e768,local_170);
                if ((uVar8 & 1) != 0) {
                  local_141 = 1;
                  local_194 = 1;
                  goto LAB_002ab0bc;
                }
              }
              local_438 = local_438 + 1;
            } while (local_438 < local_430);
            local_430 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_298,
                       auStack_140,0x10);
            local_438 = (undefined *)0x0;
          } while (local_430 != (undefined *)0x0);
        }
        local_194 = 0;
LAB_002ab0bc:
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (local_194 == 0) {
          local_194 = 0;
        }
      }
      _objc_storeStrong(&local_1a0,0);
      if (local_194 != 0) goto LAB_002ab15c;
    }
    puVar2 = local_160;
    (*DAT_028c9790)(local_158,uStack_150,local_160,local_168,local_170);
    local_141 = (byte)puVar2 & 1;
    local_194 = 1;
  }
  else {
    uStack_188 = uStack_150;
    local_190 = local_158;
    puVar2 = local_160;
    (*DAT_028c9790)(local_158,uStack_150,local_160,local_168,local_170);
    local_141 = (byte)puVar2 & 1;
    local_194 = 1;
  }
LAB_002ab15c:
  _objc_storeStrong(&local_170,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_141 & 1;
}

