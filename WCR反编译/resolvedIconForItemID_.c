// resolvedIconForItemID: @ 010fa3ec

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginIconCatalog::resolvedIconForItemID_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *local_48;
  uint local_3c;
  undefined *local_38;
  ulong local_30;
  SEL local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = (undefined *)param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  FUN_010f4f48();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  puVar2 = local_38;
  if (puVar3 == (undefined *)0x0) {
    uVar6 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_hub_settings)
    ;
    if ((uVar6 & 1) != 0) {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      FUN_010f4f48();
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      puVar2 = local_48;
      bVar1 = puVar3 != (undefined *)0x0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = puVar2;
      }
      local_3c = (uint)bVar1;
      _objc_storeStrong(bVar1,&local_48,0);
      if (local_3c != 0) goto LAB_010fa658;
    }
    puVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_defaultIconForItemID__026aece0,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_3c = 1;
    local_18 = puVar2;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
    local_3c = 1;
  }
LAB_010fa658:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

