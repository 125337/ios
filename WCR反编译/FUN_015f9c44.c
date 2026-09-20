// FUN_015f9c44 @ 015f9c44

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_015f9c44(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong local_1e0;
  ulong local_1d8;
  ulong local_158;
  int local_14c;
  ulong local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  ulong local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8 [4];
  ulong local_c8;
  ulong local_c0;
  undefined4 local_b4;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  lVar5 = DAT_028e3c18;
  if (DAT_028e3c18 < 1) {
    DAT_028e3c18 = DAT_028e3c18 + 1;
    _objc_storeStrong(lVar5,&DAT_028e3c00);
    _objc_storeStrong(&DAT_028e3c08,0);
    _objc_storeStrong(&DAT_028e3c10,0);
    if (local_b0 == 0) {
      local_b4 = 1;
    }
    else {
      local_c0 = 0;
      uVar1 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_valueForKey__0269d128,&cf_m_arrSession);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_c8 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar1 & 1) != 0) {
        uVar6 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_copy_0269d150);
        uVar1 = local_c0;
        local_c0 = uVar6;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      _objc_storeStrong(&local_c8,0);
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      if (local_c0 == 0) {
        local_b4 = 1;
      }
      else {
        uVar1 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_dictionaryWithCapacity__026a1ad0,uVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
        local_e8[0] = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
        local_f0 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
        _objc_retainAutoreleasedReturnValue();
        local_f8 = puVar2;
        _memset(auStack_140,0,0x40);
        uVar1 = local_c0;
        (*(code *)PTR__objc_retain_02578638)();
        local_1d8 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10
                  );
        if (local_1d8 != 0) {
          lVar5 = *local_130;
          local_1e0 = 0;
          do {
            do {
              if (*local_130 - lVar5 != 0) {
                _objc_enumerationMutation(*local_130 - lVar5,uVar1);
              }
              uVar6 = *(ulong *)(local_138 + local_1e0 * 8);
              local_100 = uVar6;
              FUN_01605314();
              _objc_retainAutoreleasedReturnValue();
              local_148 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_length_0269cca0);
              if (uVar6 == 0) {
                local_b4 = 5;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e8[0],PTR_s_setObject_forKeyedSubscript__0269d248,local_100,
                           local_148);
                uVar6 = local_100;
                pcVar4 = &cf_isHidden;
                _NSSelectorFromString();
                FUN_016054b4(uVar6,pcVar4);
                if ((uVar6 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_f0,PTR_s_addObject__0269d180,local_148);
                }
                local_14c = 0;
                uVar6 = local_100;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_100,PTR_s_valueForKey__0269d128,&cf_m_uUnReadCount);
                _objc_retainAutoreleasedReturnValue();
                local_158 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar6,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedIntValue_0269db10)
                ;
                if ((uVar6 & 1) != 0) {
                  uVar6 = local_158;
                  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_unsignedIntValue_0269db10);
                  local_14c = (int)uVar6;
                }
                _objc_storeStrong(&local_158,0);
                if (local_14c != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_f8,PTR_s_addObject__0269d180,local_148);
                }
                local_b4 = 0;
              }
              _objc_storeStrong(&local_148,0);
              local_1e0 = local_1e0 + 1;
            } while (local_1e0 < local_1d8);
            local_1d8 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                       0x10);
            local_1e0 = 0;
          } while (local_1d8 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar1);
        puVar3 = local_e8[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_e8[0],PTR_s_copy_0269d150);
        puVar2 = DAT_028e3c00;
        DAT_028e3c00 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar3 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_copy_0269d150);
        puVar2 = DAT_028e3c08;
        DAT_028e3c08 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar3 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_copy_0269d150);
        puVar2 = DAT_028e3c10;
        DAT_028e3c10 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_b4 = 0;
        _objc_storeStrong(&local_f8);
        _objc_storeStrong(&local_f0,0);
        _objc_storeStrong(local_e8,0);
      }
      _objc_storeStrong(&local_c0,0);
    }
  }
  else {
    local_b4 = 1;
    DAT_028e3c18 = DAT_028e3c18 + 1;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

