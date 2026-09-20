// resolvedDisplayNameForUsername: @ 0111ac64

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRefinePrivateFriendManager::resolvedDisplayNameForUsername_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  undefined *local_1a0;
  undefined *local_198;
  ID local_170;
  ID local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  undefined8 local_110;
  byte local_101;
  ID local_100;
  ID local_f8;
  ID local_f0;
  ID local_e8;
  SEL local_e0;
  ID local_d8;
  ID local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e8 = 0;
  local_e0 = param_2;
  local_d8 = param_1;
  _objc_storeStrong(&local_e8,param_3);
  IVar2 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_contactManager_026ab1d8);
  _objc_retainAutoreleasedReturnValue();
  local_101 = 0;
  local_f0 = IVar2;
  if ((IVar2 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
     (IVar2 & 1) == 0)) {
    local_170 = 0;
  }
  else {
    local_170 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_getContactByName__0269d178,local_e8);
    _objc_retainAutoreleasedReturnValue();
    local_101 = 1;
    local_100 = local_170;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_f8 = local_170;
  if ((local_101 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_100);
  }
  _memset(auStack_150,0,0x40);
  local_c8 = &cf_m_nsRemark;
  local_c0 = &cf_m_nsNickName;
  local_b8 = &cf_m_nsAliasName;
  local_b0 = &cf_m_nsUsrName;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8,4);
  _objc_retainAutoreleasedReturnValue();
  local_198 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_198 != (undefined *)0x0) {
    lVar5 = *local_140;
    local_1a0 = (undefined *)0x0;
    do {
      do {
        if (*local_140 - lVar5 != 0) {
          _objc_enumerationMutation(*local_140 - lVar5,puVar3);
        }
        local_110 = *(undefined8 *)(local_148 + (long)local_1a0 * 8);
        IVar2 = local_f8;
        FUN_0111b06c(local_f8,local_110);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = IVar2;
        FUN_0110d24c();
        _objc_retainAutoreleasedReturnValue();
        local_158 = IVar4;
        (*(code *)PTR__objc_release_02578630)(IVar2);
        IVar4 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
        IVar2 = local_158;
        if (IVar4 != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_d0 = IVar2;
        }
        _objc_storeStrong(&local_158,0);
        bVar1 = true;
        if (IVar4 != 0) goto LAB_0111afb8;
        local_1a0 = local_1a0 + 1;
      } while (local_1a0 < local_198);
      local_198 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10)
      ;
      local_1a0 = (undefined *)0x0;
    } while (local_198 != (undefined *)0x0);
  }
  bVar1 = false;
LAB_0111afb8:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar2 = local_e8;
  if (!bVar1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = IVar2;
  }
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_e8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_d0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

