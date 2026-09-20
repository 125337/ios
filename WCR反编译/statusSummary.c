// statusSummary @ 0194e7b4

/* Function Stack Size: 0x10 bytes */

ID WCRefineEnhancedAdBlockViewController::statusSummary(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *local_18;
  
  _WCRefineEnhancedAdBlockFeatureAllowed();
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__gcCg;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_18 = &::cf__;
    if (((ulong)puVar2 & 1) == 0) {
      local_18 = &cf__g_T_u;
    }
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

