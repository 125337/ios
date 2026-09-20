// chatRoomMemberIDsForRoom: @ 010b0c00

/* Function Stack Size: 0x18 bytes */

ID WCRefineMessageSyncRule::chatRoomMemberIDsForRoom_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong local_178;
  ulong local_170;
  long local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  long local_f0;
  undefined *local_e8;
  ulong local_e0;
  undefined4 local_d4;
  ulong local_d0;
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
  uVar1 = local_c8;
  FUN_010aaf58();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if ((uVar1 == 0) ||
     (uVar1 = local_d0,
     (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_hasSuffix__0269d018,&cf__chatroom),
     (uVar1 & 1) == 0)) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_d4 = 1;
    local_b0 = puVar2;
  }
  else {
    uVar1 = local_d0;
    FUN_010b0ff4();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    FUN_010b0a38();
    _objc_retainAutoreleasedReturnValue();
    local_e0 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      puVar2 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_d4 = 1;
      local_b0 = puVar2;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = puVar2;
      _memset(auStack_130,0,0x40);
      uVar1 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
      _objc_retainAutoreleasedReturnValue();
      local_170 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_170 != 0) {
        lVar4 = *local_120;
        local_178 = 0;
        do {
          do {
            if (*local_120 - lVar4 != 0) {
              _objc_enumerationMutation(*local_120 - lVar4,uVar1);
            }
            lVar5 = *(long *)(local_128 + local_178 * 8);
            local_f0 = lVar5;
            FUN_010aaf58();
            _objc_retainAutoreleasedReturnValue();
            local_138 = lVar5;
            (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
            if ((lVar5 != 0) &&
               (puVar2 = local_e8,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_e8,PTR_s_containsObject__0269cbb8,local_138),
               ((ulong)puVar2 & 1) == 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,local_138);
            }
            _objc_storeStrong(&local_138,0);
            local_178 = local_178 + 1;
          } while (local_178 < local_170);
          local_170 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          local_178 = 0;
        } while (local_170 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      puVar2 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_copy_0269d150);
      local_d4 = 1;
      local_b0 = puVar2;
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

