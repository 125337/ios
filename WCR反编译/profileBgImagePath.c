// profileBgImagePath @ 020b1564

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::profileBgImagePath(ID param_1,SEL param_2)

{
  SEL SVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID local_40;
  ID local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_20;
  local_28 = param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  (*(code *)PTR__objc_release_02578630)(SVar1);
  IVar2 = local_30;
  FUN_0200dc18();
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_30;
  local_38 = IVar2;
  FUN_0200dd2c();
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar3;
  if (local_30 == 0) {
    _objc_storeStrong(&local_40,&::cf___);
    IVar3 = local_28;
    IVar2 = local_40;
    SVar1 = local_20;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_setObject_forKey__026ca9e8,IVar2);
    (*(code *)PTR__objc_release_02578630)(SVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  else {
    IVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,local_38);
    IVar3 = local_28;
    IVar2 = local_38;
    if ((IVar4 & 1) == 0) {
      SVar1 = local_20;
      _cmdString();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_setObject_forKey__026ca9e8,IVar2);
      (*(code *)PTR__objc_release_02578630)(SVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)();
    }
  }
  IVar2 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar2;
}

