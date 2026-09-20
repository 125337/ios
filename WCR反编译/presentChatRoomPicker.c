// presentChatRoomPicker @ 01aaf878

/* Function Stack Size: 0x10 bytes */

void WCRGroupCreateViewController::presentChatRoomPicker(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  long lVar4;
  ulong uVar5;
  ulong local_180;
  ulong local_178;
  undefined *local_150;
  undefined4 local_148;
  undefined4 local_144;
  code *local_140;
  undefined *local_138;
  undefined1 auStack_130 [8];
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_c8;
  undefined1 auStack_c0 [8];
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_initWeak(auStack_c0,param_1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  _memset(auStack_120,0,0x40);
  IVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_selectedUsernames_026a6628);
  _objc_retainAutoreleasedReturnValue();
  local_178 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_178 != 0) {
    lVar4 = *local_110;
    local_180 = 0;
    do {
      do {
        if (*local_110 - lVar4 != 0) {
          _objc_enumerationMutation(*local_110 - lVar4,IVar3);
        }
        uVar5 = *(ulong *)(local_118 + local_180 * 8);
        local_e0 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_lowercaseString_0269d9c0);
        _objc_retainAutoreleasedReturnValue();
        local_128 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_hasSuffix__0269d018,&cf__chatroom);
        if (((uVar5 & 1) != 0) ||
           (uVar5 = local_128,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_128,PTR_s_hasSuffix__0269d018,&cf__im_chatroom), (uVar5 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_e0);
        }
        _objc_storeStrong(&local_128,0);
        local_180 = local_180 + 1;
      } while (local_180 < local_178);
      local_178 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_180 = 0;
    } while (local_178 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_b0;
  puVar1 = local_c8;
  puVar2 = PTR_WCRefineChatRoomPicker_026cef60;
  local_150 = PTR___NSConcreteStackBlock_02578660;
  local_148 = 0xc2000000;
  local_144 = 0;
  local_140 = FUN_01aafc24;
  local_138 = &DAT_0257a7d0;
  _objc_copyWeak(auStack_130,auStack_c0);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_presentFromViewController_title__026ab898,IVar3,&cf_mR_J,puVar1,&local_150
            );
  _objc_destroyWeak(auStack_130);
  _objc_storeStrong(&local_c8,0);
  _objc_destroyWeak(auStack_c0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

