// FUN_00694c18 @ 00694c18

/* WARNING: Type propagation algorithm not settling */

void FUN_00694c18(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long local_20 [2];
  
  local_20[1] = 0;
  _objc_storeStrong(local_20 + 1,param_1);
  local_20[0] = 0;
  _objc_storeStrong(local_20,param_2);
  lVar1 = local_20[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_20[0],PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    lVar2 = local_20[0];
    FUN_0068bef8(lVar1);
    _objc_retainAutoreleasedReturnValue();
    FUN_0068be8c(&cf__net_respbody);
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  _objc_storeStrong(local_20);
  _objc_storeStrong(local_20 + 1,0);
  return;
}

