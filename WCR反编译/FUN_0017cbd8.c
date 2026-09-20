// FUN_0017cbd8 @ 0017cbd8

void FUN_0017cbd8(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long local_38;
  uint local_30;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar2 = local_18;
  FUN_0017b8cc();
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  bVar1 = lVar2 != 0;
  if (bVar1) {
    FUN_0017cd6c();
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar2;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(lVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeObject__0269d678,local_20);
    _objc_sync_exit(lVar2);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    _objc_storeStrong(&local_38,0);
  }
  local_30 = (uint)!bVar1;
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

