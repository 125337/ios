// viewWillDisappear: @ 01fc6848

/* Function Stack Size: 0x14 bytes */

void WebViewController::viewWillDisappear_(ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  ID local_38;
  undefined *local_30;
  undefined1 local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (undefined1)param_3;
  local_30 = PTR_WebViewController_026d02d0;
  local_38 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSendSuper2(&local_38,PTR_s_viewWillDisappear__0269eb30,param_3 & 1);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_webView_026a12c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return;
}

