// FUN_00247fa0 @ 00247fa0

void FUN_00247fa0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong local_1a0;
  ulong local_198;
  undefined *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  code *local_158;
  undefined *local_150;
  long local_148;
  undefined *local_140;
  undefined4 local_138;
  byte local_131;
  long local_130;
  long local_128;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar1;
  _memset(auStack_120,0,0x40);
  uVar2 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_198 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_198 != 0) {
    lVar5 = *local_110;
    local_1a0 = 0;
    do {
      do {
        if (*local_110 - lVar5 != 0) {
          _objc_enumerationMutation(*local_110 - lVar5,uVar2);
        }
        lVar6 = *(long *)(local_118 + local_1a0 * 8);
        local_e0 = lVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (lVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = local_e0;
        local_128 = lVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_handler);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = local_e0;
        local_130 = lVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_destructive);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar6);
        local_131 = (byte)lVar3;
        lVar4 = local_128;
        (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
        lVar6 = local_128;
        lVar3 = local_130;
        puVar1 = PTR__OBJC_CLASS___UIAction_026ce028;
        if (lVar4 == 0) {
          local_138 = 3;
        }
        else {
          local_168 = PTR___NSConcreteStackBlock_02578660;
          local_160 = 0xc2000000;
          local_15c = 0;
          local_158 = FUN_00248574;
          local_150 = &DAT_0257afe8;
          (*(code *)PTR__objc_retain_02578638)();
          local_148 = lVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_actionWithTitle_image_identifier_0269fbf0,lVar6,0,0,&local_168);
          _objc_retainAutoreleasedReturnValue();
          local_140 = puVar1;
          if ((local_131 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setAttributes__0269fc00,2);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_140);
          _objc_storeStrong(&local_140);
          _objc_storeStrong(&local_148,0);
          local_138 = 0;
        }
        _objc_storeStrong(&local_130);
        _objc_storeStrong(&local_128,0);
        local_1a0 = local_1a0 + 1;
      } while (local_1a0 < local_198);
      local_198 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_1a0 = 0;
    } while (local_198 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIMenu_026ce388;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIMenu_026ce388,PTR_s_menuWithTitle_children__0269fb28,&cf___,
             local_c8);
  _objc_retainAutoreleasedReturnValue();
  local_138 = 1;
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar1);
  return;
}

