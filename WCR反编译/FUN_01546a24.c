// FUN_01546a24 @ 01546a24

void FUN_01546a24(byte param_1)

{
  bool bVar1;
  undefined *local_50;
  undefined *local_40;
  undefined *local_30;
  undefined *local_28;
  byte local_19;
  undefined *local_18;
  
  local_50 = PTR_WCRefineConfig_026cdf58;
  local_19 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = (local_19 & 1) == 0;
  local_28 = local_50;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_chatAvatarProfileCardContentLigh_026b08d8);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_50;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_chatAvatarProfileCardContentDark_026b08d0);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_50;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

