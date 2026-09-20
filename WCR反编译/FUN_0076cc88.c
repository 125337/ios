// FUN_0076cc88 @ 0076cc88

void FUN_0076cc88(void)

{
  if (DAT_028cc8a0 != (dispatch_source_t)0x0) {
    _dispatch_source_cancel(DAT_028cc8a0);
    _objc_storeStrong(&DAT_028cc8a0,0);
  }
  return;
}

