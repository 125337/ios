// FUN_0055da38 @ 0055da38

void FUN_0055da38(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong local_150;
  ulong local_148;
  undefined *local_128;
  uint local_11c;
  ulong local_118 [3];
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  ulong local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  _memset(auStack_100,0,0x40);
  uVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_gestureRecognizers_026ca650);
  _objc_retainAutoreleasedReturnValue();
  local_148 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_148 != 0) {
    lVar5 = *local_f0;
    local_150 = 0;
    do {
      do {
        if (*local_f0 - lVar5 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar5,uVar2);
        }
        uVar6 = *(ulong *)(local_f8 + local_150 * 8);
        puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
        local_c0 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
        uVar4 = local_c0;
        if ((uVar6 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_118[0] = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_numberOfTapsRequired_026a1f58);
          lVar7 = uVar4 - 2;
          bVar1 = lVar7 == 0;
          if (bVar1) {
            lVar7 = 1;
          }
          local_11c = (uint)bVar1;
          _objc_storeStrong(lVar7,local_118,0);
          if (local_11c != 0) goto LAB_0055dcac;
        }
        local_150 = local_150 + 1;
      } while (local_150 < local_148);
      local_148 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
      local_150 = 0;
    } while (local_148 != 0);
  }
  local_11c = 0;
LAB_0055dcac:
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (local_11c == 0) {
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_128 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setNumberOfTapsRequired__026ca9e0,2);
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setNumberOfTouchesRequired__0269cbc8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_addGestureRecognizer__026ca4a8,local_128);
    _objc_storeStrong(&local_128,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

