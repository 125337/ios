// FUN_0069c608 @ 0069c608

void FUN_0069c608(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined *local_168;
  undefined *local_160;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  ulong local_d8;
  ulong local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_1);
  _memset(auStack_120,0,0x40);
  local_c8 = &cf_title;
  local_c0 = &cf_cellConfig_leftConfig_title;
  local_b8 = &cf_leftConfig_title;
  local_b0 = &cf_cellConfig_title;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8,4);
  _objc_retainAutoreleasedReturnValue();
  local_160 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_160 != (undefined *)0x0) {
    lVar7 = *local_110;
    local_168 = (undefined *)0x0;
    do {
      do {
        if (*local_110 - lVar7 != 0) {
          _objc_enumerationMutation(*local_110 - lVar7,puVar3);
        }
        local_e0 = *(undefined8 *)(local_118 + (long)local_168 * 8);
        uVar4 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_valueForKeyPath__026a0b98,local_e0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_128 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
        if (((uVar4 & 1) == 0) ||
           (uVar6 = local_128,
           (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0), uVar4 = local_128
           , uVar6 == 0)) {
          bVar1 = false;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_d0 = uVar4;
          bVar1 = true;
        }
        _objc_storeStrong(&local_128,0);
        bVar2 = true;
        if (bVar1) goto LAB_0069c8cc;
        local_168 = local_168 + 1;
      } while (local_168 < local_160);
      local_160 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10)
      ;
      local_168 = (undefined *)0x0;
    } while (local_160 != (undefined *)0x0);
  }
  bVar2 = false;
LAB_0069c8cc:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (!bVar2) {
    local_d0 = 0;
  }
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_d0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

