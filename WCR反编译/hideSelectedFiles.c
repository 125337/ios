// hideSelectedFiles @ 019a59bc

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerViewController::hideSelectedFiles(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  long lVar3;
  ulong local_140;
  ulong local_138;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  undefined *local_c0;
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
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_beN,
               &cf_HQb,&cf_nx_,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_WCRFileManagerState_026cf1c8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = puVar2;
    _memset(auStack_108,0,0x40);
    IVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_selectedPaths_026ba4d0);
    _objc_retainAutoreleasedReturnValue();
    local_138 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_138 != 0) {
      lVar3 = *local_f8;
      local_140 = 0;
      do {
        do {
          if (*local_f8 - lVar3 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar3,IVar1);
          }
          local_c8 = *(undefined8 *)(local_100 + local_140 * 8);
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_hidePath__026ba758,local_c8);
          local_140 = local_140 + 1;
        } while (local_140 < local_138);
        local_138 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10
                  );
        local_140 = 0;
      } while (local_138 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar2 = PTR_WCRFileDirSizeManager_026cf1d8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileDirSizeManager_026cf1d8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_exitSelectMode_026ba650);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_reload_026af6c8);
    _objc_storeStrong(&local_c0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

