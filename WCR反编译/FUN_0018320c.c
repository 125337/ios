// FUN_0018320c @ 0018320c

void FUN_0018320c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong local_1b8;
  ulong local_1b0;
  undefined *local_150;
  undefined4 local_148;
  undefined4 local_144;
  code *local_140;
  undefined *local_138;
  ulong local_130;
  undefined *local_128;
  undefined4 local_11c;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  undefined *local_d0 [3];
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
    FUN_00187740();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_b8;
    local_150 = PTR___NSConcreteStackBlock_02578660;
    local_148 = 0xc2000000;
    local_144 = 0;
    local_140 = FUN_00187b98;
    local_138 = &DAT_0257a9a0;
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_actionWithTitle_image_identifier_0269fbf0,uVar2,uVar4,0,&local_150);
    _objc_retainAutoreleasedReturnValue();
    local_128 = puVar5;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_destructive_0269fbf8);
    uVar7 = 2;
    if ((uVar1 & 1) == 0) {
      uVar7 = 0;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setAttributes__0269fc00,uVar7);
    puVar5 = local_128;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar5;
    local_11c = 1;
    _objc_storeStrong(&local_128);
    _objc_storeStrong(&local_130,0);
  }
  else {
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_children_0269fbd8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_arrayWithCapacity__0269d9b8,uVar2);
    _objc_retainAutoreleasedReturnValue();
    local_d0[0] = puVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _memset(auStack_118,0,0x40);
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_children_0269fbd8);
    _objc_retainAutoreleasedReturnValue();
    local_1b0 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1b0 != 0) {
      lVar6 = *local_108;
      local_1b8 = 0;
      do {
        do {
          if (*local_108 - lVar6 != 0) {
            _objc_enumerationMutation(*local_108 - lVar6,uVar1);
          }
          puVar5 = local_d0[0];
          uVar7 = *(undefined8 *)(local_110 + local_1b8 * 8);
          local_d8 = uVar7;
          FUN_0018320c();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(uVar7);
          local_1b8 = local_1b8 + 1;
        } while (local_1b8 < local_1b0);
        local_1b0 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_1b8 = 0;
      } while (local_1b0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar5 = PTR__OBJC_CLASS___UIMenu_026ce388;
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_title_0269d250);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_b8;
    FUN_00187740();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_menuWithTitle_image_identifier_o_0269fbe0,uVar1,uVar2,0,0,local_d0[0]);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = puVar5;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_11c = 1;
    _objc_storeStrong(local_d0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

