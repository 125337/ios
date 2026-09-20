// FUN_01ee416c @ 01ee416c

/* WARNING: Removing unreachable block (ram,0x01ee4420) */
/* WARNING: Removing unreachable block (ram,0x01ee4238) */

void FUN_01ee416c(undefined1 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  undefined1 local_11;
  
  puVar1 = PTR__OBJC_CLASS___AVAudioSession_026ce9d0;
  local_11 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___AVAudioSession_026ce9d0,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___WKWebViewConfiguration_026ce4f0;
  _objc_alloc_init();
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setAllowsInlineMediaPlayback__026a8ee8,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setMediaTypesRequiringUserAction_026a8ef0,0);
  puVar1 = PTR__OBJC_CLASS___WKUserContentController_026ce500;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___WKUserScript_026ce508;
  local_28 = puVar1;
  _objc_alloc();
  puVar1 = puVar2;
  FUN_01f0facc();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_initWithSource_injectionTime_for_026a1dc8,puVar1,0,0);
  local_30 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addUserScript__026a1dd0,local_30);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setUserContentController__026a1db0,local_28);
  puVar1 = local_20;
  puVar2 = PTR_WCRefineToDoAssetSchemeHandlerSettings_026cf740;
  _objc_alloc_init();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setURLSchemeHandler_forURLScheme_026a1da0,puVar2,&cf_wcrasset);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_20;
  puVar2 = PTR_WCRefineToDoLyricSchemeHandlerSettings_026cf748;
  _objc_alloc_init();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setURLSchemeHandler_forURLScheme_026a1da0,puVar2,&cf_wcrlyric);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_defaultWebpagePreferences_026c7410);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

