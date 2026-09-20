// FUN_0034bcc4 @ 0034bcc4

void FUN_0034bcc4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *local_1c0;
  ulong local_198;
  ulong local_190;
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_154;
  code *local_150;
  undefined *local_148;
  long local_140;
  bool local_131;
  undefined *local_130;
  byte local_121;
  long local_120;
  undefined *local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  long local_d0;
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
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_arrayWithCapacity__0269d9b8,uVar3);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar4;
  _memset(auStack_110,0,0x40);
  uVar5 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_190 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_190 != 0) {
    lVar8 = *local_100;
    local_198 = 0;
    do {
      do {
        if (*local_100 - lVar8 != 0) {
          _objc_enumerationMutation(*local_100 - lVar8,uVar5);
        }
        lVar9 = *(long *)(local_108 + local_198 * 8);
        local_d0 = lVar9;
        (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_systemImageName_026a2300);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar9;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_1c0 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        local_121 = 0;
        local_131 = false;
        if (lVar6 == 0) {
          local_1c0 = (undefined *)0x0;
        }
        else {
          lVar7 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_systemImageName_026a2300);
          _objc_retainAutoreleasedReturnValue();
          local_121 = 1;
          local_120 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_systemImageNamed__026cab78);
          _objc_retainAutoreleasedReturnValue();
          local_130 = local_1c0;
        }
        local_131 = lVar6 != 0;
        (*(code *)PTR__objc_retain_02578638)();
        local_118 = local_1c0;
        if ((local_131 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_130);
        }
        if ((local_121 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_120);
        }
        (*(code *)PTR__objc_release_02578630)(lVar9);
        puVar2 = local_c8;
        puVar4 = PTR__OBJC_CLASS___UIAction_026ce028;
        lVar9 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_title_0269d250);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = local_d0;
        puVar1 = local_118;
        local_160 = PTR___NSConcreteStackBlock_02578660;
        local_158 = 0xc2000000;
        local_154 = 0;
        local_150 = FUN_0034c1a8;
        local_148 = &DAT_0257c3c8;
        (*(code *)PTR__objc_retain_02578638)();
        local_140 = lVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_actionWithTitle_image_identifier_0269fbf0,lVar9,puVar1,0,&local_160)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(lVar9);
        _objc_storeStrong(&local_140,0);
        _objc_storeStrong(&local_118,0);
        local_198 = local_198 + 1;
      } while (local_198 < local_190);
      local_190 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_198 = 0;
    } while (local_190 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar5);
  puVar4 = PTR__OBJC_CLASS___UIMenu_026ce388;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIMenu_026ce388,PTR_s_menuWithTitle_children__0269fb28,&cf___,
             local_c8);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

