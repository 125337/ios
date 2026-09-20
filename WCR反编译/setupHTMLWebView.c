// setupHTMLWebView @ 0196ed08

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerPreviewViewController::setupHTMLWebView(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_makeWebViewBlack__026ba188,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_renderHTMLPreview_026ba118);
  return;
}

