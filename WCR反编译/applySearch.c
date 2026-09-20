// applySearch @ 01c71974

/* Function Stack Size: 0x10 bytes */

void WCRefinePageBackgroundLibraryViewController::applySearch(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  ID local_e0;
  undefined *local_c0;
  byte local_b1;
  ID local_b0;
  byte local_a1;
  ID local_a0;
  byte local_91;
  undefined *local_90;
  byte local_81;
  ID *local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  ID local_58;
  byte local_49;
  ID local_48;
  ID local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchBar_026a2698);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  local_49 = 0;
  local_81 = 0;
  local_91 = 0;
  local_a1 = 0;
  local_b1 = 0;
  local_e0 = local_28;
  if (IVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_files_026c2670);
    _objc_retainAutoreleasedReturnValue();
    local_b1 = 1;
    local_b0 = local_e0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_files_026c2670);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_38;
    puVar2 = PTR__OBJC_CLASS___NSPredicate_026ce8f0;
    local_49 = 1;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_01c71e40;
    local_60 = &DAT_02589138;
    local_48 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = IVar1;
    local_81 = 1;
    local_80 = &local_58;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_predicateWithBlock__026ab6e0,&local_78);
    _objc_retainAutoreleasedReturnValue();
    local_91 = 1;
    local_90 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_filteredArrayUsingPredicate__026b0178);
    _objc_retainAutoreleasedReturnValue();
    local_a1 = 1;
    local_a0 = local_e0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_e0;
  if ((local_b1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_b0);
  }
  if ((local_a1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a0);
  }
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_multiSelect_026c25f0);
  if ((IVar1 & 1) == 0) {
    IVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (IVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,
                 _WCRPageBackgroundNoneToken);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObjectsFromArray__0269d540,local_40);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDisplayFiles__026c2678,local_c0);
      _objc_storeStrong(&local_c0,0);
      goto LAB_01c71db4;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDisplayFiles__026c2678,local_40);
LAB_01c71db4:
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_storeStrong(&local_40,0);
  if ((local_81 & 1) != 0) {
    _objc_storeStrong(local_80,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

