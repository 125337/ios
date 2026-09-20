// FUN_006defdc @ 006defdc

void FUN_006defdc(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  undefined8 local_30;
  byte local_21;
  undefined8 local_20;
  undefined8 local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028cc2d8)(param_1,param_2,param_3 & 1);
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028cc300);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  _objc_storeStrong(&local_30,0);
  return;
}

