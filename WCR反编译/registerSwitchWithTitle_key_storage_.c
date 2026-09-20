// registerSwitchWithTitle:key:storage: @ 0176f040

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

void __thiscall
WCRefinePluginHubManager::registerSwitchWithTitle_key_storage_
          (WCRefinePluginHubManager *this,ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long local_240;
  ulong local_1a8;
  ulong local_1a0;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  ulong local_110;
  byte local_102;
  byte local_101;
  undefined *local_100;
  long local_f8;
  long local_f0;
  undefined4 local_e4;
  long local_e0 [2];
  long local_d0;
  long local_c8;
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
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_5);
  _CFAbsoluteTimeGetCurrent();
  lVar7 = local_c8;
  FUN_0176d368();
  _objc_retainAutoreleasedReturnValue();
  local_e0[0] = lVar7;
  (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_length_0269cca0);
  if (lVar7 == 0) {
    local_e4 = 1;
  }
  else {
    lVar7 = local_c0;
    FUN_0176d368();
    _objc_retainAutoreleasedReturnValue();
    local_f0 = lVar7;
    (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_length_0269cca0);
    if (lVar7 == 0) {
      _objc_storeStrong(&local_f0,local_e0[0]);
    }
    lVar7 = local_d0;
    FUN_0176f7a0();
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_b0;
    local_100 = (undefined *)0x0;
    local_101 = 0;
    local_102 = 0;
    local_f8 = lVar7;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(IVar2);
    _memset(auStack_150,0,0x40);
    IVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_plugins_026b43a8);
    _objc_retainAutoreleasedReturnValue();
    local_1a0 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1a0 != 0) {
      lVar7 = *local_140;
      local_1a8 = 0;
      do {
        do {
          if (*local_140 - lVar7 != 0) {
            _objc_enumerationMutation(*local_140 - lVar7,IVar3);
          }
          uVar8 = *(ulong *)(local_148 + local_1a8 * 8);
          local_110 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isController_026b1a20);
          if ((uVar8 & 1) == 0) {
            uVar8 = local_110;
            (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_key_026a7380);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar8);
            if ((uVar4 & 1) != 0) {
              uVar8 = local_110;
              (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_storage_026b1a28);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar8;
              FUN_0176f7a0();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar4);
              (*(code *)PTR__objc_release_02578630)(uVar8);
              if ((uVar5 & 1) != 0) {
                _objc_storeStrong(&local_100,local_110);
                uVar8 = local_110;
                (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_title_0269d250);
                _objc_retainAutoreleasedReturnValue();
                uVar4 = uVar8;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(uVar8);
                if ((uVar4 & 1) == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_setTitle__0269cef0,local_f0)
                  ;
                  local_102 = 1;
                }
                local_e4 = 2;
                goto LAB_0176f4e4;
              }
            }
          }
          local_1a8 = local_1a8 + 1;
        } while (local_1a8 < local_1a0);
        local_1a0 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10
                  );
        local_1a8 = 0;
      } while (local_1a0 != 0);
    }
    local_e4 = 0;
LAB_0176f4e4:
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if (local_100 == (undefined *)0x0) {
      puVar6 = PTR_WCRefinePluginHubItem_026cee50;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefinePluginHubItem_026cee50,PTR_s_new_0269d288);
      puVar1 = local_100;
      local_100 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setTitle__0269cef0,local_f0);
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setKey__026b43f0,local_e0[0]);
      lVar7 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
      if (lVar7 == 0) {
        local_240 = 0;
      }
      else {
        local_240 = local_f8;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setStorage__026b43f8,local_240);
      IVar3 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_plugins_026b43a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      local_101 = 1;
      local_102 = 1;
    }
    _objc_sync_exit(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if ((local_101 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_inheritCustomizationIfNeededForP_026b43d0,local_100);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_markSessionRegistrationForPlugin_026b43d8,local_100);
    if ((local_102 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_scheduleRegistryPublishIfNeeded_026b43e0)
      ;
    }
    _objc_storeStrong(&local_100);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_f0,0);
    local_e4 = 0;
  }
  _objc_storeStrong(local_e0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

