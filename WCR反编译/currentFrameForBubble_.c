// currentFrameForBubble: @ 00ff4128

/* Function Stack Size: 0x18 bytes */

CGRect WCRefineKeywordAlertDanmakuPresenter::currentFrameForBubble_
                 (ID param_1,SEL param_2,ID param_3)

{
  CGRect CVar1;
  long lVar2;
  long lVar3;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  double in_d3;
  long local_58;
  undefined4 local_4c;
  long local_48;
  SEL local_40;
  ID local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  double dStack_18;
  
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  if (local_48 == 0) {
    uStack_28 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 8);
    local_30 = *(undefined8 *)PTR__CGRectZero_025782f0;
    dStack_18 = *(double *)(PTR__CGRectZero_025782f0 + 0x18);
    local_20 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10);
    local_4c = 1;
  }
  else {
    lVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_58 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    if (local_58 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_frame_026ca640);
      local_30 = in_d0;
      uStack_28 = in_d1;
      local_20 = in_d2;
      dStack_18 = in_d3;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_frame_026ca640);
      local_30 = in_d0;
      uStack_28 = in_d1;
      local_20 = in_d2;
      dStack_18 = in_d3;
    }
    local_4c = 1;
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48,0);
  CVar1.field0_0x0.field1_0x8 = (double)uStack_28;
  CVar1.field0_0x0.field0_0x0 = (double)local_30;
  CVar1.field1_0x10.field0_0x0 = (double)local_20;
  CVar1.field1_0x10.field1_0x8 = dStack_18;
  return CVar1;
}

