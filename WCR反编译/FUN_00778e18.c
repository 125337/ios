// FUN_00778e18 @ 00778e18

void FUN_00778e18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_3);
  local_30 = param_2;
  local_28 = param_1;
  local_20 = param_4;
  if (DAT_028cc9c0 == (code *)0x0) {
    if (DAT_028cc9b0 != 0) {
      local_40 = local_18;
      local_38 = DAT_028cc9b0;
      _objc_msgSendSuper(param_1,param_2,&local_40,param_4);
    }
  }
  else {
    (*DAT_028cc9c0)(param_1,param_2,local_18,param_4);
  }
  uVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = uVar1;
  FUN_0077906c(uVar1);
  FUN_00778f34(local_48);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_18,0);
  return;
}

