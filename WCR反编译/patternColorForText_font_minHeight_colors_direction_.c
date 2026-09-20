// patternColorForText:font:minHeight:colors:direction: @ 00f8ed80

/* Function Stack Size: 0x38 bytes */

ID WCRefineGradientPalette::patternColorForText_font_minHeight_colors_direction_
             (ID param_1,SEL param_2,ID param_3,ID param_4,double param_5,ID param_6,
             long_long param_7)

{
  ID IVar1;
  undefined8 local_40;
  double local_38;
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
  local_40 = 0;
  local_38 = param_5;
  _objc_storeStrong(&local_40,param_6);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,*(undefined8 *)PTR__CGSizeZero_025782f8,
             *(undefined8 *)(PTR__CGSizeZero_025782f8 + 8),local_18,
             PTR_s_patternColorForText_font_minHeig_026a7d78,local_28,local_30,local_40,param_7,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

