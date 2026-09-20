// FUN_008a61ec @ 008a61ec

void FUN_008a61ec(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  ulong local_180;
  ulong local_178;
  char *local_138;
  ulong local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  undefined *local_e0;
  int local_d8;
  ulong local_c8;
  long local_c0;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  local_b0 = param_1;
  _objc_storeStrong(&local_b8);
  uVar1 = *(ulong *)(param_1 + 0x20);
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_m_delegate_0269d0e0);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_GetMessageFromImage__026a9870);
  if ((uVar1 & 1) == 0) {
    local_d8 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar2;
    _memset(auStack_128,0,0x40);
    uVar1 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_178 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_178 != 0) {
      lVar5 = *local_118;
      local_180 = 0;
      do {
        do {
          if (*local_118 - lVar5 != 0) {
            _objc_enumerationMutation(*local_118 - lVar5,uVar1);
          }
          local_e8 = *(undefined8 *)(local_120 + local_180 * 8);
          uVar3 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_performSelector_withObject__026ca7c0,
                     PTR_s_GetMessageFromImage__026a9870,local_e8);
          _objc_retainAutoreleasedReturnValue();
          local_130 = uVar3;
          if (uVar3 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,uVar3);
          }
          _objc_storeStrong(&local_130,0);
          local_180 = local_180 + 1;
        } while (local_180 < local_178);
        local_178 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_180 = 0;
      } while (local_178 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0);
    if (puVar2 == (undefined *)0x0) {
      local_d8 = 1;
    }
    else {
      if (DAT_028cddd0 == (char *)0x0) {
        pcVar4 = "SharePreConfirmSheetView";
        _objc_getClass();
        DAT_028cddd0 = pcVar4;
      }
      pcVar4 = DAT_028cddd0;
      _objc_retainAutoreleaseReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_new_0269d288);
      local_138 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_setDelegate__026ca910,*(undefined8 *)(param_1 + 0x20));
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setTitle__0269cef0,&cf__f_TSNNVGr_);
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setArrMsgs__026a9878,local_e0);
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setBShowTextView__026a9880,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_138,PTR_s_showFromViewController_animated__026a9888,
                 *(undefined8 *)(param_1 + 0x20),1,0);
      _objc_storeStrong(&local_138,0);
      local_d8 = 0;
    }
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (local_d8 == 0) {
    local_d8 = 0;
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

