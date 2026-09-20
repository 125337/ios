// FUN_002c7f90 @ 002c7f90

/* WARNING: Restarted to delay deadcode elimination for space: stack */

long FUN_002c7f90(undefined8 param_1,byte param_2,byte param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong local_290;
  ulong local_288;
  ulong local_250;
  ulong local_248;
  byte local_208;
  ulong local_200;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  ulong local_1b8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  ulong local_160;
  long local_158;
  long local_150;
  byte local_141;
  long *local_140;
  byte local_132;
  byte local_131;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  local_208 = 1;
  if ((param_2 & 1) == 0) {
    local_208 = param_3;
  }
  local_141 = local_208 & 1;
  local_150 = 0;
  local_158 = 0;
  local_132 = param_3;
  local_131 = param_2;
  local_140 = param_4;
  _memset(auStack_1a0,0,0x40);
  uVar1 = local_130;
  (*(code *)PTR__objc_retain_02578638)();
  local_248 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
  if (local_248 != 0) {
    lVar4 = *local_190;
    local_250 = 0;
    do {
      do {
        if (*local_190 - lVar4 != 0) {
          _objc_enumerationMutation(*local_190 - lVar4,uVar1);
        }
        local_160 = *(ulong *)(local_198 + local_250 * 8);
        _memset(auStack_1f8,0,0x40);
        uVar2 = local_160;
        (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_288 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_288 != 0) {
          lVar5 = *local_1e8;
          local_290 = 0;
          do {
            do {
              if (*local_1e8 - lVar5 != 0) {
                _objc_enumerationMutation(*local_1e8 - lVar5,uVar2);
              }
              uVar6 = *(ulong *)(local_1f0 + local_290 * 8);
              local_1b8 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_class_0269cd60);
              _NSStringFromClass();
              _objc_retainAutoreleasedReturnValue();
              local_200 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar6,PTR_s_isEqualToString__0269ccc8,&cf_UITabBarButtonLabel);
              if (((uVar6 & 1) != 0) ||
                 (uVar6 = local_200,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_200,PTR_s_containsString__0269d0b0,&cf_TabBarButtonLabel),
                 (uVar6 & 1) != 0)) {
                local_150 = local_150 + 1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1b8,PTR_s_setHidden__026ca970,local_141 & 1);
                uVar7 = 0;
                if ((local_141 & 1) == 0) {
                  uVar7 = 0x3ff0000000000000;
                }
                (*(code *)PTR__objc_msgSend_02578628)(uVar7,local_1b8,PTR_s_setAlpha__026ca860);
                uVar6 = local_1b8;
                if ((local_141 & 1) == 0) {
                  local_158 = local_158 + 1;
                  puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
                  if ((uVar6 & 1) != 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1b8,PTR_s_setTextAlignment__026caa90,1);
                  }
                }
              }
              _objc_storeStrong(&local_200,0);
              local_290 = local_290 + 1;
            } while (local_290 < local_288);
            local_288 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128
                       ,0x10);
            local_290 = 0;
          } while (local_288 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar2);
        local_250 = local_250 + 1;
      } while (local_250 < local_248);
      local_248 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
      local_250 = 0;
    } while (local_248 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  lVar4 = local_150;
  if (local_140 != (long *)0x0) {
    *local_140 = local_158;
  }
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

