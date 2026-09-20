// FUN_004218c4 @ 004218c4

void FUN_004218c4(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  cfstringStruct *local_280;
  cfstringStruct *local_278;
  cfstringStruct *local_230;
  cfstringStruct *local_228;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  undefined8 local_1a8;
  cfstringStruct *local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  undefined8 local_158;
  cfstringStruct *local_150;
  int local_148;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_138,param_1);
  pcVar2 = local_138;
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_count_0269cfe0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = &cf___;
    local_148 = 1;
  }
  else {
    FUN_00423120();
    _objc_retainAutoreleasedReturnValue();
    local_150 = pcVar2;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(pcVar2);
    _memset(auStack_198,0,0x40);
    pcVar1 = local_138;
    (*(code *)PTR__objc_retain_02578638)();
    local_228 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
    if (local_228 != (cfstringStruct *)0x0) {
      lVar4 = *local_188;
      local_230 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_188 - lVar4 != 0) {
            _objc_enumerationMutation(*local_188 - lVar4,pcVar1);
          }
          local_158 = *(undefined8 *)(local_190 + (long)local_230 * 8);
          pcVar3 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_150,PTR_s_objectForKeyedSubscript__0269d098,local_158);
          _objc_retainAutoreleasedReturnValue();
          local_1a0 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
          if (pcVar3 == (cfstringStruct *)0x0) {
            local_148 = 0;
            uVar6 = 0;
          }
          else {
            _memset(auStack_1e8,0,0x40);
            pcVar3 = local_138;
            (*(code *)PTR__objc_retain_02578638)();
            local_278 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,
                       auStack_128,0x10);
            if (local_278 != (cfstringStruct *)0x0) {
              lVar5 = *local_1d8;
              local_280 = (cfstringStruct *)0x0;
              do {
                do {
                  if (*local_1d8 - lVar5 != 0) {
                    _objc_enumerationMutation(*local_1d8 - lVar5,pcVar3);
                  }
                  local_1a8 = *(undefined8 *)(local_1e0 + (long)local_280 * 8);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_150,PTR_s_removeObjectForKey__0269d700,local_1a8);
                  local_280 = (cfstringStruct *)((long)&local_280->field0_0x0 + 1);
                } while (local_280 < local_278);
                local_278 = pcVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,
                           auStack_128,0x10);
                local_280 = (cfstringStruct *)0x0;
              } while (local_278 != (cfstringStruct *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            pcVar3 = local_1a0;
            (*(code *)PTR__objc_retain_02578638)();
            local_130 = pcVar3;
            uVar6 = 1;
            local_148 = 1;
          }
          _objc_storeStrong(uVar6,&local_1a0,0);
          if (local_148 != 0) goto LAB_00421d28;
          local_230 = (cfstringStruct *)((long)&local_230->field0_0x0 + 1);
        } while (local_230 < local_228);
        local_228 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,
                   0x10);
        local_230 = (cfstringStruct *)0x0;
      } while (local_228 != (cfstringStruct *)0x0);
    }
    local_148 = 0;
LAB_00421d28:
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if (local_148 == 0) {
      local_148 = 0;
    }
    _objc_sync_exit(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if (local_148 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = &cf___;
      local_148 = 1;
    }
    _objc_storeStrong(&local_150,0);
  }
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

