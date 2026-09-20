// mutualFriendContactsInGroupFromRoomContact: @ 015307e0

/* Function Stack Size: 0x18 bytes */

ID WCRefineTopBarProfileCardPresenter::mutualFriendContactsInGroupFromRoomContact_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong local_180;
  ulong local_178;
  undefined *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined *local_e8;
  undefined *local_e0;
  ulong local_d8;
  undefined4 local_cc;
  ulong local_c8;
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
  if (local_c8 == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_cc = 1;
    local_b0 = puVar2;
  }
  else {
    uVar3 = local_c8;
    FUN_01530bc4();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_count_0269cfe0);
    if (uVar3 == 0) {
      puVar2 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_cc = 1;
      local_b0 = puVar2;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = puVar2;
      _memset(auStack_128,0,0x40);
      uVar3 = local_d8;
      (*(code *)PTR__objc_retain_02578638)();
      local_178 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
      if (local_178 != 0) {
        lVar5 = *local_118;
        local_180 = 0;
        do {
          do {
            if (*local_118 - lVar5 != 0) {
              _objc_enumerationMutation(*local_118 - lVar5,uVar3);
            }
            puVar2 = *(undefined **)(local_120 + local_180 * 8);
            local_e8 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_friendContact);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = false;
            local_130 = puVar2;
            if (puVar2 != (undefined *)0x0) {
              puVar4 = PTR__OBJC_CLASS___NSNull_026ce0e8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
              _objc_retainAutoreleasedReturnValue();
              bVar1 = puVar2 != puVar4;
              (*(code *)PTR__objc_release_02578630)(puVar4);
            }
            if (bVar1) {
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_130);
            }
            _objc_storeStrong(&local_130,0);
            local_180 = local_180 + 1;
          } while (local_180 < local_178);
          local_178 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_180 = 0;
        } while (local_178 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      puVar2 = local_e0;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar2;
      local_cc = 1;
      _objc_storeStrong(&local_e0,0);
    }
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_b0;
}

