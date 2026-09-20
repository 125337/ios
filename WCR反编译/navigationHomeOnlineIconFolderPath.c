// navigationHomeOnlineIconFolderPath @ 0207028c

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::navigationHomeOnlineIconFolderPath(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  ID local_58;
  ID local_50;
  ID local_48;
  ID local_40;
  cfstringStruct *local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = &cf_tqqOnlineIconFolderPath;
  local_30 = param_1;
  FUN_0206e96c();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_30;
  local_38 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKey__0269e048,pcVar1);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar2;
  FUN_0200dc18();
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_40;
  local_48 = IVar2;
  FUN_0200dd2c();
  _objc_retainAutoreleasedReturnValue();
  local_50 = IVar3;
  if ((local_40 != 0) &&
     (IVar2 = local_40,
     (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_48),
     (IVar2 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setObject_forKey__026ca9e8,local_48,local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  if ((local_50 == 0) ||
     (IVar2 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
     local_18 = local_50, IVar2 == 0)) {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getTQQOnlineIconBasePath_026c1e18);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_58 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_30;
    IVar3 = local_58;
    FUN_0200dc18();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setObject_forKey__026ca9e8,IVar3,local_38);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    IVar2 = local_58;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar2;
    _objc_storeStrong(&local_58,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

