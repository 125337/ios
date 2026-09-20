// setTitles: @ 01fb6790

/* Function Stack Size: 0x18 bytes */

void WCRefineThemeRolePillControl::setTitles_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  undefined8 uVar3;
  ulong local_168;
  ulong local_160;
  long local_140;
  undefined *local_130;
  undefined4 local_128;
  undefined4 local_124;
  code *local_120;
  undefined *local_118;
  ID local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  lVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_copy_0269d150);
  local_140 = lVar2;
  if (lVar2 == 0) {
    local_140 = *(long *)PTR____NSArray0___02578280;
  }
  _objc_storeStrong(local_b0 + (long)_titles,local_140);
  (*(code *)PTR__objc_release_02578630)(lVar2);
  _memset(auStack_108,0,0x40);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_buttons_026b44c8);
  _objc_retainAutoreleasedReturnValue();
  local_160 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_160 != 0) {
    lVar2 = *local_f8;
    local_168 = 0;
    do {
      do {
        if (*local_f8 - lVar2 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar2,IVar1);
        }
        local_c8 = *(undefined8 *)(local_100 + local_168 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_removeFromSuperview_026ca800);
        local_168 = local_168 + 1;
      } while (local_168 < local_160);
      local_160 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_168 = 0;
    } while (local_160 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_buttons_026b44c8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_b0;
  uVar3 = *(undefined8 *)(local_b0 + (long)_titles);
  local_130 = PTR___NSConcreteGlobalBlock_02578658;
  local_128 = 0xd0800000;
  local_124 = 0;
  local_120 = FUN_01fb6ac4;
  local_118 = &DAT_0257cb28;
  (*(code *)PTR__objc_retain_02578638)();
  local_110 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_enumerateObjectsUsingBlock__0269d3d0,&local_130)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setNeedsLayout_0269deb8);
  _objc_storeStrong(&local_110);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

