// FUN_00317924 @ 00317924

void FUN_00317924(undefined8 param_1,long param_2)

{
  long lVar1;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if ((local_18 != 0) && (-1 < param_2)) {
    lVar1 = local_18;
    FUN_00322304(local_18,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

