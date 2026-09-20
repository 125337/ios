// FUN_003f2a18 @ 003f2a18

void FUN_003f2a18(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if ((DAT_028ca530 & 1) == 0) {
    _objc_setAssociatedObject(local_18,DAT_026e0320,0,0);
  }
  _objc_setAssociatedObject(local_18,DAT_026e0310,0,0);
  _objc_setAssociatedObject(local_18,DAT_026e0328,0,0);
  _objc_setAssociatedObject(local_18,DAT_026e0330,0,0);
  _objc_storeStrong(&local_18,0);
  return;
}

