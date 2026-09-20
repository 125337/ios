// sessionStatsTitleAlignForMode: @ 02133430

/* Function Stack Size: 0x18 bytes */

long_long WCRefineConfig::sessionStatsTitleAlignForMode_(ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
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
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_20;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_38;
  local_40 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKey__0269e048,IVar1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar2 == 0) {
    local_18 = 0;
  }
  else {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    IVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKey__0269e048,local_40);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_clampedSessionStatsTitleAlign__026ca410,IVar3)
    ;
    local_18 = IVar1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return local_18;
}

