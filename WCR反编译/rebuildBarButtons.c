// rebuildBarButtons @ 01be0294

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsCacheKeepUsersViewController::rebuildBarButtons(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  long local_e0;
  ID local_a8;
  undefined *local_a0;
  byte local_91;
  ID local_90;
  byte local_81;
  ID local_80;
  undefined1 local_72;
  byte local_71;
  ID local_70;
  byte local_61;
  ID local_60;
  long local_58;
  undefined *local_50;
  SEL local_48;
  ID local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar3 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
  local_48 = param_2;
  local_40 = param_1;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_50 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemRedColor_0269ee10);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setTintColor__026caab0);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  IVar5 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_allUsernames_026c0920);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar7 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_keepUsernames_026c0928);
  _objc_retainAutoreleasedReturnValue();
  IVar8 = IVar7;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_61 = 0;
  local_71 = 0;
  if (IVar8 < IVar6) {
    IVar6 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_allUsernames_026c0920);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    IVar8 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_keepUsernames_026c0928);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 1;
    local_70 = IVar8;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_e0 = IVar6 - IVar8;
  }
  else {
    local_e0 = 0;
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  (*(code *)PTR__objc_release_02578630)(IVar7);
  (*(code *)PTR__objc_release_02578630)(IVar5);
  local_58 = local_e0;
  IVar5 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isLoading_026ae188);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_setEnabled__026ca938,(IVar5 & 1) == 0 && local_58 != 0);
  IVar5 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_allUsernames_026c0920);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_81 = 0;
  local_91 = 0;
  bVar2 = false;
  if (IVar6 != 0) {
    IVar6 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_keepUsernames_026c0928);
    _objc_retainAutoreleasedReturnValue();
    local_81 = 1;
    local_80 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    IVar7 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_allUsernames_026c0920);
    _objc_retainAutoreleasedReturnValue();
    local_91 = 1;
    local_90 = IVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar2 = IVar7 <= IVar6;
  }
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  (*(code *)PTR__objc_release_02578630)(IVar5);
  puVar3 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
  local_72 = bVar2;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar5 = local_40;
  local_a0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isLoading_026ae188);
  bVar2 = false;
  bVar1 = (IVar5 & 1) == 0;
  if (bVar1) {
    local_a8 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_allUsernames_026c0920);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar2 = IVar5 != 0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setEnabled__026ca938,bVar2);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_a8);
  }
  local_38 = local_50;
  local_30 = local_a0;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_navigationItem_0269cf08);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

