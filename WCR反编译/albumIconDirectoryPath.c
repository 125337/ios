// albumIconDirectoryPath @ 01108498

/* Function Stack Size: 0x10 bytes */

ID WCRefinePluginIconCatalog::albumIconDirectoryPath(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ID local_48;
  ID local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  undefined8 local_20;
  long *local_18;
  
  IVar1 = 5;
  local_30 = param_2;
  local_28 = param_1;
  _NSSearchPathForDirectoriesInDomains(5,1,1);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_stringByAppendingPathComponent__026cab30,
             &cf_Preferences_WCRefine_SuperFloat_icon);
  _objc_retainAutoreleasedReturnValue();
  local_68 = PTR___NSConcreteGlobalBlock_02578658;
  local_60 = 0xd0800000;
  local_5c = 0;
  local_58 = FUN_01108628;
  local_50 = &DAT_0257a9d0;
  local_40 = IVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = &DAT_028e3518;
  local_20 = 0;
  local_48 = IVar2;
  _objc_storeStrong(&local_20,&local_68);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20);
  IVar2 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return IVar2;
}

