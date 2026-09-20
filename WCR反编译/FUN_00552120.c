// FUN_00552120 @ 00552120

byte FUN_00552120(ulong param_1)

{
  undefined *puVar1;
  byte local_3c;
  undefined *local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = param_1;
  FUN_00552238();
  if ((param_1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar1;
    if (local_20 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_momentsAutoLikeEnabled_026a4f28);
      local_3c = (byte)puVar1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_momentsAutoCommentEnabled_026a4f30);
      local_3c = (byte)puVar1;
    }
    local_11 = local_3c & 1;
    _objc_storeStrong(&local_28,0);
  }
  return local_11 & 1;
}

