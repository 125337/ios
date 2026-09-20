// FUN_002b8b18 @ 002b8b18

void FUN_002b8b18(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint local_3c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_3c = 1;
  if (local_18 != 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_3c = (uint)puVar2 ^ 1;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if ((local_3c & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTranslucent__026a19b8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setOpaque__026ca9f8,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

