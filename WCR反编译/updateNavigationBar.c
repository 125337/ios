// updateNavigationBar @ 01fa7bc8

/* Function Stack Size: 0x10 bytes */

void WCRefineWatermarkLibraryViewController::updateNavigationBar(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  SEL local_40;
  ID local_38;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = param_2;
  local_38 = param_1;
  if ((*(byte *)(param_1 + (long)_isExportSelectMode) & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setupNavigationBar_026aa100);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_48 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_redColor_026a8a38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setTintColor__026caab0);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar1 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar2 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    local_50 = puVar1;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_28 = local_50;
    local_20 = local_48;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_58 = puVar2;
    local_30 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,3
              );
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

