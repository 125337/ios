// FUN_01717efc @ 01717efc

void FUN_01717efc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong local_1d0;
  ulong local_1c8;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  ulong local_e8;
  ulong local_e0 [3];
  undefined *local_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_c0;
  local_c8 = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_e0[0] = uVar3;
  while (uVar3 = local_e0[0], local_e0[0] != 0) {
    puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_e0[0]);
    }
    uVar2 = local_e0[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_e0[0],PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_e0[0];
    local_e0[0] = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  uVar3 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_nextResponder_0269d0d8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  local_e8 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar3 & 1) != 0) {
    uVar3 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    puVar1 = local_c8;
    if (uVar3 != 0) {
      uVar3 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
  }
  _memset(auStack_130,0,0x40);
  uVar3 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  local_1c8 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_1c8 != 0) {
    lVar5 = *local_120;
    local_1d0 = 0;
    do {
      do {
        if (*local_120 - lVar5 != 0) {
          _objc_enumerationMutation(*local_120 - lVar5,uVar3);
        }
        puVar1 = local_c8;
        local_f0 = *(undefined8 *)(local_128 + local_1d0 * 8);
        uVar4 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_findNavigationControllersInView__026b39c0,local_f0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObjectsFromArray__0269d540);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        local_1d0 = local_1d0 + 1;
      } while (local_1d0 < local_1c8);
      local_1c8 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
      local_1d0 = 0;
    } while (local_1c8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar1 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(local_e0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

