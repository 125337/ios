// capInsetsForAssetName: @ 00ebb6e0

/* Function Stack Size: 0x18 bytes */

UIEdgeInsets WCRefineBubbleCut::capInsetsForAssetName_(ID param_1,SEL param_2,ID param_3)

{
  UIEdgeInsets UVar1;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  double in_d3;
  undefined8 local_48;
  SEL local_40;
  ID local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  double local_18;
  
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_normalizedConfigInsets_026ab4c0);
  local_30 = in_d0;
  local_28 = in_d1;
  local_20 = in_d2;
  local_18 = in_d3;
  _objc_storeStrong(&local_48,0);
  UVar1.field1_0x8 = (double)local_28;
  UVar1.field0_0x0 = (double)local_30;
  UVar1.field2_0x10 = (double)local_20;
  UVar1.field3_0x18 = local_18;
  return UVar1;
}

