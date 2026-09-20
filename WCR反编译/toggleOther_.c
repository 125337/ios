// toggleOther: @ 0184cb70

/* Function Stack Size: 0x18 bytes */

void WCRefineAvatarScaleSceneFilterViewController::toggleOther_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setToken_on__026b68b0,0,uVar2);
  _objc_storeStrong(&local_28,0);
  return;
}

