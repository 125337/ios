// FUN_003cbcb0 @ 003cbcb0

undefined1  [16] FUN_003cbcb0(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  uVar2 = *(undefined8 *)PTR__CGSizeZero_025782f8;
  uVar3 = *(undefined8 *)(PTR__CGSizeZero_025782f8 + 8);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineOfficialTheme_026ce620,PTR_s_dynamicSizeForProperty_inRuleSet_026a3030,
             local_28,&cf__mainframe_table);
  local_20 = uVar2;
  local_18 = uVar3;
  _objc_storeStrong(&local_28,0);
  auVar1._8_8_ = local_18;
  auVar1._0_8_ = local_20;
  return auVar1;
}

