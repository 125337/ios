// FUN_000cb95c @ 000cb95c

undefined8 FUN_000cb95c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_58;
  long local_30;
  undefined4 local_24;
  long local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    lVar1 = local_20;
    _objc_getAssociatedObject(local_20,&DAT_028c8294);
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar1;
    if (lVar1 == 0) {
      local_58 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_doubleValue_026ca608);
      local_58 = param_1;
    }
    local_18 = local_58;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

