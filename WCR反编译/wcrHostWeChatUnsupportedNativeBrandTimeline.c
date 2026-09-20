// wcrHostWeChatUnsupportedNativeBrandTimeline @ 01f40e00

/* Function Stack Size: 0x10 bytes */

bool WCRefineUICleanViewController::wcrHostWeChatUnsupportedNativeBrandTimeline
               (ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  cfstringStruct *local_48;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  pcVar1 = (cfstringStruct *)PTR_WCRefineHelper_026ce000;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_getWechatVersion_026c8ca8)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_48 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_48;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_11 = 0;
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_wcrVersion_lessThan__026c8cb0,local_30,&cf_8_0_76);
    local_11 = ((byte)IVar2 ^ 1) & 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

