// FUN_00840570 @ 00840570

/* WARNING: Type propagation algorithm not settling */

void FUN_00840570(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long local_20 [2];
  
  local_20[1] = 0;
  _objc_storeStrong(local_20 + 1,param_1);
  plVar1 = local_20;
  local_20[0] = 0;
  _objc_storeStrong(plVar1,param_2);
  FUN_0082baac();
  if (((ulong)plVar1 & 1) != 0) {
    _getpid();
    FUN_0082baf4();
    _NSLog(&cf__wcr__page_bg_event___pid__dmemAvailKB__llu__);
  }
  _objc_storeStrong(local_20);
  _objc_storeStrong(local_20 + 1,0);
  return;
}

