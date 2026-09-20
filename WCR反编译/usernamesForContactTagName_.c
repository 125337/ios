// usernamesForContactTagName: @ 014b9fe4

/* Function Stack Size: 0x18 bytes */

ID WCRefineScheduledTask::usernamesForContactTagName_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_310;
  cfstringStruct *local_218;
  cfstringStruct *local_210;
  undefined *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  code *local_1b0;
  undefined *local_1a8;
  long local_1a0;
  cfstringStruct *local_198;
  undefined *local_190 [2];
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168 [2];
  ulong local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  ulong local_110;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  undefined *local_e8;
  cfstringStruct *local_e0;
  undefined4 local_d4;
  long local_d0;
  long local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  lVar7 = local_c8;
  FUN_014b5580();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = lVar7;
  (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_length_0269cca0);
  if (lVar7 == 0) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_d4 = 1;
    local_b0 = puVar1;
  }
  else {
    pcVar2 = "ContactTagMgr";
    _objc_getClass();
    FUN_014b9e80();
    _objc_retainAutoreleasedReturnValue();
    local_e0 = (cfstringStruct *)pcVar2;
    if ((cfstringStruct *)pcVar2 == (cfstringStruct *)0x0) {
      puVar1 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_d4 = 1;
      local_b0 = puVar1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = &cf_getContactsForTagName_;
      local_e8 = puVar1;
      _NSSelectorFromString();
      pcVar4 = local_e0;
      local_f0 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_respondsToSelector__026ca818,pcVar3);
      if (((ulong)pcVar4 & 1) != 0) {
        pcVar3 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,local_f0,local_d0);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_f8 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
        if (((ulong)pcVar3 & 1) != 0) {
          _memset(auStack_150,0,0x40);
          pcVar3 = local_f8;
          (*(code *)PTR__objc_retain_02578638)();
          local_210 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,
                     0x10);
          if (local_210 != (cfstringStruct *)0x0) {
            lVar7 = *local_140;
            local_218 = (cfstringStruct *)0x0;
            do {
              do {
                if (*local_140 - lVar7 != 0) {
                  _objc_enumerationMutation(*local_140 - lVar7,pcVar3);
                }
                uVar8 = *(ulong *)(local_148 + (long)local_218 * 8);
                local_110 = uVar8;
                FUN_014b87d8(uVar8,&cf_m_nsUsrName);
                _objc_retainAutoreleasedReturnValue();
                local_158 = uVar8;
                (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_length_0269cca0);
                uVar5 = local_110;
                if (uVar8 == 0) {
                  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
                  if ((uVar5 & 1) != 0) {
                    uVar8 = local_110;
                    FUN_014b5580();
                    _objc_retainAutoreleasedReturnValue();
                    uVar5 = local_158;
                    local_158 = uVar8;
                    (*(code *)PTR__objc_release_02578630)(uVar5);
                  }
                }
                uVar5 = local_158;
                (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
                if (uVar5 != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_e8,PTR_s_addObject__0269d180,local_158);
                }
                _objc_storeStrong(&local_158,0);
                local_218 = (cfstringStruct *)((long)&local_218->field0_0x0 + 1);
              } while (local_218 < local_210);
              local_210 = pcVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,
                         auStack_a8,0x10);
              local_218 = (cfstringStruct *)0x0;
            } while (local_210 != (cfstringStruct *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar3);
        }
        _objc_storeStrong(&local_f8,0);
      }
      puVar1 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0);
      if ((puVar1 == (undefined *)0x0) &&
         (pcVar3 = local_e0,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_e0,PTR_s_respondsToSelector__026ca818,
                    PTR_s_getDicWithUserNameForAllTag_026a5b10), ((ulong)pcVar3 & 1) != 0)) {
        pcVar3 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_getDicWithUserNameForAllTag_026a5b10);
        _objc_retainAutoreleasedReturnValue();
        local_168[0] = pcVar3;
        (*(code *)PTR__objc_retain_02578638)();
        local_170 = &::cf___;
        pcVar3 = &cf_LabelNameToId_;
        _NSSelectorFromString();
        pcVar4 = local_e0;
        local_178 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_respondsToSelector__026ca818,pcVar3);
        if (((ulong)pcVar4 & 1) != 0) {
          pcVar4 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,local_178,local_d0);
          _objc_retainAutoreleasedReturnValue();
          local_180 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_description_026ca5f8);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = pcVar4;
          FUN_014b5580();
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = local_170;
          local_170 = pcVar6;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          _objc_storeStrong(&local_180,0);
        }
        pcVar3 = local_168[0];
        puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
        lVar7 = local_d0;
        pcVar4 = local_168[0];
        if (((ulong)pcVar3 & 1) != 0) {
          local_1c0 = PTR___NSConcreteGlobalBlock_02578658;
          local_1b8 = 0xd0800000;
          local_1b4 = 0;
          local_1b0 = FUN_014ba8ec;
          local_1a8 = &DAT_02585f00;
          (*(code *)PTR__objc_retain_02578638)();
          pcVar3 = local_170;
          local_1a0 = lVar7;
          (*(code *)PTR__objc_retain_02578638)();
          puVar1 = local_e8;
          local_198 = pcVar3;
          (*(code *)PTR__objc_retain_02578638)();
          local_190[0] = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_1c0);
          _objc_storeStrong(local_190);
          _objc_storeStrong(&local_198,0);
          _objc_storeStrong(&local_1a0,0);
        }
        _objc_storeStrong(&local_170);
        _objc_storeStrong(local_168,0);
      }
      puVar1 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_310 = puVar1;
      if (puVar1 == (undefined *)0x0) {
        local_310 = *(undefined **)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = local_310;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_d4 = 1;
      _objc_storeStrong(&local_e8,0);
    }
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

