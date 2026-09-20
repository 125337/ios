// WCRefine_restoreNativeSearchBar @ 004cbf40

/* Function Stack Size: 0x10 bytes */

void WCRefineMainFrameSearchButton::WCRefine_restoreNativeSearchBar(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  double in_d0;
  double in_d3;
  double local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  ID local_80;
  ID local_78;
  double local_70;
  double local_48;
  ID local_40;
  ID local_38;
  undefined4 local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_getAssociatedObject(param_1,&DAT_028cac47);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  if (param_1 == 0) {
    local_2c = 1;
  }
  else {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefine_mainFrameTableView_026a4070);
    _objc_retainAutoreleasedReturnValue();
    local_38 = IVar3;
    if (IVar3 == 0) {
      local_2c = 1;
    }
    else {
      IVar3 = local_18;
      _objc_getAssociatedObject(local_18,&DAT_028cac48);
      _objc_retainAutoreleasedReturnValue();
      local_40 = IVar3;
      if (IVar3 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
        local_a8 = in_d3;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_doubleValue_026ca608);
        local_a8 = in_d0;
      }
      IVar3 = local_28;
      puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_48 = local_a8;
      if (local_a8 < 1.0) {
        local_48 = 44.0;
      }
      local_a0 = PTR___NSConcreteGlobalBlock_02578658;
      local_98 = 0xd0800000;
      local_94 = 0;
      local_90 = FUN_004cc1c8;
      local_88 = &DAT_0257abc0;
      (*(code *)PTR__objc_retain_02578638)();
      IVar2 = local_38;
      local_80 = IVar3;
      local_70 = local_48;
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_performWithoutAnimation__0269e7e0,&local_a0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_WCRefine_normalizeTopGapIfNeeded_026a4078,local_38);
      _objc_setAssociatedObject(local_18,&DAT_028cac47);
      _objc_setAssociatedObject(local_18,&DAT_028cac48,0,1);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_40,0);
      local_2c = 0;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

