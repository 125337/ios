// FUN_00540d4c @ 00540d4c

void FUN_00540d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,byte param_11,undefined4 param_12,
                 undefined8 param_13)

{
  uint uVar1;
  undefined *puVar2;
  undefined *local_88;
  undefined8 local_80;
  byte local_71;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_7);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_8);
  local_68 = param_9;
  local_70 = 0;
  _objc_storeStrong(&local_70,param_10);
  local_71 = param_11;
  local_80 = 0;
  _objc_storeStrong(&local_80,param_13);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_88 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_momentsDraftEnabled_026a4d60);
  if (((ulong)puVar2 & 1) == 0) {
    uVar1 = 0;
    FUN_0054433c();
    if ((uVar1 & 1) == 0) {
      (*DAT_028cb330)(local_28,local_30,local_38,local_40,local_48,local_50,local_58,local_60,
                      local_68,local_70,local_71 & 1);
    }
  }
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

