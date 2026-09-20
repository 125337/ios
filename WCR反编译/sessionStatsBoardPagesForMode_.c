// sessionStatsBoardPagesForMode: @ 02132984

/* Function Stack Size: 0x18 bytes */

ID WCRefineConfig::sessionStatsBoardPagesForMode_(ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_48;
  ID local_40;
  ID local_38;
  long_long local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_20;
  local_38 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_38;
  local_40 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKey__0269e048,IVar2);
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar1;
  if (IVar1 == 0) {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_18 = IVar1;
  }
  else {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_18 = IVar1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

