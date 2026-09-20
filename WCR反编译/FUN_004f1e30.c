// FUN_004f1e30 @ 004f1e30

void FUN_004f1e30(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  void *pvVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  long lVar6;
  cfstringStruct *local_318;
  void *local_2e8;
  void *local_2e0;
  void *local_268;
  void *local_260;
  cfstringStruct *local_218;
  cfstringStruct *local_210;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  undefined8 local_1c8;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  undefined *local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  undefined8 local_160;
  uint local_158;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_138,param_1);
  local_140 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_140,param_2);
  pcVar2 = local_138;
  FUN_004f64e0();
  _objc_retainAutoreleasedReturnValue();
  local_148 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = &cf___;
    local_158 = 1;
  }
  else {
    pvVar3 = _memset(auStack_1a0,0,0x40);
    FUN_004f6720();
    _objc_retainAutoreleasedReturnValue();
    local_260 = pvVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_260 != (void *)0x0) {
      lVar6 = *local_190;
      local_268 = (void *)0x0;
      do {
        do {
          if (*local_190 - lVar6 != 0) {
            _objc_enumerationMutation(*local_190 - lVar6,pvVar3);
          }
          local_160 = *(undefined8 *)(local_198 + (long)local_268 * 8);
          pcVar2 = local_148;
          puVar5 = PTR_s_rangeOfString_options__0269d118;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_148,PTR_s_rangeOfString_options__0269d118,local_160,1);
          local_1b0 = pcVar2;
          local_1a8 = puVar5;
          if (pcVar2 != (cfstringStruct *)0x7fffffffffffffff) {
            pcVar4 = local_148;
            (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_substringToIndex__0269d6c0,pcVar2)
            ;
            _objc_retainAutoreleasedReturnValue();
            local_1b8 = pcVar4;
            FUN_004f67c4();
            _objc_retainAutoreleasedReturnValue();
            local_1c0 = pcVar4;
            FUN_004f3738();
            pcVar2 = local_1c0;
            bVar1 = ((ulong)pcVar4 & 1) != 0;
            if (bVar1) {
              (*(code *)PTR__objc_retain_02578638)();
              local_130 = pcVar2;
            }
            local_158 = (uint)bVar1;
            _objc_storeStrong(&local_1c0);
            _objc_storeStrong(&local_1b8,0);
            if (local_158 != 0) goto LAB_004f21a8;
          }
          local_268 = (void *)((long)local_268 + 1);
        } while (local_268 < local_260);
        local_260 = pvVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pvVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,
                   0x10);
        local_268 = (void *)0x0;
      } while (local_260 != (void *)0x0);
    }
    local_158 = 0;
LAB_004f21a8:
    (*(code *)PTR__objc_release_02578630)(pvVar3);
    if (local_158 == 0) {
      pvVar3 = _memset(auStack_208,0,0x40);
      FUN_004f6720();
      _objc_retainAutoreleasedReturnValue();
      local_2e0 = pvVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_2e0 != (void *)0x0) {
        lVar6 = *local_1f8;
        local_2e8 = (void *)0x0;
        do {
          do {
            if (*local_1f8 - lVar6 != 0) {
              _objc_enumerationMutation(*local_1f8 - lVar6,pvVar3);
            }
            local_1c8 = *(undefined8 *)(local_200 + (long)local_2e8 * 8);
            pcVar2 = local_140;
            (*(code *)local_140->field2_0x10)(local_140,local_138,&cf_<_[CDATA[,local_1c8);
            _objc_retainAutoreleasedReturnValue();
            local_318 = pcVar2;
            if (pcVar2 == (cfstringStruct *)0x0) {
              local_318 = &cf___;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_210 = local_318;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            pcVar4 = local_210;
            FUN_004f67c4();
            _objc_retainAutoreleasedReturnValue();
            local_218 = pcVar4;
            FUN_004f3738();
            pcVar2 = local_218;
            bVar1 = ((ulong)pcVar4 & 1) != 0;
            if (bVar1) {
              (*(code *)PTR__objc_retain_02578638)();
              local_130 = pcVar2;
            }
            local_158 = (uint)bVar1;
            _objc_storeStrong(&local_218);
            _objc_storeStrong(&local_210,0);
            if (local_158 != 0) goto LAB_004f247c;
            local_2e8 = (void *)((long)local_2e8 + 1);
          } while (local_2e8 < local_2e0);
          local_2e0 = pvVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pvVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_128,
                     0x10);
          local_2e8 = (void *)0x0;
        } while (local_2e0 != (void *)0x0);
      }
      local_158 = 0;
LAB_004f247c:
      (*(code *)PTR__objc_release_02578630)(pvVar3);
      if (local_158 == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_130 = &cf___;
        local_158 = 1;
      }
    }
  }
  _objc_storeStrong(&local_148);
  _objc_storeStrong(&local_140,0);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

