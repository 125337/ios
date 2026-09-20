// FUN_007abc7c @ 007abc7c

void FUN_007abc7c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *local_218;
  ulong local_1c8;
  ulong local_1c0;
  undefined *local_170;
  undefined4 local_168;
  undefined4 local_164;
  code *local_160;
  undefined *local_158;
  long local_150;
  byte local_141;
  undefined *local_140;
  byte local_131;
  long local_130;
  undefined *local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  long local_e0;
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
  _memset(auStack_120,0,0x40);
  uVar5 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_1c0 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_1c0 != 0) {
    lVar7 = *local_110;
    local_1c8 = 0;
    do {
      do {
        if (*local_110 - lVar7 != 0) {
          _objc_enumerationMutation(*local_110 - lVar7,uVar5);
        }
        lVar8 = *(long *)(local_118 + local_1c8 * 8);
        local_131 = 0;
        local_141 = 0;
        local_e0 = lVar8;
        (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_imageName_0269fc08);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_218 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        if (lVar6 == 0) {
          local_218 = (undefined *)0x0;
        }
        else {
          lVar6 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_imageName_0269fc08);
          _objc_retainAutoreleasedReturnValue();
          local_131 = 1;
          local_130 = lVar6;
          (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_systemImageNamed__026cab78);
          _objc_retainAutoreleasedReturnValue();
          local_141 = 1;
          local_140 = local_218;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_128 = local_218;
        if ((local_141 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_140);
        }
        if ((local_131 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_130);
        }
        (*(code *)PTR__objc_release_02578630)(lVar8);
        puVar2 = local_c8;
        puVar4 = PTR__OBJC_CLASS___UIAction_026ce028;
        lVar6 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_title_0269d250);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_128;
        local_170 = PTR___NSConcreteStackBlock_02578660;
        local_168 = 0xc2000000;
        local_164 = 0;
        local_160 = FUN_007ac378;
        local_158 = &DAT_0257a9a0;
        lVar8 = local_e0;
        (*(code *)PTR__objc_retain_02578638)();
        local_150 = lVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_actionWithTitle_image_identifier_0269fbf0,lVar6,puVar1,0,&local_170)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(lVar6);
        _objc_storeStrong(&local_150);
        _objc_storeStrong(&local_128,0);
        local_1c8 = local_1c8 + 1;
      } while (local_1c8 < local_1c0);
      local_1c0 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_1c8 = 0;
    } while (local_1c0 != 0);
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

