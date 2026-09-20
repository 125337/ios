// typeForScene: @ 01c2e300

/* Function Stack Size: 0x18 bytes */

long_long WCRefineNameplateBeautifyViewController::typeForScene_
                    (ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  undefined *local_38;
  long_long local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  if (local_30 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_nameplateHomeType_026aea58);
    local_18 = puVar1;
  }
  else if (local_30 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_nameplateChatType_026aea80);
    local_18 = puVar1;
  }
  else if (local_30 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_nameplateContactsType_026aeaa8);
    local_18 = puVar1;
  }
  else if (local_30 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_nameplateMomentsType_026aead0);
    local_18 = puVar1;
  }
  else if (local_30 == 4) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_nameplateChatTopBarType_026aeaf8);
    local_18 = puVar1;
  }
  else if (local_30 == 5) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_nameplateHomeOnlineType_026aeb20);
    local_18 = puVar1;
  }
  else {
    local_18 = (undefined *)0x0;
  }
  _objc_storeStrong(&local_38,0);
  return (long_long)local_18;
}

