// FUN_016897bc @ 016897bc

void FUN_016897bc(long param_1)

{
  long lVar1;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setHidden__026ca970,1);
  if (DAT_028e3c70 == local_28) {
    _objc_storeStrong(0,&DAT_028e3c70,0);
  }
  FUN_01686c18();
  _objc_storeStrong(&local_28,0);
  return;
}

