// FUN_003bff3c @ 003bff3c

void FUN_003bff3c(undefined8 param_1)

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
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_homePinFoldedChatBoxInNormalEnab_026a2f98);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_003c18d8(local_18);
  }
  else {
    FUN_003c12ec(local_18);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

