// FUN_01686e24 @ 01686e24

void FUN_01686e24(void)

{
  long lVar1;
  
  if (DAT_028e3ce0 != 0) {
    _dispatch_block_cancel(DAT_028e3ce0);
    lVar1 = DAT_028e3ce0;
    DAT_028e3ce0 = 0;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  return;
}

