// FUN_01bb3d4c @ 01bb3d4c

void FUN_01bb3d4c(long param_1)

{
  long lVar1;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x40;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if (lVar1 == 0) {
    if (*(long *)(param_1 + 0x38) != 0) {
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar1,PTR_s_wcrRepo_attemptLocateWrap_sessio_026c0448,*(undefined8 *)(param_1 + 0x20)
               ,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x48),
               *(undefined8 *)(param_1 + 0x30),*(long *)(param_1 + 0x50) + -1,
               *(undefined8 *)(param_1 + 0x38));
  }
  _objc_storeStrong(&local_28,0);
  return;
}

