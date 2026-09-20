// FUN_006e0174 @ 006e0174

uint FUN_006e0174(void)

{
  undefined *puVar1;
  uint local_2c;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_sayHelloClearButtonEnabled_026a6c88);
    local_2c = (uint)puVar1;
  }
  _objc_storeStrong(&local_18,0);
  return local_2c & 1;
}

