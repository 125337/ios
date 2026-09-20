// _WCRefineClearClownOverridesForSession @ 00f1b0f8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void _WCRefineClearClownOverridesForSession(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong local_2d8;
  ulong local_2d0;
  undefined *local_290;
  undefined *local_288;
  undefined1 auStack_248 [8];
  long local_240;
  long *local_238;
  ulong local_208;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  ulong local_1b0;
  undefined *local_1a8;
  long local_1a0;
  undefined4 local_194;
  long local_190;
  undefined1 auStack_188 [128];
  undefined1 auStack_108 [128];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_190 = 0;
  _objc_storeStrong(&local_190,param_1);
  lVar1 = local_190;
  (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_194 = 1;
  }
  else {
    FUN_00f16cb4();
    lVar1 = local_190;
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_stringByAppendingString__0269d398,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_88 = DAT_028e2b40;
    local_80 = DAT_028e2b48;
    local_78 = DAT_028e2b50;
    local_70 = DAT_028e2b58;
    local_68 = DAT_028e2b60;
    local_60 = DAT_028e2b68;
    local_58 = DAT_028e2b70;
    local_50 = DAT_028e2b78;
    local_48 = DAT_028e2b80;
    local_40 = DAT_028e2b88;
    local_38 = DAT_028e2b90;
    local_30 = DAT_028e2b38;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_1a0 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_88,
               0xc);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = DAT_028e2b58;
    local_1a8 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(lVar1);
    _memset(auStack_1f0,0,0x40);
    puVar2 = local_1a8;
    (*(code *)PTR__objc_retain_02578638)();
    local_288 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_108,0x10);
    if (local_288 != (undefined *)0x0) {
      lVar4 = *local_1e0;
      local_290 = (undefined *)0x0;
      do {
        do {
          if (*local_1e0 - lVar4 != 0) {
            _objc_enumerationMutation(*local_1e0 - lVar4,puVar2);
          }
          local_1b0 = *(ulong *)(local_1e8 + (long)local_290 * 8);
          _memset(auStack_248,0,0x40);
          uVar6 = local_1b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_allKeys_0269ef58);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar6);
          local_2d0 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_248,auStack_188,
                     0x10);
          if (local_2d0 != 0) {
            lVar5 = *local_238;
            local_2d8 = 0;
            do {
              do {
                if (*local_238 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_238 - lVar5,uVar3);
                }
                uVar6 = *(ulong *)(local_240 + local_2d8 * 8);
                local_208 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_hasPrefix__0269d320,local_1a0);
                if ((uVar6 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1b0,PTR_s_removeObjectForKey__0269d700,local_208);
                }
                local_2d8 = local_2d8 + 1;
              } while (local_2d8 < local_2d0);
              local_2d0 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_248,
                         auStack_188,0x10);
              local_2d8 = 0;
            } while (local_2d0 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar3);
          local_290 = local_290 + 1;
        } while (local_290 < local_288);
        local_288 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_108,
                   0x10);
        local_290 = (undefined *)0x0;
      } while (local_288 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    lVar4 = DAT_028e2b58;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e2b58,PTR_s_count_0269cfe0);
    _DAT_028e2bb4 = (uint)(lVar4 != 0);
    _objc_sync_exit(lVar1);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    _objc_storeStrong(&DAT_0280e078,&cf___);
    _objc_storeStrong(&local_1a8);
    _objc_storeStrong(&local_1a0,0);
    local_194 = 0;
  }
  _objc_storeStrong(&local_190,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

