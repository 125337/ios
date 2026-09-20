// initWithLightHex:darkHex:callback: @ 018f32f4

/* Function Stack Size: 0x28 bytes */

ID WCRefineColorPickerController::initWithLightHex_darkHex_callback_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  ID *pIVar1;
  undefined8 **ppuVar2;
  cfstringStruct *local_80;
  cfstringStruct *local_70;
  undefined8 *local_48;
  undefined *local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID *local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = (ID *)param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_48 = local_18;
  local_18 = (ID *)0x0;
  ppuVar2 = &local_48;
  local_40 = PTR_WCRefineColorPickerController_026cfcc8;
  _objc_msgSendSuper2(ppuVar2,PTR_s_init_026ca6a8);
  local_18 = (ID *)ppuVar2;
  _objc_storeStrong(&local_18);
  if ((undefined8 **)local_18 != (undefined8 **)0x0) {
    if (local_28 == (cfstringStruct *)0x0) {
      local_70 = &cf__FFFFFF;
    }
    else {
      local_70 = local_28;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentLightHex__026b8550,local_70);
    if (local_30 == (cfstringStruct *)0x0) {
      local_80 = &cf__202020;
    }
    else {
      local_80 = local_30;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentDarkHex__026b8558,local_80);
    ppuVar2 = (undefined8 **)local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentLightHex_026b8560);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setInitialLightHex__026b8568);
    (*(code *)PTR__objc_release_02578630)(ppuVar2);
    ppuVar2 = (undefined8 **)local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentDarkHex_026b8570);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setInitialDarkHex__026b8578);
    (*(code *)PTR__objc_release_02578630)(ppuVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCallback__026b8580,local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setIsLightMode__026b8588,1);
    (*(code *)PTR__objc_msgSend_02578628)(0,local_18,PTR_s_setCurrentHue__026b8590);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentSaturation__026b8598);
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,local_18,PTR_s_setCurrentBrightness__026b85a0);
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,local_18,PTR_s_setCurrentAlpha__026b85a8);
  }
  pIVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return (ID)(undefined8 **)pIVar1;
}

