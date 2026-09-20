// nightPathForScene: @ 01c2eb7c

/* Function Stack Size: 0x18 bytes */

ID WCRefineNameplateBeautifyViewController::nightPathForScene_
             (ID param_1,SEL param_2,long_long param_3)

{
  cfstringStruct *pcVar1;
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
  if (local_30 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_nameplateHomeNightPath_026aea00);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar1;
  }
  else if (local_30 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_nameplateChatNightPath_026aea10);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar1;
  }
  else if (local_30 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_nameplateContactsNightPath_026aea20);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar1;
  }
  else if (local_30 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_nameplateMomentsNightPath_026aea30);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar1;
  }
  else if (local_30 == 4) {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_nameplateChatTopBarNightPath_026aea40);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar1;
  }
  else if (local_30 == 5) {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_nameplateHomeOnlineNightPath_026aea50);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
  }
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

