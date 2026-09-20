// FUN_008c692c @ 008c692c

void FUN_008c692c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  DAT_028ce04a = 1;
  local_20 = param_2;
  local_18 = param_1;
  if ((DAT_028ce049 & 1) == 0) {
    (*DAT_028ce0a0)(param_1,param_2);
  }
  else {
    DAT_028ce1e8 = 0;
    DAT_028ce1e9 = 0;
    uVar1 = 0;
    FUN_008c9688(0,param_1);
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar1;
    FUN_008c58c4(2,1,uVar1);
    FUN_008c58c4(4,0,local_28);
    (*DAT_028ce0a0)(local_18,local_20);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

