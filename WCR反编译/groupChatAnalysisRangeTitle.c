// groupChatAnalysisRangeTitle @ 009b9b80

/* Function Stack Size: 0x10 bytes */

ID WCRefineAIStore::groupChatAnalysisRangeTitle(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  ID local_68;
  ID local_50;
  ID local_40;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_20;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_groupChatAnalysisRange_026aad68);
  bVar2 = false;
  bVar1 = false;
  if (-1 < (long)IVar3) {
    IVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
    if ((long)IVar3 < (long)IVar4) {
      local_68 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectAtIndexedSubscript__0269cc78,IVar3)
      ;
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      local_40 = local_68;
      goto LAB_009b9ccc;
    }
  }
  local_68 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectAtIndexedSubscript__0269cc78,1);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = true;
  local_50 = local_68;
LAB_009b9ccc:
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_68;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

