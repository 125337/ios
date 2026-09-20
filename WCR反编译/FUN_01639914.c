// FUN_01639914 @ 01639914

void FUN_01639914(void)

{
  long lVar1;
  
  if (DAT_028e3c88 != 0) {
    _dispatch_block_cancel(DAT_028e3c88);
    lVar1 = DAT_028e3c88;
    DAT_028e3c88 = 0;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  return;
}

