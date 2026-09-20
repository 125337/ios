// refreshNavButtons @ 01b6047c

/* Function Stack Size: 0x10 bytes */

void WCRefineLocalEmoticonLibraryViewController::refreshNavButtons(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  ID local_70;
  SEL local_68;
  ID local_60;
  ID local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  ID local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_68 = param_2;
  local_60 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_officialBackItemWithAction__026bf898,PTR_s_onOfficialBack_026bf890);
  _objc_retainAutoreleasedReturnValue();
  local_70 = param_1;
  if ((*(byte *)(local_60 + (long)_exportSelectMode) & 1) != 0) {
    puVar5 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    local_38 = param_1;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2
              );
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar1 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    local_50 = puVar5;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar2 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    local_48 = puVar1;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,3
              );
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_refreshTitle_026ab820);
    goto LAB_01b6094c;
  }
  IVar4 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_halfSheetAppearance_026bf7d8);
  if ((IVar4 & 1) == 0) {
LAB_01b60838:
    local_58 = local_70;
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,1
              );
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  else {
    IVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isRootLevel_026bf878);
    if ((IVar4 & 1) == 0) goto LAB_01b60838;
    IVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  IVar4 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_navigationItem_0269cf08);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_refreshTitle_026ab820);
LAB_01b6094c:
  _objc_storeStrong(&local_70,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

