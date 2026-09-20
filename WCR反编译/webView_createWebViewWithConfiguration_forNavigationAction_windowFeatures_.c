// webView:createWebViewWithConfiguration:forNavigationAction:windowFeatures: @ 01fca5f8

/* Function Stack Size: 0x30 bytes */

ID WebViewController::webView_createWebViewWithConfiguration_forNavigationAction_windowFeatures_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_48;
  undefined8 local_40;
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_targetFrame_026a8ba8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if ((uVar3 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___WKWebpagePreferences_026cf800;
    _objc_alloc_init();
    local_48 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setAllowsContentJavaScript__026c7418,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setDefaultWebpagePreferences__026ca1a8,local_48);
    uVar1 = local_28;
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_request_026a1c88);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_loadRequest__026a1ce8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return 0;
}

