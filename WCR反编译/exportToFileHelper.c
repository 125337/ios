// exportToFileHelper @ 01f7da48

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackManagerViewController::exportToFileHelper(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  dispatch_queue_t pdVar3;
  ID local_48;
  undefined *local_40;
  ID local_38;
  ID local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_SbS_N_);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_resolvedDirectory_026ba370);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar2;
  pdVar3 = _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  puVar1 = local_28;
  local_48 = IVar2;
  (*(code *)PTR__objc_retain_02578638)();
  IVar2 = local_18;
  local_40 = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = IVar2;
  _dispatch_async(pdVar3);
  (*(code *)PTR__objc_release_02578630)(pdVar3);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

