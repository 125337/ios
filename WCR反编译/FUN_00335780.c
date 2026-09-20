// FUN_00335780 @ 00335780

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00335780(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint local_348;
  undefined *local_308;
  undefined *local_300;
  ulong local_270;
  ulong local_268;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  ulong local_1b8;
  undefined *local_1b0;
  ulong local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  ulong local_160;
  undefined *local_158;
  undefined4 local_150;
  ulong local_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = (undefined *)0x0;
  _objc_storeStrong(&local_138,param_1);
  local_140 = 0;
  _objc_storeStrong(&local_140,param_2);
  puVar1 = local_138;
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_count_0269cfe0);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = 1;
    local_130 = puVar1;
  }
  else {
    uVar5 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_count_0269cfe0);
    local_130 = local_138;
    if (uVar5 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_150 = 1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      local_158 = puVar1;
      _memset(auStack_1a0,0,0x40);
      uVar5 = local_140;
      (*(code *)PTR__objc_retain_02578638)();
      local_268 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
      if (local_268 != 0) {
        lVar4 = *local_190;
        local_270 = 0;
        do {
          do {
            if (*local_190 - lVar4 != 0) {
              _objc_enumerationMutation(*local_190 - lVar4,uVar5);
            }
            uVar6 = *(ulong *)(local_198 + local_270 * 8);
            local_160 = uVar6;
            if (DAT_028c9ed0 == (char *)0x0) {
              pcVar2 = "CContact";
              _objc_getClass();
              DAT_028c9ed0 = pcVar2;
            }
            pcVar2 = DAT_028c9ed0;
            _objc_retainAutoreleaseReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,pcVar2);
            if ((uVar6 & 1) != 0) {
              uVar6 = local_160;
              (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_m_nsUsrName_0269d638);
              _objc_retainAutoreleasedReturnValue();
              local_1a8 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_length_0269cca0);
              if (uVar6 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_addObject__0269d180,local_1a8)
                ;
              }
              _objc_storeStrong(&local_1a8,0);
            }
            local_270 = local_270 + 1;
          } while (local_270 < local_268);
          local_268 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,
                     0x10);
          local_270 = 0;
        } while (local_268 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar5);
      puVar3 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_count_0269cfe0);
      puVar1 = local_138;
      if (puVar3 == (undefined *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_130 = puVar1;
        local_150 = 1;
      }
      else {
        puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_1b0 = puVar1;
        _memset(auStack_1f8,0,0x40);
        puVar1 = local_138;
        (*(code *)PTR__objc_retain_02578638)();
        local_300 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128,
                   0x10);
        if (local_300 != (undefined *)0x0) {
          lVar4 = *local_1e8;
          local_308 = (undefined *)0x0;
          do {
            do {
              if (*local_1e8 - lVar4 != 0) {
                _objc_enumerationMutation(*local_1e8 - lVar4,puVar1);
              }
              uVar5 = *(ulong *)(local_1f0 + (long)local_308 * 8);
              local_1b8 = uVar5;
              if (DAT_028c9ed0 == (char *)0x0) {
                pcVar2 = "CContact";
                _objc_getClass();
                DAT_028c9ed0 = pcVar2;
              }
              pcVar2 = DAT_028c9ed0;
              _objc_retainAutoreleaseReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,pcVar2);
              puVar3 = local_158;
              local_348 = 0;
              if ((uVar5 & 1) != 0) {
                uVar5 = local_1b8;
                (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_m_nsUsrName_0269d638);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_containsObject__0269cbb8);
                local_348 = (uint)puVar3;
                (*(code *)PTR__objc_release_02578630)(uVar5);
              }
              if ((local_348 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_addObject__0269d180,local_1b8)
                ;
              }
              local_308 = local_308 + 1;
            } while (local_308 < local_300);
            local_300 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,
                       auStack_128,0x10);
            local_308 = (undefined *)0x0;
          } while (local_300 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar1 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_count_0269cfe0);
        if ((puVar1 == (undefined *)0x0) &&
           (puVar3 = local_138,
           (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_count_0269cfe0), puVar1 = local_138
           , puVar3 != (undefined *)0x0)) {
          (*(code *)PTR__objc_retain_02578638)();
          local_130 = puVar1;
        }
        else {
          puVar1 = local_1b0;
          (*(code *)PTR__objc_retain_02578638)();
          local_130 = puVar1;
        }
        local_150 = 1;
        _objc_storeStrong(&local_1b0,0);
      }
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

