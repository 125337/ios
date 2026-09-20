// FUN_0052f9d8 @ 0052f9d8

void FUN_0052f9d8(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_58;
  cfstringStruct *local_38 [3];
  cfstringStruct *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_momentsSpecialFollowForwardForma_026a4bb8);
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_58 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38[0] = local_58;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_38[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    _objc_storeStrong(local_38,&cf_Yl_);
  }
  pcVar1 = local_38[0];
  FUN_0052fba8(local_38[0],local_18);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(local_38);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(pcVar1);
  return;
}

