// FUN_00777e3c @ 00777e3c

void FUN_00777e3c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  dispatch_time_t dVar5;
  long lVar6;
  uint local_6c;
  long local_28;
  long local_20;
  long local_18;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 1;
  lVar6 = param_1 + 0x38;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  lVar1 = lVar6;
  FUN_00777630();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_release_02578630)(lVar6);
  lVar6 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  local_6c = 0;
  if (lVar6 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_6c = (uint)puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  if ((local_6c & 1) == 0) {
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) < 0x28) {
      dVar5 = _dispatch_time(0,500000000);
      puVar2 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_after(dVar5,puVar2,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28))
      ;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else {
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar4 = *(ulong *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_respondsToSelector__026ca818,PTR_s_privateHideToast_026a7f90);
        if ((uVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x20),PTR_s_performSelector__026ca7b8,
                     PTR_s_privateHideToast_026a7f90);
        }
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_N_eHQp);
    }
  }
  else {
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_respondsToSelector__026ca818,PTR_s_privateHideToast_026a7f90);
      if ((uVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x20),PTR_s_performSelector__026ca7b8,
                   PTR_s_privateHideToast_026a7f90);
      }
    }
    lVar6 = param_1 + 0x40;
    _objc_loadWeakRetained();
    puVar2 = PTR_s_WCRefine_checkAndImportSuperFloa_026a7f70;
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained();
    FUN_0077717c(lVar6,puVar2,param_1,local_28);
    (*(code *)PTR__objc_release_02578630)(param_1);
    (*(code *)PTR__objc_release_02578630)(lVar6);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

