// FUN_003ff1e4 @ 003ff1e4

byte FUN_003ff1e4(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_148;
  ulong local_140;
  ulong local_118 [3];
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  _memset(auStack_100,0,0x40);
  uVar3 = local_b8;
  (*(code *)PTR__objc_retain_02578638)();
  local_140 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
  if (local_140 != 0) {
    lVar5 = *local_f0;
    local_148 = 0;
    do {
      do {
        if (*local_f0 - lVar5 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar5,uVar3);
        }
        uVar6 = *(ulong *)(local_f8 + local_148 * 8);
        local_c0 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_customView_0269ea28);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
        local_118[0] = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UISegmentedControl_026ce290,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
        uVar7 = uVar6 & 0xffffffff;
        if ((uVar6 & 1) == 0) {
LAB_003ff3e4:
          bVar1 = false;
        }
        else {
          uVar6 = local_118[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_118[0],PTR_s_tag_026cab98);
          uVar7 = 0;
          if (uVar6 == 0x57435249) goto LAB_003ff3e4;
          uVar7 = 1;
          local_a9 = 1;
          bVar1 = true;
        }
        _objc_storeStrong(uVar7,local_118,0);
        bVar2 = true;
        if (bVar1) goto LAB_003ff478;
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
      local_148 = 0;
    } while (local_140 != 0);
  }
  bVar2 = false;
LAB_003ff478:
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (!bVar2) {
    local_a9 = 0;
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

