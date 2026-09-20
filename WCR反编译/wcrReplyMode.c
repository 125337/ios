// wcrReplyMode @ 017ce184

/* Function Stack Size: 0x10 bytes */

long_long WCRefineAISessionSettingsViewController::wcrReplyMode(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *local_50;
  undefined *local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrOptions_026b5098);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  (*(code *)PTR__objc_release_02578630)(param_1);
  bVar1 = local_30 == (undefined *)0x0;
  if (bVar1) {
    local_38 = PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  else {
    local_50 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
  }
  local_18 = local_50;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_storeStrong(&local_30,0);
  return (long_long)local_18;
}

