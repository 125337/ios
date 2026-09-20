// nsLogLocalDirectoryPath @ 0091aba0

/* Function Stack Size: 0x10 bytes */

ID WCNavigationMonitor::nsLogLocalDirectoryPath(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_58;
  ID local_48;
  byte local_39;
  ID local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  IVar1 = 9;
  local_20 = param_2;
  local_18 = param_1;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_firstObject_0269d1f8);
  _objc_retainAutoreleasedReturnValue();
  local_39 = 0;
  local_58 = IVar1;
  if (IVar1 == 0) {
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_58;
  }
  local_39 = IVar1 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_58;
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_stringByAppendingPathComponent__026cab30,&cf_WCRefine);
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_stringByAppendingPathComponent__026cab30,&cf__g0We_);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

