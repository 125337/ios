// nextAutoGroupName @ 0108938c

/* Function Stack Size: 0x10 bytes */

ID WCRefineLocalEmoticonStore::nextAutoGroupName(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  long lVar7;
  ulong local_150;
  ulong local_148;
  cfstringStruct *local_120;
  long local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  long local_d0;
  undefined *local_c8;
  SEL local_c0;
  ID local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_c0 = param_2;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  _memset(auStack_110,0,0x40);
  IVar3 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_listPacksSortMode__026ac360,0);
  _objc_retainAutoreleasedReturnValue();
  local_148 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_148 != 0) {
    lVar6 = *local_100;
    local_150 = 0;
    do {
      do {
        if (*local_100 - lVar6 != 0) {
          _objc_enumerationMutation(*local_100 - lVar6,IVar3);
        }
        lVar7 = *(long *)(local_108 + local_150 * 8);
        local_d0 = lVar7;
        (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_displayName_026ac378);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar7);
        puVar2 = local_c8;
        if (lVar4 != 0) {
          lVar4 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_displayName_026ac378);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(lVar4);
        }
        lVar4 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_relativePath_026ac370);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar4);
        puVar2 = local_c8;
        if (lVar7 != 0) {
          lVar4 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_relativePath_026ac370);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(lVar4);
        }
        local_150 = local_150 + 1;
      } while (local_150 < local_148);
      local_148 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_150 = 0;
    } while (local_148 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  for (local_118 = 1; local_118 < 999; local_118 = local_118 + 1) {
    pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_R__);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_c8;
    local_120 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_containsObject__0269cbb8,pcVar5);
    pcVar5 = local_120;
    bVar1 = ((ulong)puVar2 & 1) == 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = pcVar5;
    }
    _objc_storeStrong(&local_120,0);
    if (bVar1) goto LAB_01089790;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_b0 = &cf_R_;
LAB_01089790:
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

