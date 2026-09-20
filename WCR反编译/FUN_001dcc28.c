// FUN_001dcc28 @ 001dcc28

void FUN_001dcc28(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_1a0;
  undefined *local_198;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  undefined *local_e8;
  ulong local_e0;
  undefined *local_d8;
  cfstringStruct *local_d0;
  undefined4 local_b4;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  if (local_b0 == 0) {
    local_b4 = 1;
  }
  else {
    _objc_setAssociatedObject(local_b0,DAT_026dfaa0,0,1);
    pcVar1 = &cf_WCImageView;
    _NSClassFromString();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    lVar3 = local_b0;
    local_d0 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithArray__0269eab8);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar2;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    local_e0 = 0;
    while (puVar2 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0),
          puVar2 != (undefined *)0x0 && local_e0 < 0x50) {
      puVar2 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_removeObjectAtIndex__0269d530,0);
      local_e0 = local_e0 + 1;
      if (((long)local_e8 - local_b0 != 0) &&
         ((puVar2 = local_e8, FUN_001de258((long)local_e8 - local_b0,local_e8,local_b0),
          ((ulong)puVar2 & 1) != 0 ||
          ((local_d0 != (cfstringStruct *)0x0 &&
           (puVar2 = local_e8,
           (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_isKindOfClass__0269cd68,local_d0),
           ((ulong)puVar2 & 1) != 0)))))) {
        FUN_001de6c8(local_e8);
      }
      _memset(auStack_130,0,0x40);
      puVar2 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_198 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_198 != (undefined *)0x0) {
        lVar3 = *local_120;
        local_1a0 = (undefined *)0x0;
        do {
          do {
            if (*local_120 - lVar3 != 0) {
              _objc_enumerationMutation(*local_120 - lVar3,puVar2);
            }
            local_f0 = *(undefined8 *)(local_128 + (long)local_1a0 * 8);
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_f0);
            local_1a0 = local_1a0 + 1;
          } while (local_1a0 < local_198);
          local_198 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          local_1a0 = (undefined *)0x0;
        } while (local_198 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_e8,0);
    }
    _objc_storeStrong(&local_d8,0);
    local_b4 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

