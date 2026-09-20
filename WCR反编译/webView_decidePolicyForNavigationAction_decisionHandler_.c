// webView:decidePolicyForNavigationAction:decisionHandler: @ 01078b60

/* Function Stack Size: 0x28 bytes */

void WCRXHSWebExtractSession::webView_decidePolicyForNavigationAction_decisionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  cfstringStruct *local_b0;
  uint local_9c;
  cfstringStruct *local_68;
  byte local_59;
  cfstringStruct *local_58;
  undefined4 local_4c;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  long local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_request_026a1c88);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_scheme_026a1dd8);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_platform_026ad958);
  if ((((IVar3 == 1) &&
       (pcVar1 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
       pcVar1 != (cfstringStruct *)0x0)) &&
      (pcVar1 = local_48,
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_http),
      ((ulong)pcVar1 & 1) == 0)) &&
     ((pcVar1 = local_48,
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_https),
      ((ulong)pcVar1 & 1) == 0 &&
      (pcVar1 = local_48,
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_about),
      ((ulong)pcVar1 & 1) == 0)))) {
    (**(code **)(local_38 + 0x10))(local_38,0);
    local_4c = 1;
  }
  else {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_platform_026ad958);
    local_59 = 0;
    local_9c = 0;
    if (IVar3 == 1) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_targetFrame_026a8ba8);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      local_58 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_9c = (uint)pcVar1;
    }
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    if ((local_9c & 1) != 0) {
      pcVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_absoluteString_026a1de0);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_b0 = &::cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_b0;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
      pcVar1 = local_68;
      if (pcVar2 != (cfstringStruct *)0x0) {
        IVar3 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pageURL_026ae148);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isEqualToString__0269ccc8);
        (*(code *)PTR__objc_release_02578630)(IVar3);
      }
      _objc_storeStrong(&local_68,0);
    }
    (**(code **)(local_38 + 0x10))(local_38,1);
    local_4c = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

