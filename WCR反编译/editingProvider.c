// editingProvider @ 017d5238

/* Function Stack Size: 0x10 bytes */

ID WCRefineAISettingsViewController::editingProvider(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_68;
  undefined8 local_40;
  undefined8 local_30;
  
  puVar1 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editingProviderID_026b5220);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_providerForID__026aad08);
  _objc_retainAutoreleasedReturnValue();
  local_68 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_30 = PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  if (puVar2 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_autoreleaseReturnValue();
  return (ID)local_68;
}

