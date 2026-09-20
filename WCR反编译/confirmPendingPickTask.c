// confirmPendingPickTask @ 019a5218

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerViewController::confirmPendingPickTask(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong local_1c0;
  ulong local_1b8;
  ID local_190;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  long local_d8;
  ID local_d0;
  undefined *local_c8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedPaths_026ba4d0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (IVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf__eQ,
               &cf_HQb_eQveNbeN9Y0,&cf_nx_,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    IVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_selectedPaths_026ba4d0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_c0 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar4 = PTR_WCRFileManagerState_026cf1c8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR_WCRFileManagerState_026cf1c8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setSelectMode__026ba728,0);
    IVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_selectedPaths_026ba4d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_hideSelectBar_026ba730);
    IVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_190 = IVar2;
    if (IVar2 == 0) {
      local_190 = *(ID *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = local_190;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    local_d8 = 0;
    _memset(auStack_120,0,0x40);
    IVar1 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b8 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_1b8 != 0) {
      lVar7 = *local_110;
      local_1c0 = 0;
      do {
        do {
          if (*local_110 - lVar7 != 0) {
            _objc_enumerationMutation(*local_110 - lVar7,IVar1);
          }
          uVar8 = *(ulong *)(local_118 + local_1c0 * 8);
          local_e0 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar8);
          if ((uVar6 & 1) != 0) {
            _objc_storeStrong(&local_d8,local_e0);
            goto LAB_019a56e4;
          }
          local_1c0 = local_1c0 + 1;
        } while (local_1c0 < local_1b8);
        local_1b8 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_1c0 = 0;
      } while (local_1b8 != 0);
    }
LAB_019a56e4:
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if (local_d8 == 0) {
      IVar1 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_unsafeClaimAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    else {
      IVar1 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_unsafeClaimAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    if (local_c8 != (undefined *)0x0) {
      (**(code **)(local_c8 + 0x10))(local_c8,local_c0);
    }
    _objc_storeStrong(&local_d8);
    _objc_storeStrong(&local_d0,0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_c0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

