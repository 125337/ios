// handleBackgroundBlurIntensityInput: @ 01a353d0

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineGeneralFunctionViewController::handleBackgroundBlurIntensityInput_
          (WCRefineGeneralFunctionViewController *this,ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  float in_s0;
  float local_34;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_floatValue_026a5b48);
  if (1.0 <= in_s0) {
    local_34 = in_s0;
    if (100.0 < in_s0) {
      local_34 = 100.0;
    }
  }
  else {
    local_34 = 1.0;
  }
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_34);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  pcVar3 = &cf_WCRefineBackgroundBlur;
  _NSClassFromString();
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  puVar2 = PTR_WCRefineBackgroundKeepAlive_026ceb10;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineBackgroundKeepAlive_026ceb10,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

