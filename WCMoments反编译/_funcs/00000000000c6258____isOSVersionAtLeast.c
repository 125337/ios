// ___isOSVersionAtLeast @0xc6258

bool ___isOSVersionAtLeast(int param_1,int param_2,int param_3)

{
  _dispatch_once_f((dispatch_once_t *)&DAT_0012c6b0,(void *)0x0,
                   _compatibilityInitializeAvailabilityCheck);
  if (param_1 < __MergedGlobals) {
    return true;
  }
  if (__MergedGlobals < param_1) {
    return false;
  }
  if (param_2 < DAT_0012c6a4) {
    return true;
  }
  if (DAT_0012c6a4 < param_2) {
    return false;
  }
  return param_3 <= DAT_0012c6a8;
}

