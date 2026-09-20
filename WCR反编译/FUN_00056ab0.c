// FUN_00056ab0 @ 00056ab0

void FUN_00056ab0(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long local_30;
  uint local_28;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  bVar1 = lVar2 != 0;
  if (bVar1) {
    FUN_0004d7e4();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar2;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(lVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_removeObject__0269d678,local_18);
    _objc_sync_exit(lVar2);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    _objc_storeStrong(&local_30,0);
  }
  local_28 = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

