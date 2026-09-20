// wcr_aiSummaryEnabled @ 01dd9b4c

/* Function Stack Size: 0x10 bytes */

bool WCRefineSessionStatsViewController::wcr_aiSummaryEnabled(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  int iVar5;
  undefined *local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_overviewMode_026af898);
  if ((param_1 & 1) != 0) {
    local_11 = 0;
    goto LAB_01dd9d40;
  }
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isGroup_026af768);
  iVar5 = 2;
  if ((IVar1 & 1) != 0) {
    iVar5 = 1;
  }
  local_30 = (long)iVar5;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  if (puVar2 == (undefined *)0x0) {
LAB_01dd9c88:
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isGroup_026af768);
    if ((IVar1 & 1) == 0) {
      IVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_resolvedStatsAnalysisPrompt_026c56a0)
      ;
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_11 = IVar4 != 0;
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    else {
      local_11 = 1;
    }
  }
  else {
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsObject__0269cbb8,&cf_ai);
    if (((ulong)puVar2 & 1) != 0) goto LAB_01dd9c88;
    local_11 = 0;
  }
  _objc_storeStrong(&local_38,0);
LAB_01dd9d40:
  return local_11 & 1;
}

