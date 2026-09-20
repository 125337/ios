// FUN_002f7a68 @ 002f7a68

void FUN_002f7a68(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *local_240;
  undefined *local_238;
  undefined *local_200;
  undefined *local_1f8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  undefined8 local_190;
  undefined4 local_184;
  undefined *local_180;
  undefined *local_178;
  undefined1 auStack_170 [8];
  long local_168;
  long *local_160;
  undefined8 local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  DAT_028c9aa0 = DAT_028c9aa0 + 1;
  _memset(auStack_170,0,0x40);
  puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_1f8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_a8,0x10);
  if (local_1f8 != (undefined *)0x0) {
    lVar3 = *local_160;
    local_200 = (undefined *)0x0;
    do {
      do {
        if (*local_160 - lVar3 != 0) {
          _objc_enumerationMutation(*local_160 - lVar3,puVar2);
        }
        local_130 = *(undefined8 *)(local_168 + (long)local_200 * 8);
        puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,
                   local_130);
        _objc_retainAutoreleasedReturnValue();
        local_178 = puVar1;
        while (puVar1 = local_178,
              (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_count_0269cfe0),
              puVar1 != (undefined *)0x0) {
          puVar1 = local_178;
          (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_lastObject_0269d200);
          _objc_retainAutoreleasedReturnValue();
          local_180 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_removeLastObject_0269e830);
          puVar1 = local_180;
          FUN_002f7e80();
          if (((ulong)puVar1 & 1) == 0) {
            _memset(auStack_1d0,0,0x40);
            puVar1 = local_180;
            (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            local_238 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_238 != (undefined *)0x0) {
              lVar4 = *local_1c0;
              local_240 = (undefined *)0x0;
              do {
                do {
                  if (*local_1c0 - lVar4 != 0) {
                    _objc_enumerationMutation(*local_1c0 - lVar4,puVar1);
                  }
                  local_190 = *(undefined8 *)(local_1c8 + (long)local_240 * 8);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_178,PTR_s_addObject__0269d180,local_190);
                  local_240 = local_240 + 1;
                } while (local_240 < local_238);
                local_238 = puVar1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,
                           auStack_128,0x10);
                local_240 = (undefined *)0x0;
              } while (local_238 != (undefined *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar1);
            local_184 = 0;
          }
          else {
            FUN_002f7f58(local_180);
            local_184 = 4;
          }
          _objc_storeStrong(&local_180,0);
        }
        _objc_storeStrong(0,&local_178,0);
        local_200 = local_200 + 1;
      } while (local_200 < local_1f8);
      local_1f8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_a8,0x10)
      ;
      local_200 = (undefined *)0x0;
    } while (local_1f8 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

