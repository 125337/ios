// runVideo: @ 017bee44

/* Function Stack Size: 0x18 bytes */

void WCRefineAIFeatureViewController::runVideo_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
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
  puVar2 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_currentVideoProvider_0269d498);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_40;
  local_48 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_providerID_0269d480);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_apiKeyForProviderID_kind__0269d488,puVar2,&cf_video);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_apiKeyRequiredForProvider__026b4d60,local_48)
  ;
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (puVar3 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MR_ecS);
      local_54 = 1;
      goto LAB_017bf188;
    }
  }
  puVar2 = PTR_WCRefineAIStore_026ce048;
  puVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_videoDurationSeconds_0269d4a0);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_resolvedVideoDurationSeconds_for_0269d4a8,puVar3,local_48);
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_60 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_ck_WubbGr_);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_showStickyStatusText__0269d4b0);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_initWeak(auStack_68,local_28);
  uVar1 = local_38;
  puVar4 = local_48;
  puVar2 = local_50;
  puVar3 = PTR_WCRefineAIClient_026ce080;
  local_90 = PTR___NSConcreteStackBlock_02578660;
  local_88 = 0xc2000000;
  local_84 = 0;
  local_80 = FUN_017bf288;
  local_78 = &DAT_02589020;
  _objc_copyWeak(auStack_70,auStack_68);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_generateVideoWithPrompt_provider_0269d4c0,uVar1,puVar4,puVar2,
             &PTR___NSConcreteGlobalBlock_02589000,&local_90);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setActiveRequest__026b4d40);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  local_54 = 0;
LAB_017bf188:
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

