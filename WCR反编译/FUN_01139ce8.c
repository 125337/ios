// FUN_01139ce8 @ 01139ce8

void FUN_01139ce8(void)

{
  bool bVar1;
  undefined *puVar2;
  
  _os_unfair_lock_lock(&DAT_028e35c8);
  DAT_028e35f0 = 1;
  DAT_028e35f8 = DAT_028e35f8 + 1;
  bVar1 = (DAT_028e3600 & 1) == 0;
  if (bVar1) {
    DAT_028e3600 = 1;
  }
  _os_unfair_lock_unlock(&DAT_028e35c8);
  puVar2 = PTR___dispatch_main_q_02578680;
  if (bVar1) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  return;
}

