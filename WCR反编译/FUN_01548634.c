// FUN_01548634 @ 01548634

byte FUN_01548634(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long local_20;
  byte local_11;
  
  plVar1 = &local_20;
  local_20 = 0;
  _objc_storeStrong(plVar1,param_1);
  FUN_0158020c();
  if (((ulong)plVar1 & 1) == 0) {
    FUN_01580228();
    if (((ulong)plVar1 & 1) == 0) {
      local_11 = 0;
    }
    else {
      lVar2 = local_20;
      FUN_01551974();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_11 = lVar3 != 0;
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
  }
  else {
    lVar2 = local_20;
    FUN_01551974();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = lVar3 != 0;
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

