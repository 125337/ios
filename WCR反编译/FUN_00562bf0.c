// FUN_00562bf0 @ 00562bf0

void FUN_00562bf0(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  (*DAT_028cb4b8)(local_18,local_20,local_28,local_30,local_38);
  puVar2 = &DAT_028cb468;
  _objc_loadWeakRetained();
  puVar1 = local_18;
  (*(code *)PTR__objc_release_02578630)();
  if (puVar2 == puVar1) {
    FUN_005707ac(0,local_18,&cf_onDataChanged);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

