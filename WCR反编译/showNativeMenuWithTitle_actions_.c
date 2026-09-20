// showNativeMenuWithTitle:actions: @ 0178b5d8

/* Function Stack Size: 0x20 bytes */

void WCPluginsViewControllerBehavior::showNativeMenuWithTitle_actions_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  ID IVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ID IVar7;
  long lVar8;
  ulong local_188;
  ulong local_180;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  undefined *local_f0;
  char *local_e8;
  undefined4 local_dc;
  char *local_d8;
  char *local_d0;
  ulong local_c8;
  undefined8 local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  pcVar2 = "WCActionSheet";
  _objc_getClass();
  pcVar3 = "WCActionSheetItem";
  local_d0 = pcVar2;
  _objc_getClass();
  IVar7 = local_b0;
  uVar6 = local_c0;
  uVar1 = local_c8;
  local_d8 = pcVar3;
  if ((local_d0 == (char *)0x0) || (pcVar3 == (char *)0x0)) {
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar7,PTR_s_showFallbackMenuWithTitle_action_026b4788,uVar6,uVar1);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    local_dc = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setNativeMenuActions__026b4790,local_c8);
    pcVar2 = local_d0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_e8 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar5;
    _memset(auStack_138,0,0x40);
    uVar1 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_180 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
    if (local_180 != 0) {
      lVar8 = *local_128;
      local_188 = 0;
      do {
        do {
          if (*local_128 - lVar8 != 0) {
            _objc_enumerationMutation(*local_128 - lVar8,uVar1);
          }
          puVar5 = local_f0;
          local_f8 = *(undefined8 *)(local_130 + local_188 * 8);
          pcVar2 = local_d8;
          _objc_alloc();
          uVar6 = local_f8;
          (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_title_0269d250);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_initWithTitle__0269d2f8);
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          (*(code *)PTR__objc_release_02578630)(uVar6);
          local_188 = local_188 + 1;
        } while (local_188 < local_180);
        local_180 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10
                  );
        local_188 = 0;
      } while (local_180 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_setValue_forKey__0269d300,local_f0,&cf_buttonTitleList);
    pcVar2 = local_e8;
    puVar5 = PTR_s_showInView__0269d310;
    IVar7 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,puVar5);
    (*(code *)PTR__objc_release_02578630)(IVar7);
    _objc_storeStrong(&local_f0);
    _objc_storeStrong(&local_e8,0);
    local_dc = 0;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

