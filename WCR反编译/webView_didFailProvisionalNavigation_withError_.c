// webView:didFailProvisionalNavigation:withError: @ 01fc9f68

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x28 bytes */

void WebViewController::webView_didFailProvisionalNavigation_withError_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  long lVar1;
  ID IVar2;
  long local_38 [4];
  ID local_18;
  
  local_38[2] = 0;
  local_38[3] = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_38 + 2,param_3);
  local_38[1] = 0;
  _objc_storeStrong(local_38 + 1,param_4);
  local_38[0] = 0;
  _objc_storeStrong(local_38,param_5);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setIsLoading__026c06f8,0);
  lVar1 = local_38[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_code_026ae1d0);
  if (((lVar1 == -0x3f1) ||
      (lVar1 = local_38[0], (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_code_026ae1d0),
      lVar1 == -0x3ec)) ||
     (lVar1 = local_38[0], (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_code_026ae1d0),
     lVar1 == -0x3eb)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setIsOffline__026ca278,1);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_offlineView_026ca220);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x3fe6666666666666);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_offlineView_026ca220);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  _objc_storeStrong(local_38);
  _objc_storeStrong(local_38 + 1,0);
  _objc_storeStrong(local_38 + 2,0);
  return;
}

