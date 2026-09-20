// FUN_0022f480 @ 0022f480

void FUN_0022f480(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong local_298;
  ulong local_290;
  undefined *local_238;
  undefined *local_230;
  undefined *local_200;
  undefined *local_1f8;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  long local_1b0;
  ulong local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  ulong local_160;
  undefined *local_148;
  undefined4 local_13c;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  local_138 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_13c = 1;
    local_130 = puVar1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_148 = puVar1;
    _memset(auStack_1a0,0,0x40);
    puVar1 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_connectedScenes_026ca590);
    _objc_retainAutoreleasedReturnValue();
    local_230 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_230 != (undefined *)0x0) {
      lVar4 = *local_190;
      local_238 = (undefined *)0x0;
      do {
        do {
          if (*local_190 - lVar4 != 0) {
            _objc_enumerationMutation(*local_190 - lVar4,puVar1);
          }
          uVar5 = *(ulong *)(local_198 + (long)local_238 * 8);
          puVar2 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
          local_160 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
          uVar3 = local_160;
          if ((uVar5 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_1a8 = uVar3;
            _memset(auStack_1f0,0,0x40);
            uVar3 = local_1a8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_windows_0269dde0);
            _objc_retainAutoreleasedReturnValue();
            local_290 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_290 != 0) {
              lVar6 = *local_1e0;
              local_298 = 0;
              do {
                do {
                  if (*local_1e0 - lVar6 != 0) {
                    _objc_enumerationMutation(*local_1e0 - lVar6,uVar3);
                  }
                  local_1b0 = *(long *)(local_1e8 + local_298 * 8);
                  if (local_1b0 != 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_148,PTR_s_addObject__0269d180,local_1b0);
                  }
                  local_298 = local_298 + 1;
                } while (local_298 < local_290);
                local_290 = uVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,
                           auStack_128,0x10);
                local_298 = 0;
              } while (local_290 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar3);
            _objc_storeStrong(&local_1a8,0);
          }
          local_238 = local_238 + 1;
        } while (local_238 < local_230);
        local_230 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,
                   0x10);
        local_238 = (undefined *)0x0;
      } while (local_230 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_count_0269cfe0);
    if (puVar1 == (undefined *)0x0) {
      puVar1 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_windows_0269dde0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_1f8 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)puVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_148,PTR_s_addObjectsFromArray__0269d540,local_1f8);
      }
      puVar1 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_keyWindow_0269d308);
      _objc_retainAutoreleasedReturnValue();
      local_200 = puVar1;
      if ((puVar1 != (undefined *)0x0) &&
         (puVar2 = local_148,
         (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_containsObject__0269cbb8,puVar1),
         ((ulong)puVar2 & 1) == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_addObject__0269d180,local_200);
      }
      _objc_storeStrong(&local_200);
      _objc_storeStrong(&local_1f8,0);
    }
    puVar1 = local_148;
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = puVar1;
    local_13c = 1;
    _objc_storeStrong(&local_148,0);
  }
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_130);
  return;
}

