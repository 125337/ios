// makeWebViewBlack: @ 0196c298

/* Function Stack Size: 0x14 bytes */

ID WCRefineFileManagerPreviewViewController::makeWebViewBlack_(ID param_1,SEL param_2,bool param_3)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined *local_98;
  undefined *local_70;
  undefined *local_60;
  undefined *local_38;
  undefined *local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  puVar2 = PTR__OBJC_CLASS___WKWebViewConfiguration_026ce4f0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_alloc_init();
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setAllowsInlineMediaPlayback__026a8ee8,1);
  puVar2 = PTR__OBJC_CLASS___WKWebView_026ce4e8;
  _objc_alloc();
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)
            (in_d0,in_d1,in_d2,in_d3,puVar2,PTR_s_initWithFrame_configuration__026a1ce0,local_30);
  local_38 = puVar2;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setNavigationDelegate__026a8f08,local_18);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setAutoresizingMask__026ca878,0x12);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setOpaque__026ca9f8,0);
  bVar1 = (local_21 & 1) == 0;
  local_98 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_98;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_98;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setBackgroundColor__026ca888,local_98);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  puVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_backgroundColor_026ca518);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_scrollView_0269dcc0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWebView__026a8f28,local_38);
  puVar2 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

