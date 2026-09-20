// FUN_0017343c @ 0017343c

/* WARNING: Type propagation algorithm not settling */

void FUN_0017343c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  _objc_getAssociatedObject(local_18,DAT_026df948);
  _objc_retainAutoreleasedReturnValue();
  local_30[0] = lVar1;
  if (lVar1 == 0) {
    FUN_00174748(local_18,0,&cf_elSmo_Q_);
  }
  else {
    FUN_0017363c(local_18,0,lVar1);
  }
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(local_30 + 1);
  _objc_storeStrong(&local_18,0);
  return;
}

