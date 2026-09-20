// refreshNavigationRightItems @ 01ab2ac8

/* Function Stack Size: 0x10 bytes */

void WCRGroupListViewController::refreshNavigationRightItems(ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  uint local_a0;
  byte local_9c;
  undefined *local_88;
  ID local_78;
  undefined *local_68;
  ID local_58;
  cfstringStruct *local_50;
  byte local_42;
  byte local_41;
  SEL local_40;
  ID local_38;
  ID local_30;
  ID local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = param_2;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editBarButtonItem_026bdd88);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 != 0) {
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_manageScope_026bdd90);
    local_9c = 0;
    if (IVar3 == 1) {
      IVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_editingAllGroups_026bdd80);
      local_9c = 0;
      if ((IVar3 & 1) == 0) {
        IVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_hasQuickGroupWithName_scope__026bdd98,&::cf__,0x80);
        local_9c = (byte)IVar3;
      }
    }
    local_41 = local_9c & 1;
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_manageScope_026bdd90);
    local_a0 = 0;
    if (IVar3 == 2) {
      IVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_editingAllGroups_026bdd80);
      local_a0 = 0;
      if ((IVar3 & 1) == 0) {
        IVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_hasQuickGroupWithName_scope__026bdd98,&cf__gmo_,0x40);
        local_a0 = (uint)IVar3;
      }
    }
    local_42 = (byte)local_a0 & 1;
    local_50 = (cfstringStruct *)0x0;
    if ((local_41 & 1) == 0) {
      if ((local_a0 & 1) != 0) {
        pcVar4 = &cf__gn_;
        FUN_01aa5574(&cf__gn_,0,local_38,PTR_s_showUnreadGroupSettingsMenu_026bdda8);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_50;
        local_50 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
    }
    else {
      pcVar4 = &::cf__;
      FUN_01aa5574(&::cf__,0,local_38,PTR_s_showAtMeGroupSettingsMenu_026bdda0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_50;
      local_50 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    bVar1 = local_50 == (cfstringStruct *)0x0;
    if (bVar1) {
      local_78 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_editBarButtonItem_026bdd88);
      _objc_retainAutoreleasedReturnValue();
      local_88 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_30 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30
                 ,1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      local_58 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_editBarButtonItem_026bdd88);
      _objc_retainAutoreleasedReturnValue();
      local_20 = local_50;
      local_68 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_28 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28
                 ,2);
      _objc_retainAutoreleasedReturnValue();
    }
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_88);
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_68);
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    _objc_storeStrong(&local_50,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

