// FUN_007de278 @ 007de278

byte FUN_007de278(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
  do {
    if (local_28 == 0) {
      local_11 = 0;
LAB_007de3b4:
      _objc_storeStrong(&local_20,0);
      return local_11 & 1;
    }
    uVar1 = local_28;
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((uVar2 & 1) != 0) {
      local_11 = 1;
      goto LAB_007de3b4;
    }
    _class_getSuperclass();
  } while( true );
}

