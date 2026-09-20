// FUN_00693578 @ 00693578

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00693578(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint local_1cc;
  undefined *local_198;
  undefined *local_190;
  ulong local_138;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  lVar6 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
  if (lVar6 == 0) {
    local_c0 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSURLComponents_026ce130;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURLComponents_026ce130,PTR_s_componentsWithString__0269d818,
               local_b0);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_b0);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = puVar3;
      if (puVar3 != (undefined *)0x0) {
        puVar4 = PTR__OBJC_CLASS___NSURLComponents_026ce130;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURLComponents_026ce130,
                   PTR_s_componentsWithURL_resolvingAgain_026a64e8,puVar3,0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_c8;
        local_c8 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      _objc_storeStrong(&local_d0,0);
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar3;
    _memset(auStack_120,0,0x40);
    puVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_queryItems_0269d820);
    _objc_retainAutoreleasedReturnValue();
    local_190 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_190 != (undefined *)0x0) {
      lVar6 = *local_110;
      local_198 = (undefined *)0x0;
      do {
        do {
          if (*local_110 - lVar6 != 0) {
            _objc_enumerationMutation(*local_110 - lVar6,puVar3);
          }
          uVar7 = *(ulong *)(local_118 + (long)local_198 * 8);
          bVar2 = false;
          bVar1 = false;
          local_e0 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_name_0269d828);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_1cc = 1;
          if ((uVar5 & 1) == 0) {
            local_128 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_name_0269d828);
            _objc_retainAutoreleasedReturnValue();
            bVar2 = true;
            uVar5 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_1cc = 1;
            if ((uVar5 & 1) == 0) {
              local_138 = local_e0;
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_name_0269d828);
              _objc_retainAutoreleasedReturnValue();
              bVar1 = true;
              uVar5 = local_138;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_1cc = (uint)uVar5;
            }
          }
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_138);
          }
          if (bVar2) {
            (*(code *)PTR__objc_release_02578630)(local_128);
          }
          (*(code *)PTR__objc_release_02578630)(uVar7);
          if ((local_1cc & 1) != 0) {
            uVar5 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_value_0269d830);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar5);
            if (uVar7 != 0) {
              uVar5 = local_e0;
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_value_0269d830);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = local_d8;
              uVar7 = local_e0;
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_name_0269d828);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar4,PTR_s_setObject_forKeyedSubscript__0269d248,uVar5);
              (*(code *)PTR__objc_release_02578630)(uVar7);
              (*(code *)PTR__objc_release_02578630)(uVar5);
            }
          }
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                   0x10);
        local_198 = (undefined *)0x0;
      } while (local_190 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    FUN_0068d2e0(local_d8);
    _objc_storeStrong(&local_d8);
    _objc_storeStrong(&local_c8,0);
    local_c0 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

