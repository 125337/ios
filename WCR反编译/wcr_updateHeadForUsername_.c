// wcr_updateHeadForUsername: @ 015e0cc0

/* Function Stack Size: 0x18 bytes */

void WCRQuickChatCellView::wcr_updateHeadForUsername_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  long lVar3;
  long lVar4;
  ulong local_148;
  ulong local_140;
  long local_118;
  uint local_10c;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  _memset(auStack_108,0,0x40);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarHost_026b1098);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  local_140 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_140 != 0) {
    lVar4 = *local_f8;
    local_148 = 0;
    do {
      do {
        if (*local_f8 - lVar4 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar4,IVar2);
        }
        local_c8 = *(undefined8 *)(local_100 + local_148 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_removeFromSuperview_026ca800);
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_148 = 0;
    } while (local_140 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  lVar3 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  lVar4 = local_c0;
  if (lVar3 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarSize_026b1090);
    _WCRQuickChatHeadViewForUsername();
    _objc_retainAutoreleasedReturnValue();
    local_118 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_setTag__026caa80,0x16761);
    IVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarHost_026b1098);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    _objc_storeStrong(&local_118,0);
  }
  local_10c = (uint)(lVar3 == 0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

