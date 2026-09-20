// FUN_01ac2d90 @ 01ac2d90

void FUN_01ac2d90(long param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong local_158;
  ulong local_150;
  char *local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  char *local_d8;
  undefined4 local_cc;
  cfstringStruct *local_c8;
  ulong local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  uVar1 = *(ulong *)(param_1 + 0x20);
  local_b8 = param_1;
  local_b0 = param_1;
  FUN_01a9c574(uVar1,&cf_m_selectView);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = &cf_switchSelect_atIndexPath_source_;
  local_c0 = uVar1;
  _NSSelectorFromString();
  local_c8 = pcVar2;
  if ((local_c0 == 0) ||
     (uVar1 = local_c0,
     (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_respondsToSelector__026ca818,pcVar2),
     (uVar1 & 1) == 0)) {
    local_cc = 1;
  }
  else {
    pcVar3 = "CContactMgr";
    _objc_getClass();
    FUN_01aad60c();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
    if (((ulong)pcVar3 & 1) == 0) {
      local_cc = 1;
    }
    else {
      _memset(auStack_120,0,0x40);
      uVar1 = *(ulong *)(param_1 + 0x28);
      (*(code *)PTR__objc_retain_02578638)();
      local_150 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      if (local_150 != 0) {
        lVar5 = *local_110;
        local_158 = 0;
        do {
          do {
            if (*local_110 - lVar5 != 0) {
              _objc_enumerationMutation(*local_110 - lVar5,uVar1);
            }
            uVar6 = *(ulong *)(local_118 + local_158 * 8);
            puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_e0 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
            if (((uVar6 & 1) != 0) &&
               (uVar6 = local_e0,
               (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0), uVar6 != 0)) {
              pcVar3 = local_d8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d8,PTR_s_getContactByName__0269d178,local_e0);
              _objc_retainAutoreleasedReturnValue();
              local_128 = pcVar3;
              if (pcVar3 != (char *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_c0,local_c8,pcVar3,0,0);
              }
              _objc_storeStrong(&local_128,0);
            }
            local_158 = local_158 + 1;
          } while (local_158 < local_150);
          local_150 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_158 = 0;
        } while (local_150 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      local_cc = 0;
    }
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

