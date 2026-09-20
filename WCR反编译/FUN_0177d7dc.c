// FUN_0177d7dc @ 0177d7dc

void FUN_0177d7dc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong local_168;
  ulong local_160;
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_128;
  undefined *local_120;
  undefined8 local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  undefined *local_c8;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  local_b0 = param_1;
  _objc_storeStrong(&local_b8);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar3;
  _memset(auStack_110,0,0x40);
  uVar4 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_160 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_160 != 0) {
    lVar5 = *local_100;
    local_168 = 0;
    do {
      do {
        if (*local_100 - lVar5 != 0) {
          _objc_enumerationMutation(*local_100 - lVar5,uVar4);
        }
        puVar2 = local_c8;
        puVar3 = PTR__OBJC_CLASS___UIAction_026ce028;
        uVar6 = *(undefined8 *)(local_108 + local_168 * 8);
        local_d0 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_title_0269d250);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_d0;
        local_138 = PTR___NSConcreteStackBlock_02578660;
        local_130 = 0xc2000000;
        local_12c = 0;
        local_128 = FUN_0177db18;
        local_120 = &DAT_0257c3c8;
        (*(code *)PTR__objc_retain_02578638)();
        local_118 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_actionWithTitle_image_identifier_0269fbf0,uVar6,0,0,&local_138);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(uVar6);
        _objc_storeStrong(&local_118,0);
        local_168 = local_168 + 1;
      } while (local_168 < local_160);
      local_160 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_168 = 0;
    } while (local_160 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar4);
  puVar3 = PTR__OBJC_CLASS___UIMenu_026ce388;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIMenu_026ce388,PTR_s_menuWithTitle_children__0269fb28,&cf___,
             local_c8);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

