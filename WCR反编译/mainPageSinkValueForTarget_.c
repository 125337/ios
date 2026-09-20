// mainPageSinkValueForTarget: @ 01b4feb4

/* Function Stack Size: 0x18 bytes */

long_long WCRefineLayoutFunctionViewController::mainPageSinkValueForTarget_
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
  if (local_30 == 0x1f) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_mainPageSinkMainFrameValue_026a4120);
    FUN_01b490cc();
    local_18 = puVar1;
  }
  else if (local_30 == 0x20) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_mainPageSinkContactsValue_026a4128);
    FUN_01b490cc();
    local_18 = puVar1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_mainPageSinkDiscoverValue_026a4130);
    FUN_01b490cc();
    local_18 = puVar1;
  }
  _objc_storeStrong(&local_38,0);
  return (long_long)local_18;
}

