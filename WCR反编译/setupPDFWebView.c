// setupPDFWebView @ 0196e9e4

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerPreviewViewController::setupPDFWebView(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_makeWebViewBlack__026ba188,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_28 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_scrollView_0269dcc0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_filePath_026b9cb0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_fileURLWithPath__0269f540);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSURL_026ce328;
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_filePath_026b9cb0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_fileURLWithPath__0269f540);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_loadFileURL_allowingReadAccessTo_026a1cf8,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_storeStrong(&local_28,0);
  return;
}

