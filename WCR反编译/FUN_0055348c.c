// FUN_0055348c @ 0055348c

undefined * FUN_0055348c(long param_1)

{
  undefined *local_40;
  undefined *local_20;
  long local_18;
  
  local_40 = PTR_WCRefineConfig_026cdf58;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = local_40;
  if (local_18 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_momentsAutoLikeTargetMode_026a4f48);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_momentsAutoCommentTargetMode_026a4f50);
  }
  _objc_storeStrong(&local_20,0);
  return local_40;
}

