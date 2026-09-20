// createRGBTextField: @ 018f757c

/* Function Stack Size: 0x18 bytes */

ID WCRefineColorPickerController::createRGBTextField_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR__OBJC_CLASS___UITextField_026ce2a0;
  _objc_alloc_init();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setBorderStyle__026aa180,3);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setPlaceholder__0269e9c8,local_28);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setDelegate__026ca910,local_18);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setKeyboardType__026aec58,4);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setTextAlignment__026caa90,1);
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402c000000000000,*(undefined8 *)PTR__UIFontWeightRegular_02578158,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_monospacedSystemFontOfSize_weigh_026aa590);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_addInputAccessoryViewToTextField_026b8638,local_30);
  puVar1 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

