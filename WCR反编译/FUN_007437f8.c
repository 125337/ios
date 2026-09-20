// FUN_007437f8 @ 007437f8

void FUN_007437f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,byte param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long local_90 [3];
  undefined8 local_78;
  byte local_69;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_44;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_40 = 0;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_40,param_4);
  local_50 = 0;
  local_44 = param_5;
  _objc_storeStrong(&local_50,param_6);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_7);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_8);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_9);
  uVar1 = local_60;
  local_69 = param_10;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = uVar1;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) != 0) {
    lVar4 = local_40;
    FUN_007524a8();
    _objc_retainAutoreleasedReturnValue();
    local_90[0] = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
    if (lVar4 != 0) {
      _objc_storeStrong(lVar4,&local_78,local_90[0]);
    }
    _objc_storeStrong(local_90,0);
  }
  (*DAT_028cc710)(local_28,local_30,local_38,local_40,local_44,local_50,local_58,local_78,local_68,
                  local_69 & 1);
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  return;
}

