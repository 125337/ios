// FUN_008096e8 @ 008096e8

void FUN_008096e8(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_30;
  undefined *local_28;
  byte local_19;
  undefined *local_18;
  
  local_19 = param_2;
  FUN_0080949c();
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  if ((local_19 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_touchTrailColorRed_026a8ab8);
    uVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_touchTrailColorGreen_026a8ac0);
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_touchTrailColorBlue_026a8ac8);
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_touchTrailColorAlpha_026a8ad0);
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,uVar2,uVar3,uVar4,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_touchTrailDarkColorHex_026a8ab0);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar1;
    FUN_0080a6c8();
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

