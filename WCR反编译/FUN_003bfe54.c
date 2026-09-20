// FUN_003bfe54 @ 003bfe54

void FUN_003bfe54(undefined8 param_1)

{
  undefined *puVar1;
  undefined *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_homePinPublicAccountEnabled_026a2f88);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_homePinPublicAccountInNormalEnab_026a2f90);
    if (((ulong)puVar1 & 1) == 0) {
      FUN_003c0644(local_18,FUN_003c11cc);
    }
    else {
      FUN_003bffe0(local_18,FUN_003c11cc);
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

