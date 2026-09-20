// FUN_00758b10 @ 00758b10

void FUN_00758b10(undefined8 param_1,undefined8 param_2)

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
    FUN_00758ec4();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
    if (lVar1 != 0) {
      _objc_setAssociatedObject(local_18,DAT_026f45e0,local_30,1);
    }
    _objc_storeStrong(&local_30,0);
    local_24 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

