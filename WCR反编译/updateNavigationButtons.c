// updateNavigationButtons @ 019ffca4

/* Function Stack Size: 0x10 bytes */

void WCRefineFriendRelationResultListViewController::updateNavigationButtons(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined *local_78;
  byte local_69;
  ID local_68;
  byte local_59;
  ID local_58;
  undefined1 local_49;
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
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editingList_026bb590);
  if ((param_1 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_20 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1
              );
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    IVar4 = local_38;
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_59 = 0;
    local_69 = 0;
    bVar1 = false;
    if (IVar5 != 0) {
      IVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_selectedUserNames_026bb538);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      local_58 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      IVar6 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_items_0269e4b0);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = IVar5 == IVar6;
    }
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    (*(code *)PTR__objc_release_02578630)(IVar4);
    puVar3 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    local_49 = bVar1;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    IVar4 = local_38;
    local_78 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setEnabled__026ca938,IVar5 != 0);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    local_30 = local_48;
    local_28 = local_78;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,2
              );
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_48,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

