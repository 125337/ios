// FUN_00162938 @ 00162938

void FUN_00162938(long param_1)

{
  long lVar1;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x30;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    FUN_00162a30();
    if (lVar1 != 0) {
      FUN_00162b10(*(undefined8 *)(param_1 + 0x28),lVar1);
    }
    DAT_028c8859 = 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_onTopMsg__0269f5d8,*(undefined8 *)(param_1 + 0x20));
  }
  _objc_storeStrong(&local_28,0);
  return;
}

