// FUN_005367f4 @ 005367f4

void FUN_005367f4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_38;
  uint local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  lVar2 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar2;
  if (lVar2 == 0) {
    local_2c = 1;
  }
  else {
    local_38 = 0;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(lVar2);
    lVar3 = local_28;
    _objc_getAssociatedObject(local_28,DAT_026f4350);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_38;
    local_38 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    _objc_setAssociatedObject(local_28,DAT_026f4350,0,1);
    _objc_setAssociatedObject(local_28,DAT_026f4358,0,1);
    _objc_sync_exit(lVar2);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
    if (lVar2 != 0) {
      FUN_005369b4(local_28,local_38);
    }
    local_2c = (uint)(lVar2 == 0);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

