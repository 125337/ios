// wcrContactsFriendAddTimeAllContacts: @ 01a68c08

/* Function Stack Size: 0x18 bytes */

ID WCRefineGeneralFunctionViewController::wcrContactsFriendAddTimeAllContacts_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ID IVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong local_458;
  ulong local_450;
  undefined *local_3f0;
  undefined *local_3e8;
  undefined *local_3b0;
  undefined *local_3a8;
  ID local_308;
  undefined1 auStack_300 [8];
  long local_2f8;
  long *local_2f0;
  long local_2c0;
  ulong local_2b8;
  undefined1 auStack_2b0 [8];
  long local_2a8;
  long *local_2a0;
  undefined8 local_270;
  undefined1 auStack_268 [8];
  long local_260;
  long *local_258;
  ulong local_228;
  undefined *local_220;
  undefined *local_218;
  undefined *local_210;
  undefined *local_208;
  undefined *local_200;
  undefined4 local_1f4;
  ulong local_1f0;
  SEL local_1e8;
  ID local_1e0;
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
  local_1f0 = 0;
  local_1e8 = param_2;
  local_1e0 = param_1;
  _objc_storeStrong(&local_1f0,param_3);
  if (local_1f0 == 0) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_1f4 = 1;
    local_1d8 = puVar1;
  }
  else {
    local_200 = PTR_s_getContactList_contactType__026a2fc8;
    uVar2 = local_1f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1f0,PTR_s_respondsToSelector__026ca818,
               PTR_s_getContactList_contactType__026a2fc8);
    if ((uVar2 & 1) == 0) {
      puVar1 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_1f4 = 1;
      local_1d8 = puVar1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      local_208 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_210 = puVar3;
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
      local_218 = puVar4;
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
      local_220 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _memset(auStack_268,0,0x40);
      puVar1 = local_218;
      (*(code *)PTR__objc_retain_02578638)();
      local_3a8 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,auStack_d0,0x10)
      ;
      if (local_3a8 != (undefined *)0x0) {
        lVar9 = *local_258;
        local_3b0 = (undefined *)0x0;
        do {
          do {
            if (*local_258 - lVar9 != 0) {
              _objc_enumerationMutation(*local_258 - lVar9,puVar1);
            }
            local_228 = *(ulong *)(local_260 + (long)local_3b0 * 8);
            _memset(auStack_2b0,0,0x40);
            puVar3 = local_220;
            (*(code *)PTR__objc_retain_02578638)();
            local_3e8 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,
                       auStack_150,0x10);
            if (local_3e8 != (undefined *)0x0) {
              lVar10 = *local_2a0;
              local_3f0 = (undefined *)0x0;
              do {
                do {
                  if (*local_2a0 - lVar10 != 0) {
                    _objc_enumerationMutation(*local_2a0 - lVar10,puVar3);
                  }
                  uVar2 = local_1f0;
                  puVar4 = local_200;
                  local_270 = *(undefined8 *)(local_2a8 + (long)local_3f0 * 8);
                  uVar6 = local_228;
                  (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_unsignedIntValue_0269db10);
                  uVar7 = local_270;
                  (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_unsignedIntValue_0269db10);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar2,puVar4,uVar6 & 0xffffffff,uVar7);
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                  local_2b8 = uVar2;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
                  if ((uVar2 & 1) == 0) {
                    local_1f4 = 5;
                  }
                  else {
                    _memset(auStack_300,0,0x40);
                    uVar2 = local_2b8;
                    (*(code *)PTR__objc_retain_02578638)();
                    local_450 = uVar2;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_300,
                               auStack_1d0,0x10);
                    if (local_450 != 0) {
                      lVar11 = *local_2f0;
                      local_458 = 0;
                      do {
                        do {
                          if (*local_2f0 - lVar11 != 0) {
                            _objc_enumerationMutation(*local_2f0 - lVar11,uVar2);
                          }
                          local_2c0 = *(long *)(local_2f8 + local_458 * 8);
                          if (local_2c0 != 0) {
                            IVar8 = local_1e0;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_1e0,PTR_s_wcrContactsFriendAddTimeUserName_026bd230,
                                       local_2c0);
                            _objc_retainAutoreleasedReturnValue();
                            local_308 = IVar8;
                            (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_length_0269cca0);
                            if (IVar8 == 0) {
LAB_01a692a8:
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_208,PTR_s_addObject__0269d180,local_2c0);
                              local_1f4 = 0;
                            }
                            else {
                              puVar4 = local_210;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_210,PTR_s_containsObject__0269cbb8,local_308);
                              if (((ulong)puVar4 & 1) == 0) {
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_210,PTR_s_addObject__0269d180,local_308);
                                goto LAB_01a692a8;
                              }
                              local_1f4 = 7;
                            }
                            _objc_storeStrong(&local_308,0);
                          }
                          local_458 = local_458 + 1;
                        } while (local_458 < local_450);
                        local_450 = uVar2;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_300
                                   ,auStack_1d0,0x10);
                        local_458 = 0;
                      } while (local_450 != 0);
                    }
                    (*(code *)PTR__objc_release_02578630)(uVar2);
                    local_1f4 = 0;
                  }
                  _objc_storeStrong(&local_2b8,0);
                  local_3f0 = local_3f0 + 1;
                } while (local_3f0 < local_3e8);
                local_3e8 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,
                           auStack_150,0x10);
                local_3f0 = (undefined *)0x0;
              } while (local_3e8 != (undefined *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar3);
            local_3b0 = local_3b0 + 1;
          } while (local_3b0 < local_3a8);
          local_3a8 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,auStack_d0,
                     0x10);
          local_3b0 = (undefined *)0x0;
        } while (local_3a8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_208;
      (*(code *)PTR__objc_retain_02578638)();
      local_1d8 = puVar1;
      local_1f4 = 1;
      _objc_storeStrong(&local_220);
      _objc_storeStrong(&local_218,0);
      _objc_storeStrong(&local_210,0);
      _objc_storeStrong(&local_208,0);
    }
  }
  _objc_storeStrong(&local_1f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_1d8;
}

