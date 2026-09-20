// clearUnpinnedItemsOfKind: @ 0095dd6c

/* Function Stack Size: 0x18 bytes */

unsigned_long_long
WCRClipboardHistoryStore::clearUnpinnedItemsOfKind_(ID param_1,SEL param_2,long_long param_3)

{
  unsigned_long_long uVar1;
  undefined *puVar2;
  ID IVar3;
  long lVar4;
  ulong uVar5;
  ulong local_158;
  ulong local_150;
  byte local_129;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  byte local_d1;
  unsigned_long_long local_d0;
  undefined *local_c8;
  long_long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_c0 = param_3;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = 0;
  local_d1 = 0;
  local_c8 = puVar2;
  _memset(auStack_120,0,0x40);
  IVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_items_0269e4b0);
  _objc_retainAutoreleasedReturnValue();
  local_150 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_150 != 0) {
    lVar4 = *local_110;
    local_158 = 0;
    do {
      do {
        if (*local_110 - lVar4 != 0) {
          _objc_enumerationMutation(*local_110 - lVar4,IVar3);
        }
        uVar5 = *(ulong *)(local_118 + local_158 * 8);
        local_e0 = uVar5;
        FUN_009464dc();
        if ((uVar5 & 1) == 0) {
          uVar5 = local_e0;
          FUN_009463a8();
          _objc_retainAutoreleasedReturnValue();
          local_128 = uVar5;
          if (local_c0 == 1) {
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isEqualToString__0269ccc8,&cf_text);
            local_129 = (byte)uVar5;
          }
          else if (local_c0 == 2) {
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isEqualToString__0269ccc8,&cf_image);
            local_129 = (byte)uVar5;
          }
          else if (local_c0 == 3) {
            uVar5 = local_e0;
            FUN_0095e0ec(0);
            local_129 = (byte)uVar5;
          }
          else {
            local_129 = 1;
          }
          if ((local_129 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_e0);
          }
          else {
            FUN_0095d1e4(local_e0);
            local_d0 = local_d0 + 1;
            local_d1 = 1;
          }
          _objc_storeStrong(&local_128,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_e0);
        }
        local_158 = local_158 + 1;
      } while (local_158 < local_150);
      local_150 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_158 = 0;
    } while (local_150 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setItems__026a17a8,local_c8);
  if ((local_d1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setLastCapturedText__026aab98,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_suppressCurrentPasteboardCapture_026aaaa0);
  }
  uVar1 = local_d0;
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

