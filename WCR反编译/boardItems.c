// boardItems @ 0109913c

/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

ID __thiscall
WCRefineLocalEmoticonStore::boardItems(WCRefineLocalEmoticonStore *this,ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *local_220;
  uint local_1dc;
  ulong local_1c0;
  ulong local_1b8;
  uint local_17c;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  undefined8 local_108;
  byte local_fa;
  byte local_f9;
  undefined *local_f8;
  undefined4 local_f0;
  byte local_e9;
  undefined *local_e8;
  undefined *local_e0;
  ID local_d8;
  ID local_d0 [2];
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = param_2;
  local_b8 = param_1;
  _CFAbsoluteTimeGetCurrent();
  IVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_selectedFilterPackRel_026a3dd0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_b8;
  local_d0[0] = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_boardSortMode_026a3de0);
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_d8 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____lu__ld);
  _objc_retainAutoreleasedReturnValue();
  local_e9 = 0;
  local_17c = 0;
  local_e0 = puVar3;
  if (DAT_028e32a0 != (undefined *)0x0) {
    puVar3 = DAT_028e32a0;
    _objc_getAssociatedObject(DAT_028e32a0,"wcr_le_board_key");
    _objc_retainAutoreleasedReturnValue();
    local_e9 = 1;
    local_e8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_17c = (uint)puVar3;
  }
  if ((local_e9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  puVar3 = DAT_028e32a0;
  if ((local_17c & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_d0[0];
    local_f8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_isEqualToString__0269ccc8,&cf___all__);
    local_f9 = (byte)IVar1;
    IVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isUngroupedPackRel__026a3aa8,local_d0[0]);
    puVar3 = local_f8;
    local_fa = (byte)IVar1;
    if (((local_f9 & 1) != 0) || ((IVar1 & 1) != 0)) {
      IVar1 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_listUngroupedItemsSortMode__026ae338,local_d8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObjectsFromArray__0269d540);
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    if ((local_fa & 1) == 0) {
      _memset(auStack_148,0,0x40);
      IVar1 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_listPacksSortMode__026ac360,local_d8);
      _objc_retainAutoreleasedReturnValue();
      local_1b8 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_1b8 != 0) {
        lVar6 = *local_138;
        local_1c0 = 0;
        do {
          do {
            if (*local_138 - lVar6 != 0) {
              _objc_enumerationMutation(*local_138 - lVar6,IVar1);
            }
            uVar7 = *(undefined8 *)(local_140 + local_1c0 * 8);
            local_1dc = 0;
            local_108 = uVar7;
            if ((local_f9 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_relativePath_026ac370);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_1dc = (uint)uVar4 ^ 1;
              (*(code *)PTR__objc_release_02578630)(uVar7);
            }
            IVar2 = local_b8;
            puVar3 = local_f8;
            if ((local_1dc & 1) == 0) {
              uVar7 = local_108;
              (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_relativePath_026ac370);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (IVar2,PTR_s_listItemsInPack_sortMode__026ae348,uVar7,local_d8);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObjectsFromArray__0269d540);
              (*(code *)PTR__objc_release_02578630)(IVar2);
              (*(code *)PTR__objc_release_02578630)(uVar7);
            }
            local_1c0 = local_1c0 + 1;
          } while (local_1c0 < local_1b8);
          local_1b8 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                     0x10);
          local_1c0 = 0;
        } while (local_1b8 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    puVar5 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_copy_0269d150);
    puVar3 = DAT_028e32a0;
    DAT_028e32a0 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = DAT_028e32a0;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e32a0,PTR_s_count_0269cfe0);
    DAT_028e32a8 = puVar3;
    _objc_setAssociatedObject(DAT_028e32a0,"wcr_le_board_key",local_e0,3);
    if (DAT_028e32a0 == (undefined *)0x0) {
      local_220 = *(undefined **)PTR____NSArray0___02578280;
    }
    else {
      local_220 = DAT_028e32a0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = local_220;
    local_f0 = 1;
    _objc_storeStrong(&local_f8,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar3;
    local_f0 = 1;
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

