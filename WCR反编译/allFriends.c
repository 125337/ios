// allFriends @ 00fa0434

/* Function Stack Size: 0x10 bytes */

ID WCRefineHelper::allFriends(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  ID IVar8;
  ulong uVar9;
  uint local_18c;
  char *local_170;
  char *local_168;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  char *local_d0;
  char *local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(puVar2 + 0x18);
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (lVar3 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = "MMServiceCenter";
    local_c0 = puVar2;
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = "CContactMgr";
    _objc_getClass("CContactMgr");
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar6 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_getService__0269d170,pcVar5);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar4 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_getContactList_contactType__026a2fc8,1);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = pcVar4;
    _memset(auStack_118,0,0x40);
    pcVar4 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_168 != (char *)0x0) {
      lVar3 = *local_108;
      local_170 = (char *)0x0;
      do {
        do {
          if (*local_108 - lVar3 != 0) {
            _objc_enumerationMutation(*local_108 - lVar3,pcVar4);
          }
          uVar9 = *(ulong *)(local_110 + (long)local_170 * 8);
          local_d8 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isBrandContact_0269d9c8);
          bVar1 = false;
          local_18c = 0;
          if ((uVar9 & 1) == 0) {
            uVar9 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_m_uiSex_026acdc8);
            local_18c = 0;
            if ((int)uVar9 != 0) {
              local_120 = local_d8;
              (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_m_nsUsrName_0269d638);
              _objc_retainAutoreleasedReturnValue();
              bVar1 = true;
              uVar9 = local_120;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_18c = (uint)uVar9 ^ 1;
            }
          }
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_120);
          }
          if ((local_18c & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addObject__0269d180,local_d8);
          }
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                   0x10);
        local_170 = (char *)0x0;
      } while (local_168 != (char *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    puVar2 = local_c0;
    puVar7 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(puVar7 + 0x18,puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    _objc_storeStrong(&local_d0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_c0,0);
  }
  puVar2 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar8 = *(ID *)(puVar2 + 0x18);
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return IVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

