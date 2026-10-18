// FUN_0022fde4 @0x22fde4


void FUN_0022fde4(long param_1)



{

  ulong uVar1;

  float fVar2;

  

  _objc_retain();

  if ((param_1 != 0) && ((DAT_003eb0e8 & 1) != 0)) {

    uVar1 = FUN_00230eb8();

    fVar2 = (float)uVar1;

    _CAFrameRateRangeMake(fVar2,fVar2,fVar2);

    FUN_002a0800(param_1);

  }

  _objc_release(param_1);

  return;

}




