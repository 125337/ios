// FUN_00fc73c8 @ 00fc73c8

void FUN_00fc73c8(void)

{
  byte bVar1;
  undefined *puVar2;
  long local_28;
  
  local_28 = 0;
  while( true ) {
    puVar2 = PTR___dispatch_main_q_02578680;
    bVar1 = 0;
    if (local_28 < 0x3c) {
      bVar1 = DAT_028e2ef4 ^ 1;
    }
    if ((bVar1 & 1) == 0) break;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_sync();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if ((DAT_028e2ef4 & 1) != 0) {
      return;
    }
    _usleep(100000);
    local_28 = local_28 + 1;
  }
  return;
}

