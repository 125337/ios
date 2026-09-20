// FUN_008e7a94 @ 008e7a94

byte FUN_008e7a94(byte param_1,byte param_2,byte param_3,byte param_4,byte param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte local_50;
  byte local_4c;
  byte local_11;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_11 = (byte)puVar3;
  if ((((ulong)puVar2 & 1) == 0) && (((ulong)puVar3 & 1) == 0)) {
    local_11 = 0;
  }
  else if ((param_1 & 1) == 0) {
    if ((((param_2 & 1) == 0) && ((param_3 & 1) == 0)) && ((param_5 & 1) == 0)) {
      if ((param_4 & 1) == 0) {
        local_50 = 1;
        if (((ulong)puVar2 & 1) == 0) {
          local_50 = local_11;
        }
        local_11 = local_50 & 1;
      }
      else {
        local_11 = local_11 & 1;
      }
    }
    else {
      local_4c = 1;
      if (((ulong)puVar2 & 1) == 0) {
        local_4c = local_11;
      }
      local_11 = local_4c & 1;
    }
  }
  else {
    local_11 = local_11 & 1;
  }
  return local_11;
}

