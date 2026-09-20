// FUN_00860d88 @ 00860d88

double FUN_00860d88(void)

{
  undefined *puVar1;
  undefined *puVar2;
  double local_40;
  double local_20;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_profileFollowGlobalCornerEnabled_026a8ea0);
  puVar2 = local_18;
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_profileCornerMargin_026a8eb0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_globalCornerMargin_026a1fe0);
  }
  local_40 = (double)(long)puVar2;
  local_20 = local_40;
  if (local_40 < 0.0) {
    local_20 = 0.0;
  }
  if (100.0 < local_20) {
    local_20 = 100.0;
  }
  _objc_storeStrong(&local_18,0);
  return local_20;
}

