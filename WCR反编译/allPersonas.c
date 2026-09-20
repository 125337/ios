// allPersonas @ 009af56c

/* Function Stack Size: 0x10 bytes */

ID WCRefineAIStore::allPersonas(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_40;
  undefined4 local_34;
  ID local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_customPersonas_026aac48);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
  if (param_1 == 0) {
    puVar1 = PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineAIStore_026ce048,PTR_s_personaPresets_026aac50);
    _objc_retainAutoreleasedReturnValue();
    local_34 = 1;
    local_18 = puVar1;
  }
  else {
    puVar1 = PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineAIStore_026ce048,PTR_s_personaPresets_026aac50);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addObjectsFromArray__0269d540,local_30);
    puVar1 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

