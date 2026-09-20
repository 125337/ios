// FUN_008c9608 @ 008c9608

void FUN_008c9608(void)

{
  long lVar1;
  
  if (DAT_028ce040 != 0) {
    _dispatch_block_cancel(DAT_028ce040);
    lVar1 = DAT_028ce040;
    DAT_028ce040 = 0;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  return;
}

