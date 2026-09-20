// webView:didReceiveAuthenticationChallenge:completionHandler: @ 01fca144

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x28 bytes */

void WebViewController::webView_didReceiveAuthenticationChallenge_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_40;
  long local_38;
  ulong local_30 [2];
  SEL local_20;
  ID local_18;
  
  local_30[1] = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  local_30[0] = 0;
  _objc_storeStrong(local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  uVar1 = local_30[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_30[0],PTR_s_protectionSpace_026ca280);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSURLCredential_026cf808;
  if ((uVar3 & 1) == 0) {
    (**(code **)(local_38 + 0x10))(local_38,1,0);
  }
  else {
    uVar1 = local_30[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_30[0],PTR_s_protectionSpace_026ca280);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_credentialForTrust__026ca298,uVar2);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar4;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (**(code **)(local_38 + 0x10))(local_38,0,local_40);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

