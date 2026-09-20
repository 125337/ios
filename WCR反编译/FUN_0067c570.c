// FUN_0067c570 @ 0067c570

void FUN_0067c570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  undefined8 local_38;
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
  (*DAT_028cbd08)(local_18,local_20,local_28,local_30,local_38,param_6);
  uVar1 = local_28;
  FUN_0067d980();
  _objc_retainAutoreleasedReturnValue();
  FUN_00692908(&cf_AddAppMsgDataPath,uVar1,local_30);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

