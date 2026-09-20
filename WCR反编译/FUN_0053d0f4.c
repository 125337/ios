// FUN_0053d0f4 @ 0053d0f4

void FUN_0053d0f4(ulong param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *local_30;
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  WCRefineHDMomentsResetFlow();
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_momentsDraftEnabled_026a4d60);
  if ((((ulong)puVar1 & 1) == 0) && (uVar2 = local_18, FUN_0054255c(), (uVar2 & 1) == 0)) {
    (*DAT_028cb2c0)(local_18,local_20,local_21 & 1);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

