// isCaptureWindow: @ 00fdf558

/* Function Stack Size: 0x18 bytes */

bool WCRefineIconNameCaptureSupport::isCaptureWindow_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___UIWindow_026cdf68;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIWindow_026cdf68,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_11 = 0;
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_accessibilityIdentifier_0269ec20);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_30;
    if ((uVar3 & 1) == 0) {
      puVar1 = PTR_WCRIconNameCaptureFloatWindow_026cec40;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRIconNameCaptureFloatWindow_026cec40,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      local_11 = (byte)uVar2 & 1;
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

