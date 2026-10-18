// FUN_00230e34 @0x230e34


void FUN_00230e34(long param_1)



{

  ulong uVar1;

  float fVar2;

  

  _objc_retain();

  if ((param_1 != 0) && ((DAT_003eb0e8 & 1) != 0)) {

    uVar1 = _objc_opt_respondsToSelector(param_1,"setPreferredFrameRateRange:");

    if ((uVar1 & 1) != 0) {

      uVar1 = FUN_00230eb8();

      fVar2 = (float)uVar1;

      _CAFrameRateRangeMake(fVar2,fVar2,fVar2);

      _objc_msgSend(param_1,"setPreferredFrameRateRange:");

    }

  }

  _objc_release(param_1);

  return;

}




