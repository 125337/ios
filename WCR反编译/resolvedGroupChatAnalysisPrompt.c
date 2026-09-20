// resolvedGroupChatAnalysisPrompt @ 009b9a3c

/* Function Stack Size: 0x10 bytes */

ID WCRefineAIStore::resolvedGroupChatAnalysisPrompt(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_50;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_groupChatAnalysisPrompt_026aad58);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  FUN_009af3fc();
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    local_50 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_50;
  }
  else {
    local_50 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_50;
  if (IVar1 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

