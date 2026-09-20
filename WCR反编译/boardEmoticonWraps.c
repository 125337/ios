// boardEmoticonWraps @ 0109988c

/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* Function Stack Size: 0x10 bytes */

ID __thiscall
WCRefineLocalEmoticonStore::boardEmoticonWraps
          (WCRefineLocalEmoticonStore *this,ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_1d8;
  ulong local_1a8;
  ulong local_1a0;
  uint local_15c;
  ID local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  undefined *local_f0;
  undefined4 local_e8;
  byte local_e1;
  undefined *local_e0;
  undefined *local_d8;
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
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_d0[0] = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_boardSortMode_026a3de0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf_____lu__ld);
  _objc_retainAutoreleasedReturnValue();
  local_e1 = 0;
  local_15c = 0;
  local_d8 = puVar2;
  if (DAT_028e3230 != (undefined *)0x0) {
    puVar2 = DAT_028e3230;
    _objc_getAssociatedObject(DAT_028e3230,"wcr_le_board_key");
    _objc_retainAutoreleasedReturnValue();
    local_e1 = 1;
    local_e0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_15c = (uint)puVar2;
  }
  if ((local_e1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  puVar2 = DAT_028e3230;
  if ((local_15c & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar2;
    _memset(auStack_138,0,0x40);
    IVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_boardItems_026ae460);
    _objc_retainAutoreleasedReturnValue();
    local_1a0 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1a0 != 0) {
      lVar5 = *local_128;
      local_1a8 = 0;
      do {
        do {
          if (*local_128 - lVar5 != 0) {
            _objc_enumerationMutation(*local_128 - lVar5,IVar1);
          }
          local_f8 = *(undefined8 *)(local_130 + local_1a8 * 8);
          IVar3 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_lightweightWrapForItem__026ae450,local_f8);
          _objc_retainAutoreleasedReturnValue();
          local_140 = IVar3;
          if (IVar3 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObject__0269d180,IVar3);
          }
          _objc_storeStrong(&local_140,0);
          local_1a8 = local_1a8 + 1;
        } while (local_1a8 < local_1a0);
        local_1a0 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10
                  );
        local_1a8 = 0;
      } while (local_1a0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar4 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_copy_0269d150);
    puVar2 = DAT_028e3230;
    DAT_028e3230 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_setAssociatedObject(DAT_028e3230,"wcr_le_board_key",local_d8,3);
    if (DAT_028e3230 == (undefined *)0x0) {
      local_1d8 = *(undefined **)PTR____NSArray0___02578280;
    }
    else {
      local_1d8 = DAT_028e3230;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = local_1d8;
    local_e8 = 1;
    _objc_storeStrong(&local_f0,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar2;
    local_e8 = 1;
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_b0;
}

