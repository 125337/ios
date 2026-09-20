// FUN_015454a8 @ 015454a8

/* WARNING: Removing unreachable block (ram,0x01545540) */

byte FUN_015454a8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_traitCollection_026caba8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_11 = lVar2 == 2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

