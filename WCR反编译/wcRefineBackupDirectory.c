// wcRefineBackupDirectory @ 00fac218

/* Function Stack Size: 0x10 bytes */

ID WCRefineHelper::wcRefineBackupDirectory(ID param_1,SEL param_2)

{
  ID IVar1;
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
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_stringByAppendingPathComponent__026cab30,&cf_WCRefine);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_stringByAppendingPathComponent__026cab30,&cf_WCRefineBackups);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

