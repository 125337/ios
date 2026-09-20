// wcrPersonaAtGroup:index: @ 017c5748

/* Function Stack Size: 0x20 bytes */

ID WCRefineAIPersonaLibraryViewController::wcrPersonaAtGroup_index_
             (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4)

{
  unsigned_long_long uVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID local_88;
  bool local_49;
  ID local_48;
  ID local_40;
  unsigned_long_long local_38;
  unsigned_long_long local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_38 = param_4;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_groups_026a1048);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (param_3 < IVar2) {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_groups_026a1048);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    uVar1 = local_38;
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
    if (IVar2 <= uVar1) {
      local_88 = 0;
    }
    else {
      local_88 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectAtIndexedSubscript__0269cc78,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_88;
    }
    local_49 = IVar2 > uVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_88;
    if (local_49) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    _objc_storeStrong(&local_40,0);
  }
  else {
    local_18 = 0;
  }
  _objc_autoreleaseReturnValue();
  return local_18;
}

