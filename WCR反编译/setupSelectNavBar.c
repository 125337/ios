// setupSelectNavBar @ 019a473c

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerViewController::setupSelectNavBar(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *local_128;
  undefined *local_c8;
  undefined *local_c0;
  byte local_b1;
  undefined *local_b0;
  byte local_a1;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  SEL local_78;
  ID local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRFileManagerState_026cf1c8;
  local_78 = param_2;
  local_70 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    IVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_hiddenSelectionMode_026ba538);
    local_a1 = 0;
    local_b1 = 0;
    local_128 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    if ((IVar3 & 1) == 0) {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_b1 = 1;
      local_b0 = local_128;
    }
    else {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_a1 = 1;
      local_a0 = local_128;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = local_128;
    if ((local_b1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_b0);
    }
    if ((local_a1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a0);
    }
    puVar1 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    IVar3 = local_70;
    local_c0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_hiddenSelectionMode_026ba538);
    if ((IVar3 & 1) == 0) {
      local_68 = local_98;
      local_60 = local_c0;
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_navigationItem_0269cf08);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    else {
      puVar1 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_58 = local_98;
      local_50 = local_c0;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_c8 = puVar1;
      local_48 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_navigationItem_0269cf08);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_c8,0);
    }
    _objc_storeStrong(&local_c0);
    _objc_storeStrong(&local_98,0);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar2 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    local_80 = puVar1;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar1 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    local_88 = puVar2;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = local_80;
    local_38 = local_88;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_90 = puVar1;
    local_30 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3
              );
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_90);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_80,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

