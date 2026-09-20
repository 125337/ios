// FUN_00270810 @ 00270810

void FUN_00270810(byte param_1)

{
  undefined8 *local_10;
  
  if ((param_1 & 1) == 0) {
    local_10 = &DAT_0257b140;
  }
  else {
    local_10 = &DAT_0257b138;
  }
  _objc_retainAutoreleaseReturnValue(*local_10);
  return;
}

