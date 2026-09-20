// setAvatarFrameSpecialUserList: @ 020bd358

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setAvatarFrameSpecialUserList_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong local_198;
  ulong local_190;
  undefined *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  code *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  ID local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_d8;
  ulong local_d0;
  ID local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_c0;
  local_c8 = IVar2;
  FUN_01fd1d24(local_c0,500);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_d0 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_arrayWithCapacity__0269d9b8,uVar3);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar4;
  _memset(auStack_120,0,0x40);
  uVar3 = local_d0;
  (*(code *)PTR__objc_retain_02578638)();
  local_190 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_190 != 0) {
    lVar6 = *local_110;
    local_198 = 0;
    do {
      do {
        if (*local_110 - lVar6 != 0) {
          _objc_enumerationMutation(*local_110 - lVar6,uVar3);
        }
        uVar7 = *(ulong *)(local_118 + local_198 * 8);
        local_e0 = uVar7;
        FUN_020bd94c();
        if ((uVar7 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_e0);
        }
        local_198 = local_198 + 1;
      } while (local_198 < local_190);
      local_190 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_198 = 0;
    } while (local_190 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar4 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
  IVar2 = local_c8;
  if (puVar4 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_removeObjectForKey__0269d700,&cf_avatarFrameSpecialUserList);
  }
  else {
    puVar4 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_setObject_forKey__026ca9e8,puVar4,&cf_avatarFrameSpecialUserList);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  IVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c8,PTR_s_objectForKey__0269e048,&cf_avatarFrameSpecialUserConfigs);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_128 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  if (((IVar2 & 1) != 0) &&
     (IVar2 = local_128, (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_count_0269cfe0),
     IVar2 != 0)) {
    puVar4 = PTR__OBJC_CLASS___NSSet_026ce150;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_setWithArray__0269d9a0,local_d8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_130 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_128;
    puVar1 = local_130;
    local_168 = PTR___NSConcreteGlobalBlock_02578658;
    local_160 = 0xd0800000;
    local_15c = 0;
    local_158 = FUN_020bda3c;
    local_150 = &DAT_02581060;
    local_138 = puVar5;
    (*(code *)PTR__objc_retain_02578638)();
    puVar4 = local_138;
    local_148 = puVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_140 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_168);
    puVar4 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_count_0269cfe0);
    IVar2 = local_c8;
    if (puVar4 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_removeObjectForKey__0269d700,&cf_avatarFrameSpecialUserConfigs);
    }
    else {
      puVar4 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_setObject_forKey__026ca9e8,puVar4,&cf_avatarFrameSpecialUserConfigs);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    _objc_storeStrong(&local_140);
    _objc_storeStrong(&local_148,0);
    _objc_storeStrong(&local_138,0);
    _objc_storeStrong(&local_130,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_128);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

