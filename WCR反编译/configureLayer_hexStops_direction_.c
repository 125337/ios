// configureLayer:hexStops:direction: @ 00f8ec98

/* Function Stack Size: 0x28 bytes */

void WCRefineGradientPalette::configureLayer_hexStops_direction_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  IVar2 = local_18;
  uVar1 = local_28;
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_colorsFromHexStops__026acca0,local_30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_configureLayer_colors_direction__026accc0,uVar1,IVar3,param_5);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

