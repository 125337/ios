// FUN_01a5e9b0 @ 01a5e9b0

void FUN_01a5e9b0(long param_1)

{
  undefined *puVar1;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setPatOtherAutoReplyText__026bcfd0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setPatOtherAutoReplyRepositoryCo_026bcfd8,&cf___);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__nd);
  _objc_storeStrong(&local_28,0);
  return;
}

