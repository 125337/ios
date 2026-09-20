// FUN_01c16ad4 @ 01c16ad4

void FUN_01c16ad4(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  ulong local_1e8;
  ulong local_1e0;
  ulong local_1c8;
  char *local_1a0;
  char *local_190;
  char *local_170;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  undefined8 local_128;
  bool local_119;
  char *local_118;
  char *local_110;
  bool local_101;
  char *local_100;
  char *local_f8;
  char *local_f0;
  undefined4 local_e4;
  cfstringStruct *local_e0;
  ulong local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  uVar3 = *(ulong *)(param_1 + 0x20);
  local_b8 = param_1;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_valueForKey__0269d128,&cf_m_selectView);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_c0;
  local_c0 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar5);
  pcVar4 = &cf_switchSelect_atIndexPath_source_;
  _NSSelectorFromString();
  local_e0 = pcVar4;
  if ((local_c0 == 0) ||
     (uVar5 = local_c0,
     (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_respondsToSelector__026ca818,pcVar4),
     (uVar5 & 1) == 0)) {
    local_e4 = 1;
  }
  else {
    pcVar6 = "MMServiceCenter";
    _objc_getClass();
    local_f0 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar6,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0);
    local_101 = false;
    bVar1 = ((ulong)pcVar6 & 1) == 0;
    if (bVar1) {
      local_190 = (char *)0x0;
    }
    else {
      local_190 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_100 = local_190;
    }
    local_101 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_f8 = local_190;
    if ((local_101 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_100);
    }
    pcVar6 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f8,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
    local_1a0 = local_f8;
    puVar2 = PTR_s_getService__0269d170;
    local_119 = false;
    bVar1 = ((ulong)pcVar6 & 1) == 0;
    if (bVar1) {
      local_1a0 = (char *)0x0;
    }
    else {
      pcVar6 = "CContactMgr";
      _objc_getClass("CContactMgr");
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,puVar2,pcVar6);
      _objc_retainAutoreleasedReturnValue();
      local_118 = local_1a0;
    }
    local_119 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_110 = local_1a0;
    if ((local_119 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_118);
    }
    pcVar6 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_110,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
    if (((ulong)pcVar6 & 1) == 0) {
      local_e4 = 1;
    }
    else {
      _memset(auStack_168,0,0x40);
      local_1c8 = *(ulong *)(param_1 + 0x28);
      if (local_1c8 == 0) {
        local_1c8 = *(ulong *)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_1e0 = local_1c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1c8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_a8,
                 0x10);
      if (local_1e0 != 0) {
        lVar7 = *local_158;
        local_1e8 = 0;
        do {
          do {
            if (*local_158 - lVar7 != 0) {
              _objc_enumerationMutation(*local_158 - lVar7,local_1c8);
            }
            local_128 = *(undefined8 *)(local_160 + local_1e8 * 8);
            pcVar6 = local_110;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_110,PTR_s_getContactByName__0269d178,local_128);
            _objc_retainAutoreleasedReturnValue();
            local_170 = pcVar6;
            if (pcVar6 != (char *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_c0,local_e0,pcVar6,0,0);
            }
            _objc_storeStrong(&local_170,0);
            local_1e8 = local_1e8 + 1;
          } while (local_1e8 < local_1e0);
          local_1e0 = local_1c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1c8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,
                     auStack_a8,0x10);
          local_1e8 = 0;
        } while (local_1e0 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(local_1c8);
      local_e4 = 0;
    }
    _objc_storeStrong(&local_110);
    _objc_storeStrong(&local_f8,0);
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

