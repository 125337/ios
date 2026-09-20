// FUN_00426440 @ 00426440

uint FUN_00426440(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 local_2c;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_2c = 0;
  if (((ulong)puVar2 & 1) != 0) {
    local_2c = 0;
    FUN_00426514();
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return local_2c & 1;
}

