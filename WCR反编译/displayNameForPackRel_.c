// displayNameForPackRel: @ 01086e38

/* Function Stack Size: 0x18 bytes */

ID WCRefineLocalEmoticonStore::displayNameForPackRel_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_58;
  bool local_41;
  ID local_40;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((IVar1 == 0) ||
     (IVar1 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf___all__),
     (IVar1 & 1) != 0)) {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_allDisplayName_026a3e20);
    _objc_retainAutoreleasedReturnValue();
    local_18 = IVar1;
  }
  else {
    IVar1 = local_30;
    FUN_01085b64();
    if ((IVar1 & 1) == 0) {
      IVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (IVar2 == 0) {
        local_58 = local_30;
      }
      else {
        local_58 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        local_40 = local_58;
      }
      local_41 = IVar2 != 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_58;
      if (local_41) {
        (*(code *)PTR__objc_release_02578630)(local_40);
      }
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    else {
      IVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_ungroupedDisplayName_026a1040);
      _objc_retainAutoreleasedReturnValue();
      local_18 = IVar1;
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

