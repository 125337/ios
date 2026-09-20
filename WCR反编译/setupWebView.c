// setupWebView @ 01fc6a64

/* Function Stack Size: 0x10 bytes */

void WebViewController::setupWebView(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  cfstringStruct *local_78 [5];
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar1 = PTR__OBJC_CLASS___WKWebViewConfiguration_026ce4f0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___WKWebsiteDataStore_026cec98;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___WKWebsiteDataStore_026cec98,PTR_s_defaultDataStore_026adc60);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setWebsiteDataStore__026ae130,puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setAllowsInlineMediaPlayback__026a8ee8,1);
  puVar1 = PTR__OBJC_CLASS___WKWebsiteDataStore_026cec98;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___WKWebsiteDataStore_026cec98,PTR_s_defaultDataStore_026adc60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setWebsiteDataStore__026ae130);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___WKPreferences_026cf7f8;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___WKWebpagePreferences_026cf800;
  local_48 = puVar1;
  _objc_alloc_init();
  local_50 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setAllowsContentJavaScript__026c7418,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setDefaultWebpagePreferences__026ca1a8,local_50);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setJavaScriptCanOpenWindowsAutom_026ca1b0,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setPreferences__026ca1b8,local_48);
  puVar1 = PTR__OBJC_CLASS___WKWebView_026ce4e8;
  _objc_alloc();
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)
            (in_d0,in_d1,in_d2,in_d3,puVar1,PTR_s_initWithFrame_configuration__026a1ce0,local_38);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setWebView__026a8f28);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_retain_02578638)();
  local_78[0] = &
                cf_Mozilla_5_0_iPhone_CPUiPhoneOS15_0likeMacOSX_AppleWebKit_605_1_15_KHTML_likeGecko_Version_15_0Mobile_15E148Safari_604_1
  ;
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_addSubview__026ca4c0);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_storeStrong(local_78);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

