// FUN_00787a20 @ 00787a20

byte FUN_00787a20(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long local_30;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = lVar1;
  do {
    if (local_30 == 0) {
      local_11 = 0;
LAB_00787b4c:
      _objc_storeStrong(&local_30);
      _objc_storeStrong(&local_28,0);
      _objc_storeStrong(&local_20,0);
      return local_11 & 1;
    }
    if (local_30 == local_28) {
      local_11 = 1;
      goto LAB_00787b4c;
    }
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_30;
    local_30 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  } while( true );
}

