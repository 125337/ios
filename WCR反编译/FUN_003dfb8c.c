// FUN_003dfb8c @ 003dfb8c

void FUN_003dfb8c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = param_1 + 0x28;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = lVar1;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    FUN_0036a544(lVar1);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    FUN_00368c14(local_30,&cf_deleteGroupSessions);
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

