// FUN_00552c4c @ 00552c4c

uint FUN_00552c4c(long param_1)

{
  undefined *puVar1;
  uint local_34;
  undefined *local_20;
  long local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  if (local_18 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_momentsAutoLikeSkipOwn_026a4f38);
    local_34 = (uint)puVar1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_momentsAutoCommentSkipOwn_026a4f40);
    local_34 = (uint)puVar1;
  }
  _objc_storeStrong(&local_20,0);
  return local_34 & 1;
}

