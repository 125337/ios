// FUN_0067c6b4 @ 0067c6b4

void FUN_0067c6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar1 = local_28;
  FUN_0067d980();
  _objc_retainAutoreleasedReturnValue();
  FUN_00692908(&cf_AddMsg,uVar1,local_30);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) != 0) {
    uVar1 = local_28;
    FUN_0067d980();
    _objc_retainAutoreleasedReturnValue();
    FUN_00691f30(&cf_CMessageMgrAddMsg,uVar1,local_30);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  (*DAT_028cbd10)(local_18,local_20,local_28,local_30);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

