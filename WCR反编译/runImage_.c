// runImage: @ 017be890

/* Function Stack Size: 0x18 bytes */

void WCRefineAIFeatureViewController::runImage_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *local_60;
  undefined4 local_54;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar4 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_currentImageProvider_0269d478);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_40;
  local_48 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_providerID_0269d480);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_apiKeyForProviderID_kind__0269d488,puVar4,&cf_image);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar5 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_apiKeyRequiredForProvider__026b4d60,local_48)
  ;
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (puVar5 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MR_ecS);
      local_54 = 1;
      goto LAB_017beb84;
    }
  }
  puVar5 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_WubVGr_);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar5;
  _objc_initWeak(auStack_68,local_28);
  uVar3 = local_38;
  puVar2 = local_48;
  puVar1 = local_50;
  puVar4 = local_60;
  puVar5 = PTR_WCRefineAIClient_026ce080;
  local_98 = PTR___NSConcreteStackBlock_02578660;
  local_90 = 0xc2000000;
  local_8c = 0;
  local_88 = FUN_017bec00;
  local_80 = &DAT_02588fd0;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = puVar4;
  _objc_copyWeak(auStack_70,auStack_68);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_generateImageWithPrompt_provider_0269d490,uVar3,puVar2,puVar1,&local_98);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setActiveRequest__026b4d40);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  _objc_destroyWeak(auStack_70);
  _objc_storeStrong(&local_78);
  _objc_destroyWeak(auStack_68);
  _objc_storeStrong(&local_60,0);
  local_54 = 0;
LAB_017beb84:
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

