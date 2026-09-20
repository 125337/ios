// FUN_01b1a1b0 @ 01b1a1b0

void FUN_01b1a1b0(long param_1)

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
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar1,PTR_s_setImage__026ca978,*(undefined8 *)(param_1 + 0x20));
  }
  _objc_storeStrong(&local_28,0);
  return;
}

