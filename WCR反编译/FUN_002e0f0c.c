// FUN_002e0f0c @ 002e0f0c

void FUN_002e0f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  
  local_20 = (undefined8 *)0x0;
  _objc_storeStrong(&local_20,param_3);
  puVar1 = &local_40;
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  local_28 = param_4;
  _objc_storeStrong(puVar1,param_5);
  FUN_002e4604(local_30);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_028c98a0 == (code *)0x0) {
      puVar1 = local_20;
      (*DAT_028c9898)(local_30,local_38,local_20,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_18 = puVar1;
    }
    else {
      puVar1 = local_20;
      (*DAT_028c98a0)(local_30,local_38,local_20,local_28,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_18 = puVar1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

