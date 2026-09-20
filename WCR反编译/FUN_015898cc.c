// FUN_015898cc @ 015898cc

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_015898cc(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (DAT_028e3928 == 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    FUN_01589968();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = DAT_028e3928;
    DAT_028e3928 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    _objc_storeStrong(*(undefined8 *)(param_1 + 0x28),DAT_028e3928);
  }
  else {
    _objc_storeStrong(*(undefined8 *)(param_1 + 0x28),DAT_028e3928);
  }
  return;
}

