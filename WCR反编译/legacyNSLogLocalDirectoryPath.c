// legacyNSLogLocalDirectoryPath @ 0091ad3c

/* Function Stack Size: 0x10 bytes */

ID WCNavigationMonitor::legacyNSLogLocalDirectoryPath(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_50;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  IVar1 = 9;
  local_28 = param_2;
  local_20 = param_1;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_firstObject_0269d1f8);
  _objc_retainAutoreleasedReturnValue();
  local_50 = IVar1;
  if (IVar1 == 0) {
    local_38 = IVar1;
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_50;
  if (IVar1 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

