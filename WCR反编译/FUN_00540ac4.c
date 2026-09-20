// FUN_00540ac4 @ 00540ac4

void FUN_00540ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 byte param_9,undefined4 param_10,undefined8 param_11)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *local_68;
  undefined8 local_60;
  byte local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulong local_38;
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
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  local_50 = 0;
  local_48 = param_7;
  _objc_storeStrong(&local_50,param_8);
  local_51 = param_9;
  local_60 = 0;
  _objc_storeStrong(&local_60,param_11);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_68 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_momentsDraftEnabled_026a4d60);
  if ((((ulong)puVar2 & 1) == 0) && (uVar3 = local_38, FUN_0054255c(), (uVar3 & 1) == 0)) {
    uVar1 = 0;
    FUN_0054433c();
    if ((uVar1 & 1) == 0) {
      (*DAT_028cb328)(local_18,local_20,local_28,local_30,local_38,local_40,local_48,local_50,
                      local_51 & 1);
    }
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

