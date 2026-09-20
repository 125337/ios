// replyMaxCharsControlView @ 017bff04

/* Function Stack Size: 0x10 bytes */

ID WCRefineAIFeatureViewController::replyMaxCharsControlView(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 local_48;
  undefined8 local_40;
  ID local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_30 = 0;
  puVar1 = PTR_WCRefineAIStore_026ce048;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_40 = local_28;
  local_48 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_wcrMaxCharsControlViewValue_slid_026b4d90,puVar2,
             PTR_s_handleReplyMaxCharsSliderChanged_026b4d80,
             PTR_s_handleReplyMaxCharsValueTapped_026b4d88,&local_40,&local_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_28,local_40);
  _objc_storeStrong(&local_30,local_48);
  local_38 = param_1;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setReplyMaxCharsSlider__026b4d98,local_28);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_setReplyMaxCharsValueButton__026b4da0,local_30);
  IVar3 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar3;
}

