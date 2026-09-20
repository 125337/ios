// FUN_0065ea04 @ 0065ea04

long FUN_0065ea04(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_28;
  long local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  if (local_20 + -1 == 0) {
    lVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (lVar4 == 0) {
      local_18 = 0;
    }
    else {
      FUN_00656f10();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar4;
      _objc_sync_enter();
      FUN_00656f10();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_18 = lVar3;
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_release_02578630)(lVar1);
      _objc_sync_exit(lVar4);
      (*(code *)PTR__objc_release_02578630)(lVar4);
    }
  }
  else {
    lVar4 = local_28;
    FUN_0065ebf0(local_20 + -1);
    local_18 = lVar4;
  }
  _objc_storeStrong(&local_28,0);
  return local_18;
}

