// actionWithId: @ 01e0d3d0

/* Function Stack Size: 0x18 bytes */

ID WCRefineSuperFloatButtonConfigViewController::actionWithId_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_140;
  ulong local_138;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  int local_cc;
  long local_c8;
  SEL local_c0;
  ID local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  lVar5 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if (lVar5 == 0) {
    local_b0 = 0;
    local_cc = 1;
  }
  else {
    _memset(auStack_118,0,0x40);
    IVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_actions_0269f150);
    _objc_retainAutoreleasedReturnValue();
    local_138 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_138 != 0) {
      lVar5 = *local_108;
      local_140 = 0;
      do {
        do {
          if (*local_108 - lVar5 != 0) {
            _objc_enumerationMutation(*local_108 - lVar5,IVar1);
          }
          uVar6 = *(ulong *)(local_110 + local_140 * 8);
          puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_d8 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar6 & 1) != 0) {
            uVar6 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_objectForKeyedSubscript__0269d098,_WCRSuperFloatActionKey);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar6;
            FUN_01e0d320();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar3);
            (*(code *)PTR__objc_release_02578630)(uVar6);
            uVar6 = local_d8;
            if ((uVar4 & 1) != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = uVar6;
              local_cc = 1;
              goto LAB_01e0d66c;
            }
          }
          local_140 = local_140 + 1;
        } while (local_140 < local_138);
        local_138 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_140 = 0;
      } while (local_138 != 0);
    }
    local_cc = 0;
LAB_01e0d66c:
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if (local_cc == 0) {
      local_b0 = 0;
      local_cc = 1;
    }
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

