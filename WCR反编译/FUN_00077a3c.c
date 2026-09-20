// FUN_00077a3c @ 00077a3c

void FUN_00077a3c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long local_30;
  undefined4 local_24;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (local_18 == 0) {
    local_24 = 1;
  }
  else {
    lVar1 = local_20;
    FUN_00071d98();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      _objc_setAssociatedObject(local_18,DAT_026df758,0,1);
    }
    else {
      _objc_setAssociatedObject(local_18,DAT_026df758,local_30,3);
    }
    _objc_storeStrong(&local_30,0);
    local_24 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

