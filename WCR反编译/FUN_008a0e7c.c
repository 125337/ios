// FUN_008a0e7c @ 008a0e7c

ulong FUN_008a0e7c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = DAT_028cdd60;
  FUN_008a1414(DAT_028cdd60,local_18,param_2);
  _objc_storeStrong(&local_18,0);
  return uVar1 & 0xffffffff;
}

