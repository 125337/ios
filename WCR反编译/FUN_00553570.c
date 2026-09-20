// FUN_00553570 @ 00553570

void FUN_00553570(long param_1)

{
  bool bVar1;
  undefined *local_68;
  undefined *local_50;
  undefined *local_40;
  undefined *local_28;
  long local_20;
  undefined *local_18;
  
  local_68 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = local_20 != 0;
  local_28 = local_68;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_momentsAutoCommentTargetContacts_026a4f60);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_68;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_momentsAutoLikeTargetContacts_026a4f58);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_68;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_68;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

