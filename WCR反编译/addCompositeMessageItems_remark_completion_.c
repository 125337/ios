// addCompositeMessageItems:remark:completion: @ 010a9100

/* Function Stack Size: 0x28 bytes */

void WCRefineMessageRepositoryStore::addCompositeMessageItems_remark_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ulong local_1f8;
  ulong local_1f0;
  undefined *local_1c0;
  long local_1b8;
  undefined4 local_1ac;
  long local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  ulong local_160;
  undefined *local_158;
  long local_150;
  long local_148;
  ulong local_140;
  SEL local_138;
  ID local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  undefined *local_e8;
  cfstringStruct *local_e0;
  long local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  local_138 = param_2;
  local_130 = param_1;
  _objc_storeStrong(&local_140,param_3);
  local_148 = 0;
  _objc_storeStrong(&local_148,param_4);
  local_150 = 0;
  _objc_storeStrong(&local_150,param_5);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_158 = puVar2;
  _memset(auStack_1a0,0,0x40);
  uVar1 = local_140;
  (*(code *)PTR__objc_retain_02578638)();
  local_1f0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
  if (local_1f0 != 0) {
    lVar8 = *local_190;
    local_1f8 = 0;
    do {
      do {
        if (*local_190 - lVar8 != 0) {
          _objc_enumerationMutation(*local_190 - lVar8,uVar1);
        }
        uVar9 = *(ulong *)(local_198 + local_1f8 * 8);
        puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_160 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar2);
        puVar2 = local_158;
        if ((uVar9 & 1) != 0) {
          uVar9 = local_160;
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_copy_0269d150);
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(uVar9);
        }
        local_1f8 = local_1f8 + 1;
      } while (local_1f8 < local_1f0);
      local_1f0 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
      local_1f8 = 0;
    } while (local_1f0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  lVar8 = local_148;
  FUN_010a6348();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_158;
  local_1a8 = lVar8;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_count_0269cfe0);
  if ((puVar2 == (undefined *)0x0) ||
     (lVar8 = local_1a8, (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_length_0269cca0),
     lVar8 == 0)) {
    if (local_150 != 0) {
      (**(code **)(local_150 + 0x10))(local_150,0,0,0);
    }
    local_1ac = 1;
  }
  else {
    FUN_010a831c();
    local_128 = &cf_id;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_1b8 = lVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____lld);
    _objc_retainAutoreleasedReturnValue();
    local_120 = &cf_type;
    local_e0 = &cf_composite;
    local_118 = &cf_remark;
    local_d8 = local_1a8;
    local_110 = &cf_valid;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_e8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    local_108 = &cf_sessionUserName;
    local_c8 = &cf_filehelper;
    local_100 = &cf_addedAt;
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_d0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithLongLong__0269d808,local_1b8);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = &cf_messages;
    puVar6 = local_158;
    local_c0 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_copy_0269d150);
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_f0 = &cf_content;
    local_b8 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_b0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_e8,&local_128,8);
    _objc_retainAutoreleasedReturnValue();
    local_1c0 = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_addItem_completion__026ae5b0,local_1c0,local_150);
    _objc_storeStrong(&local_1c0,0);
    local_1ac = 0;
  }
  _objc_storeStrong(&local_1a8);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

