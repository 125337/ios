// FUN_00535f50 @ 00535f50

void FUN_00535f50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong local_328;
  ulong local_320;
  ulong local_2d0;
  ulong local_2c8;
  ulong local_250;
  long local_200;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  long local_1b8;
  long local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  long local_168;
  undefined *local_160;
  ulong local_158;
  undefined4 local_150;
  ulong local_140;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  local_140 = 0;
  _objc_storeStrong(&local_140,param_2);
  uVar2 = local_140;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar3 = local_140, (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_count_0269cfe0),
     uVar2 = local_138, uVar3 == 0)) {
    uVar2 = local_138;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) == 0) {
      local_250 = *(ulong *)PTR____NSArray0___02578280;
    }
    else {
      local_250 = local_138;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = local_250;
    local_150 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = local_138, (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_count_0269cfe0),
       uVar2 == 0)) {
      uVar2 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_copy_0269d150);
      local_150 = 1;
      local_130 = uVar2;
    }
    else {
      uVar2 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_mutableCopy_0269d8a0);
      puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      uVar3 = local_138;
      local_158 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_count_0269cfe0);
      uVar2 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setWithCapacity__0269e038,uVar3 + uVar2);
      _objc_retainAutoreleasedReturnValue();
      local_160 = puVar1;
      _memset(auStack_1a8,0,0x40);
      uVar2 = local_138;
      (*(code *)PTR__objc_retain_02578638)();
      local_2c8 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10);
      if (local_2c8 != 0) {
        lVar4 = *local_198;
        local_2d0 = 0;
        do {
          do {
            if (*local_198 - lVar4 != 0) {
              _objc_enumerationMutation(*local_198 - lVar4,uVar2);
            }
            lVar5 = *(long *)(local_1a0 + local_2d0 * 8);
            local_168 = lVar5;
            FUN_0052e538();
            _objc_retainAutoreleasedReturnValue();
            local_1b0 = lVar5;
            (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
            if (lVar5 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_addObject__0269d180,local_1b0);
            }
            _objc_storeStrong(&local_1b0,0);
            local_2d0 = local_2d0 + 1;
          } while (local_2d0 < local_2c8);
          local_2c8 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,
                     0x10);
          local_2d0 = 0;
        } while (local_2c8 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      _memset(auStack_1f8,0,0x40);
      uVar2 = local_140;
      (*(code *)PTR__objc_retain_02578638)();
      local_320 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128,0x10)
      ;
      if (local_320 != 0) {
        lVar4 = *local_1e8;
        local_328 = 0;
        do {
          do {
            if (*local_1e8 - lVar4 != 0) {
              _objc_enumerationMutation(*local_1e8 - lVar4,uVar2);
            }
            lVar5 = *(long *)(local_1f0 + local_328 * 8);
            local_1b8 = lVar5;
            FUN_0052e538();
            _objc_retainAutoreleasedReturnValue();
            local_200 = lVar5;
            (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
            if ((lVar5 == 0) ||
               (puVar1 = local_160,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_160,PTR_s_containsObject__0269cbb8,local_200),
               ((ulong)puVar1 & 1) == 0)) {
              lVar5 = local_200;
              (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_length_0269cca0);
              if (lVar5 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_addObject__0269d180,local_200)
                ;
              }
              (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_addObject__0269d180,local_1b8);
              local_150 = 0;
            }
            else {
              local_150 = 5;
            }
            _objc_storeStrong(&local_200,0);
            local_328 = local_328 + 1;
          } while (local_328 < local_320);
          local_320 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128,
                     0x10);
          local_328 = 0;
        } while (local_320 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_158;
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = uVar2;
      local_150 = 1;
      _objc_storeStrong(&local_160);
      _objc_storeStrong(&local_158,0);
    }
  }
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_130);
  return;
}

