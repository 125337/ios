// msgBannerMaxTextOverflowSuffix @ 020e22b0

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::msgBannerMaxTextOverflowSuffix(ID param_1,SEL param_2)

{
  SEL SVar1;
  ID IVar2;
  ID IVar3;
  ID local_38;
  SEL local_30;
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
  IVar2 = local_28;
  local_30 = SVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKey__0269e048,SVar1);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  FUN_01fd868c();
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (IVar2 == 0) {
    _objc_storeStrong(&local_38,&cf____);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setObject_forKey__026ca9e8,local_38,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  IVar2 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar2;
}

