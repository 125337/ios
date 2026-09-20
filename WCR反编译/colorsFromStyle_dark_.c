// colorsFromStyle:dark: @ 00f8db60

/* Function Stack Size: 0x1c bytes */

ID WCRefineGradientPalette::colorsFromStyle_dark_(ID param_1,SEL param_2,ID param_3,bool param_4)

{
  ID IVar1;
  ID IVar2;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_hexStopsFromStyle_dark__026acc98,local_28,param_4 & 1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_colorsFromHexStops__026acca0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar2;
}

