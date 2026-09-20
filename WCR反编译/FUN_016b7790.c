// FUN_016b7790 @ 016b7790

uint FUN_016b7790(undefined8 param_1)

{
  long lVar1;
  uint local_40;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028e3eba);
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar1;
  if (lVar1 == 0) {
    local_40 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_boolValue_026ca540);
    local_40 = (uint)lVar1;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return local_40 & 1;
}

