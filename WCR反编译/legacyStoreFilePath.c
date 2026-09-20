// legacyStoreFilePath @ 01ad2a90

/* Function Stack Size: 0x10 bytes */

ID WCRefineGroupManager::legacyStoreFilePath(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID local_58;
  ID local_40;
  byte local_31;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  IVar1 = 9;
  local_20 = param_2;
  local_18 = param_1;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_31 = 0;
  local_58 = IVar2;
  if (IVar2 == 0) {
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_58;
  }
  local_31 = IVar2 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_58;
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_stringByAppendingPathComponent__026cab30,&cf_WCRefine_Groups);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_stringByAppendingPathComponent__026cab30,&cf_groups_json);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar2;
}

