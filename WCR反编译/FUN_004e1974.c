// FUN_004e1974 @ 004e1974

undefined8 FUN_004e1974(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_30;
  byte local_21;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_21 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  if ((local_21 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_messageTripleTapEnabled_026a42f8);
    if (((ulong)puVar1 & 1) != 0) {
      uVar2 = local_20;
      FUN_004e240c();
      local_18 = uVar2;
      goto LAB_004e1a84;
    }
  }
  uVar2 = local_20;
  FUN_004e2550();
  local_18 = uVar2;
LAB_004e1a84:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

