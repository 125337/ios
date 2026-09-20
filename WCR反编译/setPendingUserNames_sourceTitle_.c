// setPendingUserNames:sourceTitle: @ 00f75238

/* Function Stack Size: 0x20 bytes */

void WCRefineFriendRelationChecker::setPendingUserNames_sourceTitle_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  undefined8 uVar6;
  cfstringStruct *local_1a8;
  undefined *local_198;
  ulong local_168;
  ulong local_160;
  ulong local_148;
  undefined8 local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
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
  local_c8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_c8,param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_d0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar2;
  FUN_00f75634();
  _objc_retainAutoreleasedReturnValue();
  local_e0 = puVar2;
  _memset(auStack_128,0,0x40);
  if (local_c0 == 0) {
    local_148 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_148 = local_c0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_160 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_148,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
  if (local_160 != 0) {
    lVar5 = *local_118;
    local_168 = 0;
    do {
      do {
        if (*local_118 - lVar5 != 0) {
          _objc_enumerationMutation(*local_118 - lVar5,local_148);
        }
        uVar6 = *(undefined8 *)(local_120 + local_168 * 8);
        local_e8 = uVar6;
        FUN_00f75654();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_d8;
        local_130 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_containsObject__0269cbb8,uVar6);
        if ((((ulong)puVar1 & 1) == 0) &&
           (puVar1 = local_e0, FUN_00f757d8(local_e0,local_130), ((ulong)puVar1 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_130);
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_130);
        }
        _objc_storeStrong(&local_130,0);
        local_168 = local_168 + 1;
      } while (local_168 < local_160);
      local_160 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_148,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                 0x10);
      local_168 = 0;
    } while (local_160 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_148);
  puVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_copy_0269d150);
  local_198 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_198 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setPendingUserNames__026acad8,local_198);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar3 = local_c8;
  FUN_00f73814();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_1a8 = &cf__b;
  }
  else {
    local_1a8 = local_c8;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setPendingSourceTitle__026acae0,local_1a8);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  _objc_storeStrong(&local_e0);
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

