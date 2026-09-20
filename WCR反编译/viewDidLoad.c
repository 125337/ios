// viewDidLoad @ 01fc64cc

/* Function Stack Size: 0x10 bytes */

void WebViewController::viewDidLoad(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *local_58;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  ID local_30;
  undefined *local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_28 = PTR_WebViewController_026d02d0;
  local_30 = param_1;
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  _objc_msgSendSuper2(&local_30,PTR_s_viewDidLoad_0269cee8);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pageTitle_026ba7b0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_58 = &cf_WCRefine;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTitle__0269cef0,local_58);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___WKWebViewConfiguration_026ce4f0;
  _objc_alloc_init();
  puVar3 = PTR__OBJC_CLASS___WKPreferences_026cf7f8;
  local_38 = puVar2;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___WKWebpagePreferences_026cf800;
  local_40 = puVar3;
  _objc_alloc_init();
  local_48 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setAllowsContentJavaScript__026c7418,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setDefaultWebpagePreferences__026ca1a8,local_48);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setJavaScriptCanOpenWindowsAutom_026ca1b0,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setPreferences__026ca1b8,local_40);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setupWebView_026ca1c0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setupNavigationItems_026ca1c8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setupOfflineView_026ca1d0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setupGestures_026ca1d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadURL_026ca1e0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setupProgressView_026ca1e8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_configureCache_026ca1f0);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

