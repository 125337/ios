// FUN_002e6bac @ 002e6bac

void FUN_002e6bac(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  byte local_d1;
  undefined *local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = (undefined *)0x0;
  _objc_storeStrong(&local_b0,param_1);
  puVar2 = local_b0;
  puVar1 = PTR__OBJC_CLASS___WKWebViewConfiguration_026ce4f0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___WKWebViewConfiguration_026ce4f0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_c0 = 1;
  }
  else {
    puVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_urlSchemeHandlerForURLScheme__026a1d98,&cf_wcrefinefont);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    puVar2 = local_b0;
    if (puVar1 == (undefined *)0x0) {
      FUN_002e7930();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_setURLSchemeHandler_forURLScheme_026a1da0,puVar1,&cf_wcrefinefont);
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    puVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_userContentController_026a1da8);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___WKUserContentController_026ce500;
      _objc_alloc_init();
      puVar2 = local_c8;
      local_c8 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_setUserContentController__026a1db0,local_c8);
    }
    FUN_002e79a4();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
    if (puVar2 != (undefined *)0x0) {
      local_d1 = 0;
      _memset(auStack_120,0,0x40);
      puVar2 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_userScripts_026a1db8);
      _objc_retainAutoreleasedReturnValue();
      local_1a8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_1a8 != (undefined *)0x0) {
        lVar4 = *local_110;
        local_1b0 = (undefined *)0x0;
        do {
          do {
            if (*local_110 - lVar4 != 0) {
              _objc_enumerationMutation(*local_110 - lVar4,puVar2);
            }
            uVar5 = *(ulong *)(local_118 + (long)local_1b0 * 8);
            local_e0 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_source_026a1dc0);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar5);
            if ((uVar3 & 1) != 0) {
              local_d1 = 1;
              local_c0 = 2;
              goto LAB_002e703c;
            }
            local_1b0 = local_1b0 + 1;
          } while (local_1b0 < local_1a8);
          local_1a8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_1b0 = (undefined *)0x0;
        } while (local_1a8 != (undefined *)0x0);
      }
      local_c0 = 0;
LAB_002e703c:
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if ((local_d1 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___WKUserScript_026ce508;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_initWithSource_injectionTime_for_026a1dc8,local_d0,0,0);
        local_128 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addUserScript__026a1dd0,puVar2);
        _objc_storeStrong(&local_128,0);
      }
    }
    _objc_storeStrong(&local_d0);
    _objc_storeStrong(&local_c8,0);
    local_c0 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

