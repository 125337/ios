// setToDoCardWebRuntimeStorage: @ 021709ac

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setToDoCardWebRuntimeStorage_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  SEL SVar3;
  long local_70;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  ID local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  if (local_28 == 0) {
    local_70 = *(long *)PTR____NSDictionary0___02578288;
  }
  else {
    local_70 = local_28;
  }
  local_60 = PTR___NSConcreteGlobalBlock_02578658;
  local_58 = 0xd0800000;
  local_54 = 0;
  local_50 = FUN_02170bdc;
  local_48 = &DAT_02579a30;
  local_38 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_60);
  IVar1 = local_30;
  puVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
  SVar3 = local_20;
  FUN_0216dcbc();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setObject_forKey__026ca9e8,puVar2);
  (*(code *)PTR__objc_release_02578630)(SVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

