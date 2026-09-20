// FUN_008c67d8 @ 008c67d8

void FUN_008c67d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028ce098)(local_18,local_20,local_28);
  if ((DAT_028ce1e9 & 1) == 0) {
    if ((DAT_028ce049 & 1) == 0) {
      local_38 = 1;
    }
    else {
      DAT_028ce1e8 = 0;
      DAT_028ce04a = 1;
      uVar1 = local_28;
      FUN_008c9688(local_28,local_18);
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar1;
      FUN_008c58c4(2,1,uVar1);
      FUN_008c58c4(4,0,local_40);
      _objc_storeStrong(&local_40,0);
      local_38 = 0;
    }
  }
  else {
    local_38 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

