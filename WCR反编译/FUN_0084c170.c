// FUN_0084c170 @ 0084c170

void FUN_0084c170(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint local_174;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  _memset(auStack_100,0,0x40);
  uVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  local_130 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_130 != 0) {
    lVar6 = *local_f0;
    local_138 = 0;
    do {
      do {
        if (*local_f0 - lVar6 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar6,uVar2);
        }
        uVar7 = *(ulong *)(local_f8 + local_138 * 8);
        local_c0 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        uVar5 = local_c0;
        local_174 = 0;
        if ((uVar3 & 1) != 0) {
          puVar4 = PTR__OBJC_CLASS___UILabel_026cdfb8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
          local_174 = (uint)uVar5;
        }
        (*(code *)PTR__objc_release_02578630)(uVar7);
        uVar5 = local_c0;
        if ((local_174 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = uVar5;
          bVar1 = true;
          goto LAB_0084c454;
        }
        local_138 = local_138 + 1;
      } while (local_138 < local_130);
      local_130 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
      local_138 = 0;
    } while (local_130 != 0);
  }
  bVar1 = false;
LAB_0084c454:
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (!bVar1) {
    local_b0 = 0;
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

