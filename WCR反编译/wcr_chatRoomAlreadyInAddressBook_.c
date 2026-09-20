// wcr_chatRoomAlreadyInAddressBook: @ 00ee1f50

/* Function Stack Size: 0x18 bytes */

bool WCRefineChatRoomMuteHelper::wcr_chatRoomAlreadyInAddressBook_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *local_178;
  undefined *local_170;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  int local_e4;
  ulong local_e0;
  SEL local_d8;
  ID local_d0;
  byte local_c1;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = 0;
  local_d8 = param_2;
  local_d0 = param_1;
  _objc_storeStrong(&local_e0,param_3);
  if (local_e0 == 0) {
    local_c1 = 0;
    local_e4 = 1;
  }
  else {
    _memset(auStack_130,0,0x40);
    local_c0 = &cf_isMyContact;
    local_b8 = &cf_isMMContact;
    local_b0 = &cf_isInMyContactList;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_170 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_170 != (undefined *)0x0) {
      lVar3 = *local_120;
      local_178 = (undefined *)0x0;
      do {
        do {
          if (*local_120 - lVar3 != 0) {
            _objc_enumerationMutation(*local_120 - lVar3,puVar1);
          }
          uVar4 = *(undefined8 *)(local_128 + (long)local_178 * 8);
          local_f0 = uVar4;
          _NSSelectorFromString();
          uVar2 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_respondsToSelector__026ca818,uVar4);
          if (((uVar2 & 1) != 0) &&
             (uVar2 = local_e0, (*(code *)PTR__objc_msgSend_02578628)(local_e0,uVar4),
             (uVar2 & 1) != 0)) {
            local_c1 = 1;
            local_e4 = 1;
            goto LAB_00ee21ac;
          }
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                   0x10);
        local_178 = (undefined *)0x0;
      } while (local_170 != (undefined *)0x0);
    }
    local_e4 = 0;
LAB_00ee21ac:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_e4 == 0) {
      local_c1 = 0;
      local_e4 = 1;
    }
  }
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_c1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

