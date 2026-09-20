// FUN_01686ec0 @ 01686ec0

void FUN_01686ec0(void)

{
  long lVar1;
  
  if (DAT_028e3ce8 != 0) {
    _dispatch_block_cancel(DAT_028e3ce8);
    lVar1 = DAT_028e3ce8;
    DAT_028e3ce8 = 0;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  return;
}

