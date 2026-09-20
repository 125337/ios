// FUN_003e6038 @ 003e6038

bool FUN_003e6038(void)

{
  void *pvVar1;
  
  FUN_003e6768();
  pvVar1 = _pthread_getspecific(DAT_028ca460);
  if (pvVar1 == (void *)0x0) {
    _pthread_setspecific(DAT_028ca460,(void *)((long)&MACH_HEADER.magic + 1));
  }
  return pvVar1 == (void *)0x0;
}

