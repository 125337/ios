// selectContentColor @ 01892df4

/* Function Stack Size: 0x10 bytes */

void WCRefineChatAvatarProfileCardViewController::selectContentColor(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_18;
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_showColorPickerWithTitle_lightCo_026b3078,&cf_cker,puVar4,puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_28,0);
  return;
}

