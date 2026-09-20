// FUN_01bc7694 @ 01bc7694

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01bc7694(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *local_108;
  undefined *local_f8;
  undefined *local_f0;
  double local_e0;
  double local_d8;
  undefined *local_b0;
  undefined *local_a0;
  undefined *local_90;
  undefined *local_80;
  double local_48;
  undefined *local_40;
  undefined *local_38;
  long local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  puVar5 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_38 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = 0.0;
  local_48 = 0.0;
  puVar5 = local_38;
  local_40 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_momentCornerEnabled_026a0148);
  if (((ulong)puVar5 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_momentCornerBorderSize_026a0180);
    local_d8 = local_e0;
    if (local_e0 < 0.0) {
      local_d8 = 0.0;
    }
    if (5.0 <= local_d8) {
      local_e0 = 5.0;
    }
    else {
      local_e0 = local_d8;
    }
    local_48 = local_e0;
    lVar7 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_userInterfaceStyle_026cabc8);
    bVar4 = false;
    bVar1 = false;
    bVar3 = false;
    bVar2 = false;
    if (lVar7 == 2) {
      local_80 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_momentCornerBorderColorDark_026a0190);
      _objc_retainAutoreleasedReturnValue();
      bVar4 = true;
      bVar1 = local_80 == (undefined *)0x0;
      local_f0 = local_80;
      if (bVar1) {
        local_90 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        local_f0 = local_90;
      }
      local_f8 = local_f0;
    }
    else {
      local_a0 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_momentCornerBorderColorLight_026a0188);
      _objc_retainAutoreleasedReturnValue();
      bVar3 = true;
      bVar2 = local_a0 == (undefined *)0x0;
      local_108 = local_a0;
      if (bVar2) {
        local_b0 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        local_108 = local_b0;
      }
      local_f8 = local_108;
    }
    _objc_storeStrong(&local_40,local_f8);
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_b0);
    }
    if (bVar3) {
      (*(code *)PTR__objc_release_02578630)(local_a0);
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    if (bVar4) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
  }
  FUN_01be35e0();
  uVar8 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_e0);
  (*(code *)PTR__objc_release_02578630)(uVar8);
  uVar8 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar8);
  uVar8 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_48);
  (*(code *)PTR__objc_release_02578630)(uVar8);
  puVar5 = local_40;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_CGColor_026ca470);
  uVar8 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar8);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

