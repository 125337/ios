// menuBackgroundImageFolder @ 020eed80

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::menuBackgroundImageFolder(ID param_1,SEL param_2)

{
  SEL SVar1;
  ID IVar2;
  ID IVar3;
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
  IVar2 = param_1;
  FUN_01fd868c();
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar2;
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_release_02578630)(SVar1);
  IVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf__);
  if ((IVar2 & 1) == 0) {
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (IVar2 == 0) {
      _objc_storeStrong(&local_30,&::cf__);
      IVar3 = local_28;
      IVar2 = local_30;
      SVar1 = local_20;
      _cmdString();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_setObject_forKey__026ca9e8,IVar2);
      (*(code *)PTR__objc_release_02578630)(SVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)();
    }
  }
  else {
    IVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_30;
    local_30 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar3 = local_28;
    IVar2 = local_30;
    SVar1 = local_20;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_setObject_forKey__026ca9e8,IVar2);
    (*(code *)PTR__objc_release_02578630)(SVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  IVar2 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar2;
}

