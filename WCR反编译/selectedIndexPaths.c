// selectedIndexPaths @ 01b35198

/* Function Stack Size: 0x10 bytes */

ID WCRefineKeywordAlertKeywordsViewController::selectedIndexPaths(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 local_38;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar1;
  if (IVar1 == 0) {
    local_38 = *(ID *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_autoreleaseReturnValue();
  return local_38;
}

