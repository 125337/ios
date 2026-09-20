// commandRemainder:matchesKeywords: @ 00ed05b4

/* Function Stack Size: 0x20 bytes */

bool WCRefineChatRoomKickHelper::commandRemainder_matchesKeywords_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ulong local_160;
  ulong local_158;
  ID local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  int local_dc;
  ID local_d8;
  ulong local_d0;
  undefined8 local_c8;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  IVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_trimmedString__0269ec98,local_c8);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
  if ((IVar1 == 0) ||
     (uVar2 = local_d0, (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0),
     uVar2 == 0)) {
    local_a9 = 0;
    local_dc = 1;
  }
  else {
    _memset(auStack_128,0,0x40);
    uVar2 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_158 != 0) {
      lVar5 = *local_118;
      local_160 = 0;
      do {
        do {
          if (*local_118 - lVar5 != 0) {
            _objc_enumerationMutation(*local_118 - lVar5,uVar2);
          }
          local_e8 = *(undefined8 *)(local_120 + local_160 * 8);
          IVar3 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_trimmedString__0269ec98,local_e8);
          _objc_retainAutoreleasedReturnValue();
          local_130 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_hasPrefix__0269d320,&::cf__);
          IVar1 = local_b8;
          if ((IVar3 & 1) != 0) {
            IVar4 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_substringFromIndex__0269d120,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_trimmedString__0269ec98);
            _objc_retainAutoreleasedReturnValue();
            IVar3 = local_130;
            local_130 = IVar1;
            (*(code *)PTR__objc_release_02578630)(IVar3);
            (*(code *)PTR__objc_release_02578630)(IVar4);
          }
          IVar1 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
          if (IVar1 == 0) {
            local_dc = 3;
          }
          else {
            IVar1 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_isEqualToString__0269ccc8,local_130);
            if ((IVar1 & 1) == 0) {
              local_dc = 0;
            }
            else {
              local_a9 = 1;
              local_dc = 1;
            }
          }
          _objc_storeStrong(&local_130,0);
          if ((local_dc != 0) && (local_dc != 3)) goto LAB_00ed0918;
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_160 = 0;
      } while (local_158 != 0);
    }
    local_dc = 0;
LAB_00ed0918:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_dc == 0) {
      local_a9 = 0;
      local_dc = 1;
    }
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

