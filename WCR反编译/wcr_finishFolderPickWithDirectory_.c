// wcr_finishFolderPickWithDirectory: @ 01f7b834

/* Function Stack Size: 0x18 bytes */

void WCRefineVoicePackManagerViewController::wcr_finishFolderPickWithDirectory_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong local_1c0;
  ulong local_1b8;
  undefined *local_190;
  undefined4 local_188;
  undefined4 local_184;
  code *local_180;
  undefined *local_178;
  undefined8 local_170;
  ID local_168;
  undefined4 local_15c;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  undefined8 local_138;
  ID local_130;
  ID local_128;
  ID local_120;
  ulong local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  ID local_c8;
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
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_folderPickCompletion_026c99c8);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = IVar2;
  _memset(auStack_110,0,0x40);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_1b8 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_1b8 != 0) {
    lVar6 = *local_100;
    local_1c0 = 0;
    do {
      do {
        if (*local_100 - lVar6 != 0) {
          _objc_enumerationMutation(*local_100 - lVar6,IVar3);
        }
        uVar7 = *(ulong *)(local_108 + local_1c0 * 8);
        puVar4 = PTR_WCRefineVoicePackManagerViewController_026cea28;
        local_d0 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineVoicePackManagerViewController_026cea28,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar4);
        uVar5 = local_d0;
        if ((uVar7 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_118 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_folderPickMode_026c9870);
          if ((uVar5 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_118,PTR_s_setFolderPickCompletion__026c9860,0);
          }
          _objc_storeStrong(&local_118,0);
        }
        local_1c0 = local_1c0 + 1;
      } while (local_1c0 < local_1b8);
      local_1b8 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_1c0 = 0;
    } while (local_1b8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setFolderPickCompletion__026c9860,0);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  local_128 = 0;
  IVar3 = local_b0;
  local_120 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  if (IVar2 == 0) {
    IVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_presentingViewController_026a0db0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar2 != 0) {
      _objc_storeStrong(&local_128,local_b0);
    }
  }
  else {
    IVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_128;
    local_128 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  IVar3 = local_c8;
  IVar2 = local_128;
  if (local_128 == 0) {
    IVar2 = local_120;
    (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_viewControllers_0269e348);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (IVar3 < 2) {
      if (local_c8 != 0) {
        (**(code **)(local_c8 + 0x10))(local_c8,local_c0);
      }
      local_15c = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_popViewControllerAnimated__0269ede0,1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar4 = PTR___dispatch_main_q_02578680;
      if (local_c8 != 0) {
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        IVar2 = local_c8;
        local_190 = PTR___NSConcreteStackBlock_02578660;
        local_188 = 0xc2000000;
        local_184 = 0;
        local_180 = FUN_01f7bf40;
        local_178 = &DAT_0257ca68;
        (*(code *)PTR__objc_retain_02578638)();
        uVar1 = local_c0;
        local_168 = IVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_170 = uVar1;
        _dispatch_async(puVar4,&local_190);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        _objc_storeStrong(&local_170);
        _objc_storeStrong(&local_168,0);
      }
      local_15c = 1;
    }
  }
  else {
    local_158 = PTR___NSConcreteStackBlock_02578660;
    local_150 = 0xc2000000;
    local_14c = 0;
    local_148 = FUN_01f7bef0;
    local_140 = &DAT_0257ca68;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_c0;
    local_130 = IVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_138 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,&local_158);
    local_15c = 1;
    _objc_storeStrong(&local_138);
    _objc_storeStrong(&local_130,0);
  }
  _objc_storeStrong(&local_128);
  _objc_storeStrong(&local_120,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

