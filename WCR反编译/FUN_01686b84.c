// FUN_01686b84 @ 01686b84

void FUN_01686b84(void)

{
  long lVar1;
  
  if (DAT_028e3cd8 != 0) {
    _dispatch_block_cancel(DAT_028e3cd8);
    lVar1 = DAT_028e3cd8;
    DAT_028e3cd8 = 0;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  return;
}

