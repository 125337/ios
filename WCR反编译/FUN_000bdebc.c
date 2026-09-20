// FUN_000bdebc @ 000bdebc

void FUN_000bdebc(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_230;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  bool local_151;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  byte local_131;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8 [3];
  uint local_bc;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  pcVar3 = local_b8;
  if (local_b8 == (cfstringStruct *)0x0) {
    local_b0 = (cfstringStruct *)0x0;
    local_bc = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    pcVar4 = local_b8;
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_d8[0] = (cfstringStruct *)0x0;
        _memset(auStack_120,0,0x40);
        pcVar3 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_childViewControllers_0269d618);
        _objc_retainAutoreleasedReturnValue();
        local_1c0 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_1c0 != (cfstringStruct *)0x0) {
          lVar5 = *local_110;
          local_1c8 = (cfstringStruct *)0x0;
          do {
            do {
              if (*local_110 - lVar5 != 0) {
                _objc_enumerationMutation(*local_110 - lVar5,pcVar3);
              }
              pcVar6 = *(cfstringStruct **)(local_118 + (long)local_1c8 * 8);
              puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
              local_e0 = pcVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
              pcVar4 = local_e0;
              if (((ulong)pcVar6 & 1) == 0) {
                FUN_000bdebc();
                _objc_retainAutoreleasedReturnValue();
                local_168 = pcVar4;
                if (pcVar4 != (cfstringStruct *)0x0) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_b0 = pcVar4;
                }
                local_bc = (uint)(pcVar4 != (cfstringStruct *)0x0);
                _objc_storeStrong(&local_168,0);
                if (local_bc != 0) goto LAB_000be5c8;
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_128 = pcVar4;
                (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_visibleViewController_0269d460);
                _objc_retainAutoreleasedReturnValue();
                local_131 = 0;
                pcVar6 = &cf_isWCSplitEmptyView;
                local_130 = pcVar4;
                _NSSelectorFromString();
                local_140 = pcVar6;
                if ((local_130 != (cfstringStruct *)0x0) &&
                   (pcVar4 = local_130,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_130,PTR_s_respondsToSelector__026ca818,pcVar6),
                   ((ulong)pcVar4 & 1) != 0)) {
                  pcVar4 = local_130;
                  (*(code *)PTR__objc_msgSend_02578628)(local_130,local_140);
                  local_131 = (byte)pcVar4;
                }
                local_151 = false;
                bVar1 = local_130 == (cfstringStruct *)0x0;
                if (bVar1) {
                  local_230 = &cf___;
                }
                else {
                  local_230 = local_130;
                  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_class_0269cd60);
                  _NSStringFromClass();
                  _objc_retainAutoreleasedReturnValue();
                  local_150 = local_230;
                }
                local_151 = !bVar1;
                (*(code *)PTR__objc_retain_02578638)();
                local_148 = local_230;
                if ((local_151 & 1U) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_150);
                }
                pcVar4 = local_128;
                (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_class_0269cd60);
                _NSStringFromClass();
                _objc_retainAutoreleasedReturnValue();
                pcVar6 = local_148;
                local_160 = pcVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_148,PTR_s_containsString__0269d0b0,&cf_WCSplitEmpty);
                if ((((ulong)pcVar6 & 1) != 0) ||
                   (pcVar4 = local_160,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_160,PTR_s_containsString__0269d0b0,&cf_WCSplitEmpty),
                   ((ulong)pcVar4 & 1) != 0)) {
                  local_131 = 1;
                }
                pcVar4 = local_128;
                if ((local_131 & 1) == 0) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_b0 = pcVar4;
                  local_bc = 1;
                }
                else {
                  if (local_d8[0] == (cfstringStruct *)0x0) {
                    _objc_storeStrong(local_d8,local_128);
                  }
                  local_bc = 3;
                }
                _objc_storeStrong(&local_160);
                _objc_storeStrong(&local_148,0);
                _objc_storeStrong(&local_130,0);
                _objc_storeStrong(&local_128,0);
                if (local_bc != 3) goto LAB_000be5c8;
              }
              local_1c8 = (cfstringStruct *)((long)&local_1c8->field0_0x0 + 1);
            } while (local_1c8 < local_1c0);
            local_1c0 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8
                       ,0x10);
            local_1c8 = (cfstringStruct *)0x0;
          } while (local_1c0 != (cfstringStruct *)0x0);
        }
        local_bc = 0;
LAB_000be5c8:
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar3 = local_d8[0];
        if (local_bc == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = pcVar3;
          local_bc = 1;
        }
        _objc_storeStrong(local_d8,0);
      }
      else {
        pcVar3 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        local_bc = 1;
        local_b0 = pcVar3;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = pcVar4;
      local_bc = 1;
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

