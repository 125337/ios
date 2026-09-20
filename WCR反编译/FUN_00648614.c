// FUN_00648614 @ 00648614

void FUN_00648614(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028cbb18)(local_18,local_20,local_28,param_4 & 1);
  lVar1 = local_28;
  bVar2 = false;
  if ((param_4 & 1) == 0) {
    lVar3 = local_18;
    FUN_00650304();
    _objc_retainAutoreleasedReturnValue();
    bVar2 = lVar1 == lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar3);
  }
  if (bVar2) {
    FUN_00661a3c(local_18);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

