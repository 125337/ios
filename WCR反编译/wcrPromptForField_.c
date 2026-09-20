// wcrPromptForField: @ 017e42e4

/* Function Stack Size: 0x18 bytes */

ID WCRefineAISettingsViewController::wcrPromptForField_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *local_60;
  undefined *local_50;
  undefined *local_40;
  undefined *local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar2 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_30;
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_isEqualToString__0269ccc8,&cf_chatReplyPrompt);
  bVar1 = (uVar3 & 1) == 0;
  local_60 = local_38;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_systemPrompt_0269d0c8);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_60;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_chatReplyPrompt_026b54e8);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_60;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_60;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

