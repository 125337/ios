// FUN_0064875c @ 0064875c

void FUN_0064875c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028cbb20)(local_18,local_20,local_28);
  lVar1 = local_28;
  lVar2 = local_18;
  FUN_00650304();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar1 == lVar2) {
    FUN_00661a3c(0,local_18);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

