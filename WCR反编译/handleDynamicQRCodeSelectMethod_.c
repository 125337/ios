// handleDynamicQRCodeSelectMethod: @ 01f3463c

/* Function Stack Size: 0x18 bytes */

void WCRefineUIBeautifyViewController::handleDynamicQRCodeSelectMethod_
               (ID param_1,SEL param_2,SEL param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID local_48;
  uint local_3c;
  ID local_38;
  SEL local_30;
  SEL local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_18;
  local_30 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_qrCodeSelectMethodMap_026c8900);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (IVar1 != 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_qrCodeBeautifyBasePath_026c88e0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_activateQRCodeImageAtPath_toast__026c8910,local_48,&cf__RbcN_x_Pg);
    _objc_storeStrong(&local_48,0);
  }
  local_3c = (uint)(IVar1 == 0);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

