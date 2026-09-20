// refreshToolbar @ 019ff8f8

/* Function Stack Size: 0x10 bytes */

void WCRefineFriendRelationResultListViewController::refreshToolbar(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  SEL local_50;
  ID local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = param_2;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_updateNavigationButtons_026bb518);
  IVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_editingList_026bb590);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setToolbarItems__026bb598,0);
    IVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar3 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    local_58 = puVar2;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar2 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    local_60 = puVar3;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    IVar1 = local_48;
    local_68 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_selectedUserNames_026bb538);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_70 = &cf_Rd_YS;
    if (IVar4 == 0) {
      local_70 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar2 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = local_60;
    local_38 = local_58;
    local_30 = local_68;
    local_28 = local_58;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_78 = puVar2;
    local_20 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,5
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setToolbarItems__026bb598);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

