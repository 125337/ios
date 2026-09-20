// setVoicePackRelativePath: @ 020396cc

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setVoicePackRelativePath_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  SEL SVar3;
  long local_38;
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
  lVar2 = local_28;
  local_30 = IVar1;
  FUN_020394b4();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    _objc_storeStrong(&local_38,&cf_L);
  }
  IVar1 = local_30;
  lVar2 = local_38;
  SVar3 = local_20;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setObject_forKey__026ca9e8,lVar2);
  (*(code *)PTR__objc_release_02578630)(SVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

