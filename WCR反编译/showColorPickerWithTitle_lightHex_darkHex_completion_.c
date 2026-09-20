// showColorPickerWithTitle:lightHex:darkHex:completion: @ 01e4fff4

/* Function Stack Size: 0x30 bytes */

void WCRefineTelegramGroupingViewController::showColorPickerWithTitle_lightHex_darkHex_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_c0;
  cfstringStruct *local_b0;
  undefined *local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineColorPickerController_026ceed8;
  _objc_alloc();
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_b0 = &cf__00000000;
  }
  else {
    local_b0 = local_40;
  }
  pcVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  local_60 = local_50;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_c0 = &cf__00000000;
  }
  else {
    local_c0 = local_48;
  }
  local_80 = PTR___NSConcreteStackBlock_02578660;
  local_78 = 0xc2000000;
  local_74 = 0;
  local_70 = FUN_01e50288;
  local_68 = &DAT_02586c28;
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_initWithLightHex_darkHex_callbac_026b30c8,local_b0,local_c0,&local_80);
  local_58 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTitle__0269cef0,local_38);
  puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_88 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_presentViewController_animated_c_0269d2b0,puVar1,1);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

