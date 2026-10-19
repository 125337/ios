// _WCMYYImageByteAlign @0x91d04

long _WCMYYImageByteAlign(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = (param_1 + (param_2 - 1)) / param_2;
  }
  return uVar1 * param_2;
}

