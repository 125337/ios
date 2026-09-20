// FUN_016a75bc @ 016a75bc

/* WARNING: Type propagation algorithm not settling */

void FUN_016a75bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long local_30 [3];
  long local_18;
  
  local_30[1] = 0;
  local_30[2] = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  lVar1 = local_18;
  FUN_016d3aa8();
  _objc_retainAutoreleasedReturnValue();
  local_30[0] = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
  if (lVar1 == 0) {
    FUN_016abf68(&cf__b);
  }
  else {
    FUN_016d42a0(local_18,local_30[0]);
  }
  _objc_storeStrong(local_30);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

