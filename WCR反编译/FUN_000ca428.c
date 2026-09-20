// FUN_000ca428 @ 000ca428

undefined8 FUN_000ca428(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_48;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  lVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028c8292);
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar1;
  if (lVar1 == 0) {
    local_48 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_doubleValue_026ca608);
    local_48 = param_1;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return local_48;
}

