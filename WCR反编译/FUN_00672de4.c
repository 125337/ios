// FUN_00672de4 @ 00672de4

long FUN_00672de4(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long local_20;
  long local_18;
  
  plVar1 = &local_20;
  local_20 = 0;
  _objc_storeStrong(plVar1,param_1);
  lVar2 = local_20;
  FUN_00668b18();
  _objc_retainAutoreleasedReturnValue();
  FUN_00673180();
  (*(code *)PTR__objc_release_02578630)(plVar1);
  local_18 = lVar2;
  if ((lVar2 == 0) &&
     (lVar2 = local_20, FUN_00673180(0,local_20,&cf_eeN), local_18 = lVar2, lVar2 == 0)) {
    lVar2 = local_20;
    FUN_00673180(0,local_20,&cf_eN);
    local_18 = lVar2;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

