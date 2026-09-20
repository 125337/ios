// getTitleFromCellManager: @ 014ce1a8

/* Function Stack Size: 0x18 bytes */

ID WCRefineSearchManager::getTitleFromCellManager_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID local_58;
  ID local_50;
  undefined4 local_48;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_cellConfig);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar1;
  if (IVar1 == 0) {
    local_18 = 0;
    local_48 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_valueForKey__0269d128,&cf_leftConfig);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar1;
    if (IVar1 == 0) {
      local_18 = 0;
      local_48 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_valueForKey__0269d128,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      local_58 = IVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = 1;
      local_18 = IVar1;
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

