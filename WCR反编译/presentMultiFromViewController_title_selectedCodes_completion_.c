// presentMultiFromViewController:title:selectedCodes:completion: @ 010a52e0

/* Function Stack Size: 0x30 bytes */

void WCRefineMessageRepositoryPicker::presentMultiFromViewController_title_selectedCodes_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  long lVar7;
  ulong local_230;
  ulong local_228;
  cfstringStruct *local_200;
  long local_180;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  long local_138;
  undefined *local_130;
  undefined4 local_124;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  long local_100;
  cfstringStruct *local_f8;
  ulong local_f0;
  undefined8 local_e8;
  ID local_e0;
  undefined8 local_d8;
  ulong local_d0;
  cfstringStruct *local_c8;
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
  local_c8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_c8,param_4);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_5);
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_6);
  puVar3 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar4 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar3 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = local_c0;
    local_120 = PTR___NSConcreteStackBlock_02578660;
    local_118 = 0xc2000000;
    local_114 = 0;
    local_110 = FUN_010a5870;
    local_108 = &DAT_02581fc0;
    local_e0 = local_b0;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar5 = local_c8;
    local_100 = lVar6;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_d0;
    local_f8 = pcVar5;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_d8;
    local_f0 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = uVar1;
    _dispatch_async(puVar4,&local_120);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_124 = 1;
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_100,0);
  }
  else if (local_c0 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
    local_124 = 1;
  }
  else {
    puVar4 = PTR_WCRefineMessageRepositoryPickerViewController_026cecd0;
    _objc_alloc_init();
    pcVar5 = local_c8;
    local_130 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_200 = &cf_N__Nb;
    }
    else {
      local_200 = local_c8;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setTitle__0269cef0,local_200);
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setAllowsMultipleSelection__026ae558,1);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setSelectedCodes__026ae4b8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _memset(auStack_178,0,0x40);
    uVar2 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_228 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,0x10);
    if (local_228 != 0) {
      lVar6 = *local_168;
      local_230 = 0;
      do {
        do {
          if (*local_168 - lVar6 != 0) {
            _objc_enumerationMutation(*local_168 - lVar6,uVar2);
          }
          lVar7 = *(long *)(local_170 + local_230 * 8);
          local_138 = lVar7;
          FUN_010a2838();
          _objc_retainAutoreleasedReturnValue();
          local_180 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_length_0269cca0);
          if (lVar7 != 0) {
            puVar4 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_selectedCodes_026ae490);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar4);
          }
          _objc_storeStrong(&local_180,0);
          local_230 = local_230 + 1;
        } while (local_230 < local_228);
        local_228 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,0x10
                  );
        local_230 = 0;
      } while (local_228 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setMultiCompletion__026ae4a0,local_d8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_wcr_presentPicker_from__026ae560,local_130,local_c0);
    _objc_storeStrong(&local_130,0);
    local_124 = 0;
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

