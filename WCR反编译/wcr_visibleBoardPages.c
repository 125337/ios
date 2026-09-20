// wcr_visibleBoardPages @ 01dd9d54

/* Function Stack Size: 0x10 bytes */

ID WCRefineSessionStatsViewController::wcr_visibleBoardPages(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *local_60;
  undefined *local_48;
  undefined4 local_3c;
  undefined *local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_layoutMode_026c5648);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_60 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_60;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_overviewMode_026af898);
  if (((IVar3 & 1) == 0) &&
     (IVar3 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_aiSummaryEnabled_026c56a8),
     (IVar3 & 1) == 0)) {
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsObject__0269cbb8,&cf_ai);
    puVar1 = local_38;
    if (((ulong)puVar2 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar1;
      local_3c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_mutableCopy_0269d8a0);
      local_48 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_removeObject__0269d678,&cf_ai);
      puVar1 = local_48;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar1;
      local_3c = 1;
      _objc_storeStrong(&local_48,0);
    }
  }
  else {
    puVar1 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
    local_3c = 1;
  }
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

