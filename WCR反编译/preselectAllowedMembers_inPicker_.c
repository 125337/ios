// preselectAllowedMembers:inPicker: @ 01ab06cc

/* Function Stack Size: 0x20 bytes */

void WCRGroupCreateViewController::preselectAllowedMembers_inPicker_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  long lVar5;
  ulong local_168;
  ulong local_160;
  char *local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  undefined4 local_e4;
  cfstringStruct *local_e0;
  char *local_d8;
  ulong local_d0;
  ulong local_c8;
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
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  uVar1 = local_c8;
  FUN_01a9c574(local_c8,&cf_m_selectView);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "CContactMgr";
  local_d0 = uVar1;
  _objc_getClass();
  FUN_01aad60c();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = &cf_switchSelect_atIndexPath_source_;
  local_d8 = pcVar2;
  _NSSelectorFromString();
  uVar1 = local_d0;
  local_e0 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_respondsToSelector__026ca818,pcVar3);
  if (((uVar1 & 1) == 0) ||
     (pcVar2 = local_d8,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_d8,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
     ((ulong)pcVar2 & 1) == 0)) {
    local_e4 = 1;
  }
  else {
    _memset(auStack_130,0,0x40);
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_selectedUsernames_026a6628);
    _objc_retainAutoreleasedReturnValue();
    local_160 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_160 != 0) {
      lVar5 = *local_120;
      local_168 = 0;
      do {
        do {
          if (*local_120 - lVar5 != 0) {
            _objc_enumerationMutation(*local_120 - lVar5,IVar4);
          }
          local_f0 = *(undefined8 *)(local_128 + local_168 * 8);
          uVar1 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_containsObject__0269cbb8,local_f0);
          if ((uVar1 & 1) != 0) {
            pcVar2 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_getContactByName__0269d178,local_f0);
            _objc_retainAutoreleasedReturnValue();
            local_138 = pcVar2;
            if (pcVar2 != (char *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,local_e0,pcVar2,0,0);
            }
            _objc_storeStrong(&local_138,0);
          }
          local_168 = local_168 + 1;
        } while (local_168 < local_160);
        local_160 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        local_168 = 0;
      } while (local_160 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar4);
    local_e4 = 0;
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

