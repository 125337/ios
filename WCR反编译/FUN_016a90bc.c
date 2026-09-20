// FUN_016a90bc @ 016a90bc

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_016a90bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCache_026ce1d8;
  _objc_alloc_init();
  puVar1 = DAT_028e3d58;
  DAT_028e3d58 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3d58,PTR_s_setCountLimit__0269e0d0,0x14);
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028e3d58,PTR_s_setTotalCostLimit__0269e0d8,&LAB_00a00000);
  return;
}

