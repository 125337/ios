// FUN_0014228c @ 0014228c

/* WARNING: Type propagation algorithm not settling */

byte FUN_0014228c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long local_40 [4];
  long local_20;
  byte local_11;
  
  local_40[2] = 0;
  local_40[3] = param_2;
  local_20 = param_1;
  _objc_storeStrong(local_40 + 2,param_3);
  local_40[1] = 0;
  _objc_storeStrong(local_40 + 1,param_4);
  lVar1 = local_20;
  _objc_getAssociatedObject(local_20,DAT_026df910);
  _objc_retainAutoreleasedReturnValue();
  local_11 = local_40[2] == lVar1;
  local_40[0] = lVar1;
  _objc_storeStrong(local_40);
  _objc_storeStrong(local_40 + 1,0);
  _objc_storeStrong(local_40 + 2,0);
  return local_11 & 1;
}

