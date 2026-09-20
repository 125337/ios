// FUN_00401428 @ 00401428

byte FUN_00401428(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 local_11;
  
  FUN_003fe19c();
  if ((param_1 & 1) == 0) {
    FUN_00400c3c();
    if ((param_1 & 1) == 0) {
      local_11 = 0;
    }
    else {
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_11 = (byte)puVar2 & 1;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
  }
  else {
    local_11 = 0;
  }
  return local_11;
}

