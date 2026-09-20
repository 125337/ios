// FUN_007edcd0 @ 007edcd0

void FUN_007edcd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_60 [3];
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_themeBoxFailureNotificationForma_026a8588);
  _objc_retainAutoreleasedReturnValue();
  local_60[0] = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    FUN_007eefa4();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_60[0];
    local_60[0] = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar2 = local_60[0];
  FUN_007ee9e0(local_60[0],local_18,local_20,local_28,local_30,local_38,local_40);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(local_60);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar2);
  return;
}

