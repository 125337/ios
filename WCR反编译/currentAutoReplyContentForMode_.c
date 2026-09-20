// currentAutoReplyContentForMode: @ 01d21d30

/* Function Stack Size: 0x18 bytes */

ID WCRefineRedEnvelopViewController::currentAutoReplyContentForMode_
             (ID param_1,SEL param_2,long_long param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_68;
  cfstringStruct *local_50;
  cfstringStruct *local_38;
  long_long local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar1;
  if (local_30 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_redEnvelopAutoReplyMultiContent_026a6ac8);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_50 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_50;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_redEnvelopAutoReplyContent_026a6ad0);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_68 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_68;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

