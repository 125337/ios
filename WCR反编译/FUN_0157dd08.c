// FUN_0157dd08 @ 0157dd08

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0157dd08(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  long lVar5;
  ulong local_178;
  ulong local_170;
  ulong local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  cfstringStruct *local_d0;
  ulong local_c8;
  ulong local_c0;
  undefined4 local_b4;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  if ((local_b0 == 0) ||
     (uVar1 = local_b0, (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isGroup_026af768),
     (uVar1 & 1) == 0)) {
    local_b4 = 1;
  }
  else {
    uVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_contact_026a0d10);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_01534040();
    _objc_retainAutoreleasedReturnValue();
    local_c0 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
    uVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setGroupCount__026b0858,uVar1);
    FUN_0152b7ec();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = &cf_getContactByName_;
    local_c8 = uVar2;
    _NSSelectorFromString();
    local_d8 = 0;
    local_e0 = 0;
    local_e8 = 0;
    local_d0 = pcVar3;
    _memset(auStack_130,0,0x40);
    uVar1 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
    if (local_170 != 0) {
      lVar5 = *local_120;
      local_178 = 0;
      do {
        do {
          if (*local_120 - lVar5 != 0) {
            _objc_enumerationMutation(*local_120 - lVar5,uVar1);
          }
          local_f0 = *(undefined8 *)(local_128 + local_178 * 8);
          local_138 = 0;
          if ((local_c8 != 0) &&
             (uVar2 = local_c8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_c8,PTR_s_respondsToSelector__026ca818,local_d0), (uVar2 & 1) != 0)) {
            uVar4 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,local_d0,local_f0);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = local_138;
            local_138 = uVar4;
            (*(code *)PTR__objc_release_02578630)(uVar2);
          }
          uVar2 = local_138;
          FUN_015623d8(local_138,PTR_s_m_uiSex_026acdc8,0);
          if ((int)uVar2 == 2) {
            local_d8 = local_d8 + 1;
          }
          else if ((int)uVar2 == 1) {
            local_e0 = local_e0 + 1;
          }
          else {
            local_e8 = local_e8 + 1;
          }
          _objc_storeStrong(&local_138,0);
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        local_178 = 0;
      } while (local_170 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setGroupFemaleCount__026b0860,local_d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setGroupMaleCount__026b0868,local_e0);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setGroupUnknownCount__026b0870,local_e8);
    _objc_storeStrong(&local_c8);
    _objc_storeStrong(&local_c0,0);
    local_b4 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

