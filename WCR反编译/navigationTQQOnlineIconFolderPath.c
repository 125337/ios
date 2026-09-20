// navigationTQQOnlineIconFolderPath @ 02074e80

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::navigationTQQOnlineIconFolderPath(ID param_1,SEL param_2)

{
  SEL SVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID local_50;
  ID local_48;
  ID local_40;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_28;
  local_30 = param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  (*(code *)PTR__objc_release_02578630)(SVar1);
  IVar2 = local_38;
  FUN_0200dc18();
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_38;
  local_40 = IVar2;
  FUN_0200dd2c();
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar3;
  if ((local_38 != 0) &&
     (IVar4 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,local_40),
     IVar3 = local_30, IVar2 = local_40, (IVar4 & 1) == 0)) {
    SVar1 = local_28;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_setObject_forKey__026ca9e8,IVar2);
    (*(code *)PTR__objc_release_02578630)(SVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  if ((local_48 == 0) ||
     (IVar2 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
     local_18 = local_48, IVar2 == 0)) {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getTQQOnlineIconBasePath_026c1e18);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_30;
    IVar3 = local_50;
    FUN_0200dc18();
    _objc_retainAutoreleasedReturnValue();
    SVar1 = local_28;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setObject_forKey__026ca9e8,IVar3);
    (*(code *)PTR__objc_release_02578630)(SVar1);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    IVar2 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar2;
    _objc_storeStrong(&local_50,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

