// FUN_016a948c @ 016a948c

byte FUN_016a948c(undefined8 param_1)

{
  ulong uVar1;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  _objc_getAssociatedObject(local_20,&DAT_028e3e50);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_boolValue_026ca540);
  local_11 = (uVar1 & 1) != 0;
  if ((bool)local_11) {
    _objc_setAssociatedObject(local_20,&DAT_028e3e50,0,1);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

