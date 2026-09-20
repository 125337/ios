// FUN_0158bc2c @ 0158bc2c

void FUN_0158bc2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  FUN_0158c42c(local_18,"m_tableView");
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  FUN_0158bce4(local_18,uVar1,local_28);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

