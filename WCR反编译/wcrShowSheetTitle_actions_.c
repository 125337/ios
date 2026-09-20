// wcrShowSheetTitle:actions: @ 017d0024

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x20 bytes */

void WCRefineAISessionSettingsViewController::wcrShowSheetTitle_actions_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ID IVar6;
  long lVar7;
  ulong local_168;
  ulong local_160;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  undefined *local_f0;
  char *local_e8;
  undefined4 local_dc;
  char *local_d8;
  char *local_d0;
  ulong local_c8 [2];
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8[1] = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(local_c8 + 1,param_3);
  local_c8[0] = 0;
  _objc_storeStrong(local_c8,param_4);
  pcVar2 = "WCActionSheet";
  _objc_getClass();
  pcVar3 = "WCActionSheetItem";
  local_d0 = pcVar2;
  _objc_getClass();
  local_d8 = pcVar3;
  if ((local_d0 == (char *)0x0) || (pcVar3 == (char *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__OUS_g1__);
    local_dc = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setWcrSheetActions__026b5110,local_c8[0]);
    pcVar2 = local_d0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_e8 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar4;
    _memset(auStack_138,0,0x40);
    uVar1 = local_c8[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_160 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
    if (local_160 != 0) {
      lVar7 = *local_128;
      local_168 = 0;
      do {
        do {
          if (*local_128 - lVar7 != 0) {
            _objc_enumerationMutation(*local_128 - lVar7,uVar1);
          }
          puVar4 = local_f0;
          local_f8 = *(undefined8 *)(local_130 + local_168 * 8);
          pcVar2 = local_d8;
          _objc_alloc();
          uVar5 = local_f8;
          (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_title_0269d250);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_initWithTitle__0269d2f8);
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          (*(code *)PTR__objc_release_02578630)(uVar5);
          local_168 = local_168 + 1;
        } while (local_168 < local_160);
        local_160 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10
                  );
        local_168 = 0;
      } while (local_160 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_setValue_forKey__0269d300,local_f0,&cf_buttonTitleList);
    pcVar2 = local_e8;
    puVar4 = PTR_s_showInView__0269d310;
    IVar6 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,puVar4);
    (*(code *)PTR__objc_release_02578630)(IVar6);
    _objc_storeStrong(&local_f0);
    _objc_storeStrong(&local_e8,0);
    local_dc = 0;
  }
  _objc_storeStrong(local_c8);
  _objc_storeStrong(local_c8 + 1,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

