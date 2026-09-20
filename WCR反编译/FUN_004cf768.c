// FUN_004cf768 @ 004cf768

undefined * FUN_004cf768(long param_1)

{
  undefined *puVar1;
  undefined *local_88;
  undefined *local_70;
  undefined *local_58;
  undefined *local_28;
  long local_20;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  if (local_20 != 0) {
    if (local_20 == 1) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_mainPageSinkMainFrameEnabled_026a4108);
      if (((ulong)puVar1 & 1) == 0) {
        local_58 = (undefined *)0x0;
      }
      else {
        local_58 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mainPageSinkMainFrameValue_026a4120);
      }
      local_18 = local_58;
      goto LAB_004cf978;
    }
    if (local_20 == 2) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_mainPageSinkContactsEnabled_026a4110);
      if (((ulong)puVar1 & 1) == 0) {
        local_70 = (undefined *)0x0;
      }
      else {
        local_70 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mainPageSinkContactsValue_026a4128);
      }
      local_18 = local_70;
      goto LAB_004cf978;
    }
    if (local_20 == 3) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_mainPageSinkDiscoverEnabled_026a4118);
      if (((ulong)puVar1 & 1) == 0) {
        local_88 = (undefined *)0x0;
      }
      else {
        local_88 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mainPageSinkDiscoverValue_026a4130);
      }
      local_18 = local_88;
      goto LAB_004cf978;
    }
  }
  local_18 = (undefined *)0x0;
LAB_004cf978:
  _objc_storeStrong(&local_28,0);
  return local_18;
}

