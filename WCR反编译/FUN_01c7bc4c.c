// FUN_01c7bc4c @ 01c7bc4c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01c7bc4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 in_x7;
  long lVar9;
  undefined8 uVar10;
  ulong local_1b8;
  ulong local_1b0;
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_154;
  code *local_150;
  undefined *local_148;
  undefined8 local_140;
  undefined1 auStack_138 [8];
  undefined8 local_130;
  long local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  long local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  local_b0 = param_1;
  _objc_storeStrong(&local_b8);
  local_d8 = 0;
  local_d0 = param_1;
  local_c8 = param_4;
  local_c0 = param_3;
  _memset(auStack_120,0,0x40);
  uVar2 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_1b0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_1b0 != 0) {
    lVar9 = *local_110;
    local_1b8 = 0;
    do {
      do {
        if (*local_110 - lVar9 != 0) {
          _objc_enumerationMutation(*local_110 - lVar9,uVar2);
        }
        local_e0 = *(undefined8 *)(local_118 + local_1b8 * 8);
        uVar3 = *(ulong *)(param_1 + 0x28);
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_groupIdentifierForPlugin__026b4470,local_e0);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isEqualToString__0269ccc8);
        (*(code *)PTR__objc_release_02578630)(uVar5);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        if ((uVar4 & 1) != 0) {
          local_d8 = local_d8 + 1;
        }
        local_1b8 = local_1b8 + 1;
      } while (local_1b8 < local_1b0);
      local_1b0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_1b8 = 0;
    } while (local_1b0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  lVar9 = param_1 + 0x38;
  _objc_loadWeakRetained();
  local_160 = PTR___NSConcreteStackBlock_02578660;
  local_158 = 0xc2000000;
  local_154 = 0;
  local_150 = FUN_01c7c16c;
  local_148 = &DAT_0257c708;
  _objc_copyWeak(auStack_138,param_1 + 0x38);
  uVar5 = local_b8;
  (*(code *)PTR__objc_retain_02578638)();
  local_130 = local_c0;
  lVar6 = lVar9;
  local_140 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_actionWithBlock__026c2780,&local_160);
  _objc_retainAutoreleasedReturnValue();
  local_128 = lVar6;
  (*(code *)PTR__objc_release_02578630)(lVar9);
  lVar9 = local_128;
  puVar8 = PTR_WCRefineHelper_026ce000;
  puVar1 = PTR_s_invoke_0269e1b8;
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
  lVar6 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar8,PTR_s_cellWithSel_target_title_rightVa_026a0a98,puVar1,lVar9,uVar5,puVar7,1,
             in_x7,lVar6);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(uVar5);
  _objc_storeStrong(&local_128);
  _objc_storeStrong(&local_140,0);
  _objc_destroyWeak(auStack_138);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

