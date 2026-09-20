// FUN_01e0c7ec @ 01e0c7ec

void FUN_01e0c7ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_38 = 2;
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_30 = param_1;
  local_28 = param_2;
  local_20 = param_3;
  local_18 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,param_2,param_3,param_4,PTR_WCRefineHelper_026ce000,
             PTR_s_pluginPageTableWithFrame_style__026aa9b8,2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setAutoresizingMask__026ca878,0x12);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setEstimatedRowHeight__026ae4e0);
  (*(code *)PTR__objc_msgSend_02578628)(0x4048000000000000,local_40,PTR_s_setRowHeight__026a2638);
  uVar6 = 0;
  uVar3 = 0;
  uVar4 = 0x404c000000000000;
  uVar5 = 0;
  FUN_01e171bc();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,uVar4,uVar5,uVar6,local_40,PTR_s_setSeparatorInset__026a2628);
  puVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

