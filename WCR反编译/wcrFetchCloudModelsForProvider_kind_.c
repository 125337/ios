// wcrFetchCloudModelsForProvider:kind: @ 017dbd14

/* Function Stack Size: 0x20 bytes */

void WCRefineAISettingsViewController::wcrFetchCloudModelsForProvider_kind_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  ID IVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *local_1b8;
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_154;
  code *local_150;
  undefined *local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [8];
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [24];
  undefined *local_90;
  undefined1 auStack_88 [15];
  byte local_79;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  ID local_60;
  undefined4 local_54;
  undefined *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (undefined *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  puVar4 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_38;
  local_48 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_providerID_0269d480);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_apiKeyForProviderID_kind__0269d488,puVar5,local_40);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar4 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_apiKeyRequiredForProvider__026b4d60,local_38)
  ;
  if ((((ulong)puVar4 & 1) == 0) ||
     (puVar4 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
     puVar4 != (undefined *)0x0)) {
    IVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_wcrCurrentModelForProvider_kind__026b53b0,local_38,local_40);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    IVar7 = local_28;
    local_60 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_wcrPresetsForProvider_kind__026b53b8,local_38,local_40);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_arrayWithArray__0269eab8);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar4;
    (*(code *)PTR__objc_release_02578630)(IVar7);
    IVar6 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    if ((IVar6 != 0) &&
       (puVar4 = local_68,
       (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_containsObject__0269cbb8,local_60),
       ((ulong)puVar4 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_insertObject_atIndex__0269eac0,local_60,0);
    }
    puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
    puVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_baseURL_026aade8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_URLWithString__026a16d8);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_79 = 0;
    local_1b8 = puVar8;
    if (puVar8 == (undefined *)0x0) {
      local_1b8 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_name_0269d828);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_1b8;
    }
    local_79 = puVar8 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_1b8;
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_initWeak(auStack_88,local_28);
    puVar9 = PTR_WCRAIModelPickerViewController_026cf028;
    _objc_alloc();
    IVar6 = local_60;
    puVar8 = local_68;
    IVar7 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrTitleForModelKind__026b53e0,local_40);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_70;
    puVar4 = PTR___NSConcreteStackBlock_02578660;
    local_d8 = PTR___NSConcreteStackBlock_02578660;
    local_d0 = 0xc2000000;
    local_cc = 0;
    local_c8 = FUN_017dc6e4;
    local_c0 = &DAT_02589188;
    _objc_copyWeak();
    puVar3 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_40;
    local_b8 = puVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = uVar1;
    local_110 = puVar4;
    local_108 = 0xc2000000;
    local_104 = 0;
    local_100 = FUN_017dc774;
    local_f8 = &DAT_0257c978;
    _objc_copyWeak(auStack_e0,auStack_88);
    puVar4 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_40;
    local_f0 = puVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar9,PTR_s_initWithModels_currentModel_titl_026b53e8,puVar8,IVar6,IVar7,puVar5,
               &local_d8,&local_110);
    local_90 = puVar9;
    (*(code *)PTR__objc_release_02578630)(IVar7);
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setRemoteLoading__026b51b8,1);
    IVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    IVar7 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar6);
    if ((IVar7 & 1) == 0) {
      IVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar6);
    }
    else {
      IVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar6);
    }
    _objc_initWeak(auStack_118,local_90);
    puVar3 = local_38;
    uVar1 = local_40;
    puVar8 = local_50;
    puVar4 = PTR_WCRefineAIClient_026ce080;
    local_160 = PTR___NSConcreteStackBlock_02578660;
    local_158 = 0xc2000000;
    local_154 = 0;
    local_150 = FUN_017dc7dc;
    local_148 = &DAT_025891b8;
    _objc_copyWeak(auStack_128,auStack_88);
    uVar2 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    puVar5 = local_68;
    local_140 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_138 = puVar5;
    _objc_copyWeak(auStack_120,auStack_118);
    puVar5 = local_70;
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_fetchModelsForProvider_apiKey_ki_026b5400,puVar3,puVar8,uVar1,&local_160
              );
    _objc_unsafeClaimAutoreleasedReturnValue(puVar4);
    _objc_storeStrong(&local_130);
    _objc_destroyWeak(auStack_120);
    _objc_storeStrong(&local_138,0);
    _objc_storeStrong(&local_140,0);
    _objc_destroyWeak(auStack_128);
    _objc_destroyWeak(auStack_118);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_f0,0);
    _objc_destroyWeak(auStack_e0);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_b8,0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_88);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    local_54 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_wcrPromptKeyForProvider_kind__026b53a8,local_38,local_40);
    local_54 = 1;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

