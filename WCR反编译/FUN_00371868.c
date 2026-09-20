// FUN_00371868 @ 00371868

void FUN_00371868(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong local_190;
  ulong local_188;
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  code *local_130;
  undefined *local_128;
  ulong local_120;
  undefined *local_118;
  undefined4 local_10c;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  undefined *local_c0;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_children_0269fbd8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  puVar5 = PTR__OBJC_CLASS___UIAction_026ce028;
  if (uVar2 == 0) {
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_title_0269d250);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_b8;
    FUN_003b75dc();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_b8;
    local_140 = PTR___NSConcreteStackBlock_02578660;
    local_138 = 0xc2000000;
    local_134 = 0;
    local_130 = FUN_003b7990;
    local_128 = &DAT_0257c3c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_120 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_actionWithTitle_image_identifier_0269fbf0,uVar2,uVar4,0,&local_140);
    _objc_retainAutoreleasedReturnValue();
    local_118 = puVar5;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_destructive_0269fbf8);
    uVar7 = 2;
    if ((uVar1 & 1) == 0) {
      uVar7 = 0;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setAttributes__0269fc00,uVar7);
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_selected_026a2ec0);
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setState__026a00b0,(uVar1 & 1) != 0);
    puVar5 = local_118;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar5;
    local_10c = 1;
    _objc_storeStrong(&local_118,0);
    _objc_storeStrong(&local_120,0);
  }
  else {
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_children_0269fbd8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_arrayWithCapacity__0269d9b8,uVar2);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = puVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _memset(auStack_108,0,0x40);
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_children_0269fbd8);
    _objc_retainAutoreleasedReturnValue();
    local_188 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_188 != 0) {
      lVar6 = *local_f8;
      local_190 = 0;
      do {
        do {
          if (*local_f8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar6,uVar1);
          }
          puVar5 = local_c0;
          uVar7 = *(undefined8 *)(local_100 + local_190 * 8);
          local_c8 = uVar7;
          FUN_00371868();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(uVar7);
          local_190 = local_190 + 1;
        } while (local_190 < local_188);
        local_188 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10
                  );
        local_190 = 0;
      } while (local_188 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar5 = PTR__OBJC_CLASS___UIMenu_026ce388;
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_title_0269d250);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_b8;
    FUN_003b75dc();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_menuWithTitle_image_identifier_o_0269fbe0,uVar1,uVar2,0,0,local_c0);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = puVar5;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_10c = 1;
    _objc_storeStrong(&local_c0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

