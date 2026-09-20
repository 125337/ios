// FUN_011148c0 @ 011148c0

void FUN_011148c0(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  _objc_storeStrong(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setTitleLongPressAuthenticating__026aef80,0);
  lVar2 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_pendingTitleLongPressSuccess_026aefb8);
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar2;
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_code_026ae1d0);
    bVar1 = true;
    if ((lVar2 != -2) && (bVar1 = true, lVar2 != -4)) {
      bVar1 = lVar2 == -9;
    }
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_setPendingTitleLongPressSuccess__026aef88,0);
    }
    else {
      uVar3 = *(ulong *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_titleLongPressRequirePassword_026aefa8);
      if ((uVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x20),PTR_s_setPendingTitleLongPressSuccess__026aef88,0
                  );
        if (local_28 != 0) {
          (**(code **)(local_28 + 0x10))();
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x20),PTR_s_presentTitleLongPressPasswordAle_026aefa0);
      }
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_suppressForegroundExitAutoHideFo_026aefb0);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_markPasswordVerifiedForProtectio_026aefc0);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setPendingTitleLongPressSuccess__026aef88,0);
    if (local_28 != 0) {
      (**(code **)(local_28 + 0x10))();
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

