// FUN_01e9c254 @ 01e9c254

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_01e9c254(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_028e4838 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSCache_026ce1d8;
    _objc_alloc_init();
    puVar1 = DAT_028e4838;
    DAT_028e4838 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e4838,PTR_s_setCountLimit__0269e0d0,200);
  }
  _objc_retainAutoreleaseReturnValue(DAT_028e4838);
  return;
}

