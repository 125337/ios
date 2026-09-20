// hasEncryptionPassword @ 01a32e14

/* Function Stack Size: 0x10 bytes */

bool WCRefineGeneralFunctionViewController::hasEncryptionPassword(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool local_2c;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_2c = 0;
  if (local_28 != (undefined *)0x0) {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    local_2c = (bool)(puVar1 != (undefined *)0x0);
  }
  _objc_storeStrong(&local_28,0);
  return local_2c;
}

