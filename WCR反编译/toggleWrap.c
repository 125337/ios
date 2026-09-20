// toggleWrap @ 0196f2c0

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerPreviewViewController::toggleWrap(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wrapLines_026b9ed8);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setWrapLines__026ba1a8,(uint)IVar1 ^ 1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_webView_026a12c0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wrapLines_026b9ed8);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_stringWithFormat__0269cca8,&cf_window___setWrap__window___setWrap_____);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_evaluateJavaScript_completionHan_026a12f0,puVar2,0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return;
}

