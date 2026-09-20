// systemPrompt @ 009b7338

/* Function Stack Size: 0x10 bytes */

ID WCRefineAIStore::systemPrompt(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_40;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (local_28 == (cfstringStruct *)0x0) {
    local_40 = &cf_Qnx0npf06q0WVT__O_u_Ne0;
  }
  else {
    local_40 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_40;
}

