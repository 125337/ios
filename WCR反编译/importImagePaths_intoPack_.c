// importImagePaths:intoPack: @ 0108d068

/* Function Stack Size: 0x20 bytes */

long_long WCRefineLocalEmoticonStore::importImagePaths_intoPack_
                    (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long_long lVar1;
  ulong uVar2;
  ID IVar3;
  long lVar4;
  long lVar5;
  ulong local_148;
  ulong local_140;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  long local_d8;
  long_long local_d0;
  undefined8 local_c8;
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
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_beginChangeBatch_026ae358);
  local_d0 = 0;
  _memset(auStack_118,0,0x40);
  uVar2 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_140 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_140 != 0) {
    lVar4 = *local_108;
    local_148 = 0;
    do {
      do {
        if (*local_108 - lVar4 != 0) {
          _objc_enumerationMutation(*local_108 - lVar4,uVar2);
        }
        lVar5 = *(long *)(local_110 + local_148 * 8);
        local_d8 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
        if (lVar5 != 0) {
          IVar3 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_importContentsAtPath_intoPack__026ae3b0,local_d8,local_c8);
          local_d0 = local_d0 + IVar3;
        }
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_148 = 0;
    } while (local_140 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_endChangeBatch_026ae360);
  lVar1 = local_d0;
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

