// FUN_00056970 @ 00056970

void FUN_00056970(long param_1)

{
  long lVar1;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1;
  local_20 = param_1;
  local_18 = param_1;
  FUN_000568fc();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(lVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_removeObject__0269d678,*(undefined8 *)(param_1 + 0x20));
  _objc_sync_exit(lVar1);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  _objc_storeStrong(&local_28,0);
  return;
}

