// FUN_0185f8c8 @ 0185f8c8

void FUN_0185f8c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *local_1c8;
  uint local_184;
  ulong local_168;
  ulong local_160;
  ulong local_148;
  long local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  long local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_c0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  _memset(auStack_110,0,0x40);
  uVar3 = local_b0;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar3 & 1) == 0) {
    local_148 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_148 = local_b0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_160 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_148,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_160 != 0) {
    lVar5 = *local_100;
    local_168 = 0;
    do {
      do {
        if (*local_100 - lVar5 != 0) {
          _objc_enumerationMutation(*local_100 - lVar5,local_148);
        }
        lVar6 = *(long *)(local_108 + local_168 * 8);
        local_d0 = lVar6;
        FUN_01867fb4(lVar6,local_b8);
        _objc_retainAutoreleasedReturnValue();
        local_118 = lVar6;
        (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_userName_0269f7b8);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        puVar1 = local_c8;
        local_184 = 1;
        if (lVar4 != 0) {
          lVar4 = local_118;
          (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_userName_0269f7b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_containsObject__0269cbb8);
          local_184 = (uint)puVar1;
          (*(code *)PTR__objc_release_02578630)(lVar4);
        }
        (*(code *)PTR__objc_release_02578630)(lVar6);
        puVar1 = local_c8;
        if ((local_184 & 1) == 0) {
          lVar4 = local_118;
          (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_userName_0269f7b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(lVar4);
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addObject__0269d180,local_118);
        }
        _objc_storeStrong(&local_118,0);
        local_168 = local_168 + 1;
      } while (local_168 < local_160);
      local_160 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_148,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,
                 0x10);
      local_168 = 0;
    } while (local_160 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_148);
  puVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_copy_0269d150);
  local_1c8 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_1c8 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_1c8);
  return;
}

