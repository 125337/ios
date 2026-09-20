// webView:didFinishNavigation: @ 01fc9d88

/* Function Stack Size: 0x20 bytes */

void WebViewController::webView_didFinishNavigation_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID local_68;
  cfstringStruct *local_48;
  byte local_39;
  ID local_38;
  undefined8 local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setIsLoading__026c06f8,0);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_title_0269d250);
  _objc_retainAutoreleasedReturnValue();
  local_39 = 0;
  local_68 = IVar1;
  if (IVar1 == 0) {
    local_68 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pageTitle_026ba7b0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_68;
  }
  local_39 = IVar1 == 0;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTitle__0269cef0,local_68);
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = &
             cf_varmeta_document_createElement__meta___meta_setAttribute__name___viewport___meta_setAttribute__content___width_device_width_initial_scale_1_0_maximum_scale_1_0_user_scalable_no___document_getElementsByTagName__head___0__appendChild_meta__
  ;
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_webView_026a12c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

