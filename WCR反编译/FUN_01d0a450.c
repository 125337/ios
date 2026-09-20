// FUN_01d0a450 @ 01d0a450

void FUN_01d0a450(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_20;
  undefined *local_18;
  
  puVar1 = PTR__OBJC_CLASS___WKWebViewConfiguration_026ce4f0;
  _objc_alloc_init();
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setAllowsInlineMediaPlayback__026a8ee8,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_setMediaTypesRequiringUserAction_026a8ef0,0xffffffffffffffff);
  puVar1 = PTR__OBJC_CLASS___WKUserContentController_026ce500;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___WKUserScript_026ce508;
  local_20 = puVar1;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addUserScript__026a1dd0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setUserContentController__026a1db0,local_20);
  puVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

