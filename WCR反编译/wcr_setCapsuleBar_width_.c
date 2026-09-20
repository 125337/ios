// wcr_setCapsuleBar:width: @ 01f924d8

/* Function Stack Size: 0x20 bytes */

void WCRefineVoicePackPickerViewController::wcr_setCapsuleBar_width_
               (ID param_1,SEL param_2,ID param_3,double param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_148;
  ulong local_140;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  int local_cc;
  double local_c8;
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
  local_c8 = param_4;
  if (local_c0 == 0) {
    local_cc = 1;
  }
  else {
    _memset(auStack_118,0,0x40);
    uVar1 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_constraints_026a8e80);
    _objc_retainAutoreleasedReturnValue();
    local_140 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_140 != 0) {
      lVar3 = *local_108;
      local_148 = 0;
      do {
        do {
          if (*local_108 - lVar3 != 0) {
            _objc_enumerationMutation(*local_108 - lVar3,uVar1);
          }
          uVar4 = *(ulong *)(local_110 + local_148 * 8);
          local_d8 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_identifier_026a4a88);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar4);
          if ((uVar2 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,local_d8,PTR_s_setConstant__026af198);
            local_cc = 1;
            goto LAB_01f926f4;
          }
          local_148 = local_148 + 1;
        } while (local_148 < local_140);
        local_140 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_148 = 0;
      } while (local_140 != 0);
    }
    local_cc = 0;
LAB_01f926f4:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_cc == 0) {
      local_cc = 0;
    }
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

