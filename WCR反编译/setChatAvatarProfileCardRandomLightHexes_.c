// setChatAvatarProfileCardRandomLightHexes: @ 0200d4ec

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setChatAvatarProfileCardRandomLightHexes_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  SEL SVar3;
  undefined8 local_38;
  ID local_30;
  undefined8 local_28;
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
  uVar2 = local_28;
  local_30 = IVar1;
  FUN_0200cfdc(local_28,0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_30;
  SVar3 = local_20;
  local_38 = uVar2;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setObject_forKey__026ca9e8,uVar2);
  (*(code *)PTR__objc_release_02578630)(SVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

