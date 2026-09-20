// snapshotReport @ 01db2cdc

/* Function Stack Size: 0x10 bytes */

ID WCRefineSessionStatsBoardView::snapshotReport(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double in_d2;
  double in_d3;
  ID local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  double local_90;
  byte local_81;
  ID local_80;
  undefined4 local_74;
  double local_50;
  double dStack_48;
  ID local_40;
  SEL local_38;
  ID local_30;
  ID local_28;
  
  local_38 = param_2;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_layoutIfNeeded_026ca790);
  IVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_content_026a4a90);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_bounds_026ca548);
  if ((in_d2 < 8.0) || (in_d3 < 8.0)) {
    local_28 = 0;
    local_74 = 1;
  }
  else {
    IVar1 = local_40;
    local_50 = in_d2;
    dStack_48 = in_d3;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_backgroundColor_026ca518);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_40;
    local_80 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isOpaque_0269f438);
    local_81 = (byte)IVar2;
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setOpaque__026ca9f8,0);
    puVar3 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_90 = in_d3;
    if (in_d3 < 3.0) {
      local_90 = 3.0;
    }
    uVar4 = 0;
    _UIGraphicsBeginImageContextWithOptions(local_50,dStack_48,local_90);
    _UIGraphicsGetCurrentContext();
    uVar6 = 0;
    uVar5 = 0;
    local_98 = uVar4;
    FUN_01d8ec14();
    local_b8 = uVar5;
    local_b0 = uVar6;
    _CGContextClearRect(uVar5,uVar6,local_50,dStack_48,uVar4);
    IVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)();
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    local_c0 = IVar1;
    _UIGraphicsEndImageContext();
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setBackgroundColor__026ca888,local_80);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setOpaque__026ca9f8,local_81 & 1);
    IVar1 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = IVar1;
    local_74 = 1;
    _objc_storeStrong(&local_c0);
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return local_28;
}

