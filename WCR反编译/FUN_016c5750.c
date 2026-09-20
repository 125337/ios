// FUN_016c5750 @ 016c5750

/* WARNING: Type propagation algorithm not settling */

void FUN_016c5750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long local_30 [3];
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_30[1] = 0;
  local_30[2] = param_2;
  _objc_storeStrong(local_30 + 1,param_3);
  lVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028e3f02);
  _objc_retainAutoreleasedReturnValue();
  local_30[0] = lVar1;
  _objc_setAssociatedObject(local_18,&DAT_028e3f02,0,1);
  if (local_30[0] == 0) {
    FUN_016abf68(&cf_mR1Y_NNe_N1Ye_c);
  }
  else {
    FUN_016c5890(local_30[0]);
  }
  _objc_storeStrong(local_30);
  _objc_storeStrong(local_30 + 1,0);
  _objc_storeStrong(&local_18,0);
  return;
}

