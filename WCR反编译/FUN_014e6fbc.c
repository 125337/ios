// FUN_014e6fbc @ 014e6fbc

void FUN_014e6fbc(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined *local_318;
  undefined *local_310;
  undefined *local_2d8;
  undefined *local_2d0;
  ulong local_220;
  undefined1 auStack_218 [8];
  long local_210;
  long *local_208;
  ulong local_1d8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  ulong local_190;
  undefined *local_188;
  undefined *local_180;
  undefined4 local_174;
  undefined *local_170;
  undefined *local_168;
  ulong local_160;
  undefined *local_158;
  undefined1 auStack_150 [128];
  undefined1 auStack_d0 [128];
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_160 = 0;
  _objc_storeStrong(&local_160,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_170 = PTR_s_getContactList_contactType__026a2fc8;
  local_168 = puVar1;
  if ((local_160 == 0) ||
     (uVar2 = local_160,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_160,PTR_s_respondsToSelector__026ca818,
                PTR_s_getContactList_contactType__026a2fc8), (uVar2 & 1) == 0)) {
    puVar1 = local_168;
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = puVar1;
    local_174 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2
              );
    _objc_retainAutoreleasedReturnValue();
    local_180 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_50 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_40 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_188 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _memset(auStack_1d0,0,0x40);
    puVar1 = local_180;
    (*(code *)PTR__objc_retain_02578638)();
    local_2d0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_d0,0x10);
    if (local_2d0 != (undefined *)0x0) {
      lVar8 = *local_1c0;
      local_2d8 = (undefined *)0x0;
      do {
        do {
          if (*local_1c0 - lVar8 != 0) {
            _objc_enumerationMutation(*local_1c0 - lVar8,puVar1);
          }
          local_190 = *(ulong *)(local_1c8 + (long)local_2d8 * 8);
          _memset(auStack_218,0,0x40);
          puVar3 = local_188;
          (*(code *)PTR__objc_retain_02578638)();
          local_310 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_150,
                     0x10);
          if (local_310 != (undefined *)0x0) {
            lVar9 = *local_208;
            local_318 = (undefined *)0x0;
            do {
              do {
                if (*local_208 - lVar9 != 0) {
                  _objc_enumerationMutation(*local_208 - lVar9,puVar3);
                }
                uVar2 = local_160;
                puVar4 = local_170;
                local_1d8 = *(ulong *)(local_210 + (long)local_318 * 8);
                uVar6 = local_190;
                (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_unsignedIntValue_0269db10);
                uVar7 = local_1d8;
                (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_unsignedIntValue_0269db10);
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar2,puVar4,uVar6 & 0xffffffff,uVar7 & 0xffffffff);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                local_220 = uVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
                if ((uVar2 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_168,PTR_s_addObjectsFromArray__0269d540,local_220);
                }
                _objc_storeStrong(&local_220,0);
                local_318 = local_318 + 1;
              } while (local_318 < local_310);
              local_310 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,
                         auStack_150,0x10);
              local_318 = (undefined *)0x0;
            } while (local_310 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar3);
          local_2d8 = local_2d8 + 1;
        } while (local_2d8 < local_2d0);
        local_2d0 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_d0,
                   0x10);
        local_2d8 = (undefined *)0x0;
      } while (local_2d0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_168;
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = puVar1;
    local_174 = 1;
    _objc_storeStrong(&local_188);
    _objc_storeStrong(&local_180,0);
  }
  _objc_storeStrong(&local_168);
  _objc_storeStrong(&local_160,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_158);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

