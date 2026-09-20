// FUN_01589968 @ 01589968

void FUN_01589968(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong local_448;
  ulong local_440;
  undefined *local_3e0;
  undefined *local_3d8;
  undefined *local_3a0;
  undefined *local_398;
  ulong local_2f8;
  undefined1 auStack_2f0 [8];
  long local_2e8;
  long *local_2e0;
  ulong local_2b0;
  ulong local_2a8;
  undefined1 auStack_2a0 [8];
  long local_298;
  long *local_290;
  undefined8 local_260;
  undefined1 auStack_258 [8];
  long local_250;
  long *local_248;
  ulong local_218;
  undefined *local_210;
  undefined *local_208;
  undefined *local_200;
  undefined *local_1f8;
  undefined *local_1f0;
  undefined4 local_1e4;
  ulong local_1e0;
  undefined *local_1d8;
  undefined1 auStack_1d0 [128];
  undefined1 auStack_150 [128];
  undefined1 auStack_d0 [128];
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1e0 = 0;
  _objc_storeStrong(&local_1e0,param_1);
  if (local_1e0 == 0) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_1e4 = 1;
    local_1d8 = puVar1;
  }
  else {
    local_1f0 = PTR_s_getContactList_contactType__026a2fc8;
    uVar2 = local_1e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1e0,PTR_s_respondsToSelector__026ca818,
               PTR_s_getContactList_contactType__026a2fc8);
    if ((uVar2 & 1) == 0) {
      puVar1 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_1e4 = 1;
      local_1d8 = puVar1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      local_1f8 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_200 = puVar3;
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
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      local_208 = puVar4;
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
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      local_210 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _memset(auStack_258,0,0x40);
      puVar1 = local_208;
      (*(code *)PTR__objc_retain_02578638)();
      local_398 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_d0,0x10)
      ;
      if (local_398 != (undefined *)0x0) {
        lVar7 = *local_248;
        local_3a0 = (undefined *)0x0;
        do {
          do {
            if (*local_248 - lVar7 != 0) {
              _objc_enumerationMutation(*local_248 - lVar7,puVar1);
            }
            local_218 = *(ulong *)(local_250 + (long)local_3a0 * 8);
            _memset(auStack_2a0,0,0x40);
            puVar3 = local_210;
            (*(code *)PTR__objc_retain_02578638)();
            local_3d8 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a0,
                       auStack_150,0x10);
            if (local_3d8 != (undefined *)0x0) {
              lVar8 = *local_290;
              local_3e0 = (undefined *)0x0;
              do {
                do {
                  if (*local_290 - lVar8 != 0) {
                    _objc_enumerationMutation(*local_290 - lVar8,puVar3);
                  }
                  uVar2 = local_1e0;
                  puVar4 = local_1f0;
                  local_260 = *(undefined8 *)(local_298 + (long)local_3e0 * 8);
                  uVar10 = local_218;
                  (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_unsignedIntValue_0269db10);
                  uVar6 = local_260;
                  (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_unsignedIntValue_0269db10);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar2,puVar4,uVar10 & 0xffffffff,uVar6);
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                  local_2a8 = uVar2;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
                  if ((uVar2 & 1) == 0) {
                    local_1e4 = 5;
                  }
                  else {
                    _memset(auStack_2f0,0,0x40);
                    uVar2 = local_2a8;
                    (*(code *)PTR__objc_retain_02578638)();
                    local_440 = uVar2;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f0,
                               auStack_1d0,0x10);
                    if (local_440 != 0) {
                      lVar9 = *local_2e0;
                      local_448 = 0;
                      do {
                        do {
                          if (*local_2e0 - lVar9 != 0) {
                            _objc_enumerationMutation(*local_2e0 - lVar9,uVar2);
                          }
                          uVar10 = *(ulong *)(local_2e8 + local_448 * 8);
                          local_2b0 = uVar10;
                          FUN_01528d34();
                          _objc_retainAutoreleasedReturnValue();
                          local_2f8 = uVar10;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (uVar10,PTR_s_hasSuffix__0269d018,&cf__chatroom);
                          if (((uVar10 & 1) == 0) ||
                             (puVar4 = local_200,
                             (*(code *)PTR__objc_msgSend_02578628)
                                       (local_200,PTR_s_containsObject__0269cbb8,local_2f8),
                             ((ulong)puVar4 & 1) != 0)) {
                            local_1e4 = 7;
                          }
                          else {
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_200,PTR_s_addObject__0269d180,local_2f8);
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_1f8,PTR_s_addObject__0269d180,local_2b0);
                            local_1e4 = 0;
                          }
                          _objc_storeStrong(&local_2f8,0);
                          local_448 = local_448 + 1;
                        } while (local_448 < local_440);
                        local_440 = uVar2;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f0
                                   ,auStack_1d0,0x10);
                        local_448 = 0;
                      } while (local_440 != 0);
                    }
                    (*(code *)PTR__objc_release_02578630)(uVar2);
                    local_1e4 = 0;
                  }
                  _objc_storeStrong(&local_2a8,0);
                  local_3e0 = local_3e0 + 1;
                } while (local_3e0 < local_3d8);
                local_3d8 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a0,
                           auStack_150,0x10);
                local_3e0 = (undefined *)0x0;
              } while (local_3d8 != (undefined *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar3);
            local_3a0 = local_3a0 + 1;
          } while (local_3a0 < local_398);
          local_398 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_d0,
                     0x10);
          local_3a0 = (undefined *)0x0;
        } while (local_398 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_1f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_copy_0269d150);
      local_1e4 = 1;
      local_1d8 = puVar1;
      _objc_storeStrong(&local_210);
      _objc_storeStrong(&local_208,0);
      _objc_storeStrong(&local_200,0);
      _objc_storeStrong(&local_1f8,0);
    }
  }
  _objc_storeStrong(&local_1e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_1d8);
  return;
}

