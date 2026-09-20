// showFallbackMenuWithTitle:actions:sourceView: @ 0178bff8

/* Function Stack Size: 0x28 bytes */

void WCPluginsViewControllerBehavior::showFallbackMenuWithTitle_actions_sourceView_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  ID local_280;
  ulong local_1f0;
  ulong local_1e8;
  ID local_180;
  ID local_150;
  undefined *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  code *local_138;
  undefined *local_130;
  undefined8 local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  undefined *local_d8;
  ID local_d0;
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
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_5);
  puVar4 = PTR__OBJC_CLASS___UIAlertController_026ce178;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIAlertController_026ce178,
             PTR_s_alertControllerWithTitle_message_0269dc00,local_c0,0,0);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar4;
  _memset(auStack_120,0,0x40);
  uVar3 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_1e8 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_1e8 != 0) {
    lVar6 = *local_110;
    local_1f0 = 0;
    do {
      do {
        if (*local_110 - lVar6 != 0) {
          _objc_enumerationMutation(*local_110 - lVar6,uVar3);
        }
        puVar5 = local_d8;
        puVar4 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
        uVar7 = *(undefined8 *)(local_118 + local_1f0 * 8);
        local_e0 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_title_0269d250);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_e0;
        local_148 = PTR___NSConcreteStackBlock_02578660;
        local_140 = 0xc2000000;
        local_13c = 0;
        local_138 = FUN_0178c5d8;
        local_130 = &DAT_0257c5b8;
        (*(code *)PTR__objc_retain_02578638)();
        local_128 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_actionWithTitle_style_handler__0269dc08,uVar7,0,&local_148);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addAction__0269dc10);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(uVar7);
        _objc_storeStrong(&local_128,0);
        local_1f0 = local_1f0 + 1;
      } while (local_1f0 < local_1e8);
      local_1e8 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_1f0 = 0;
    } while (local_1e8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar4 = local_d8;
  puVar5 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIAlertAction_026ce180,PTR_s_actionWithTitle_style_handler__0269dc08,
             &cf_Sm,1,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addAction__0269dc10);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  bVar1 = local_d0 == 0;
  if (bVar1) {
    local_150 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_popoverPresentationController_0269fdf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_150);
  }
  bVar1 = local_d0 == 0;
  if (bVar1) {
    local_280 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_180 = local_280;
  }
  else {
    local_280 = local_d0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_bounds_026ca548);
  puVar4 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_popoverPresentationController_0269fdf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1,in_d2,in_d3);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_180);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0,PTR_s_presentViewController_animated_c_0269d2b0,local_d8,1);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

