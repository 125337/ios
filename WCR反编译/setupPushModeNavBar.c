// setupPushModeNavBar @ 01f84ce4

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackPickerViewController::setupPushModeNavBar(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  undefined *local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pageSheetMode_026c9788);
  if ((IVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar4 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    local_28 = puVar3;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_20 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28,2
              );
    _objc_retainAutoreleasedReturnValue();
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_presentingViewController_026a0db0);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    if (IVar2 != 0) {
      IVar6 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      IVar7 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar8 = IVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = IVar8 == param_1;
      (*(code *)PTR__objc_release_02578630)(IVar8);
      (*(code *)PTR__objc_release_02578630)(IVar7);
      (*(code *)PTR__objc_release_02578630)(IVar6);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (bVar1) {
      puVar3 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationItem_0269cf08);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(param_1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

