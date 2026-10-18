// FUN_00212d60 @0x212d60


undefined8 FUN_00212d60(undefined8 param_1)



{

  undefined8 uVar1;

  ulong uVar2;

  long lVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  

  _objc_retain();

  FUN_002a6080(param_1,extraout_x1,&cf_m_uTopOrder);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar2 = _objc_opt_respondsToSelector(uVar1,"longLongValue");

  if (((uVar2 & 1) == 0) || (lVar3 = FUN_002984c0(uVar1), lVar3 < 1)) {

    _objc_release(uVar1);

    FUN_002a6080(param_1,extraout_x1_00,&cf_m_uTopTime);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    uVar2 = _objc_opt_respondsToSelector(uVar1,"longLongValue");

    if (((uVar2 & 1) == 0) || (lVar3 = FUN_002984c0(uVar1), lVar3 < 1)) {

      _objc_release(uVar1);

      FUN_002a6080(param_1,extraout_x1_01,&cf_m_bIsTopSession);

      uVar1 = _objc_retainAutoreleasedReturnValue();

      uVar2 = _objc_opt_respondsToSelector(uVar1,"boolValue");

      if (((uVar2 & 1) == 0) || (uVar2 = FUN_002924e0(uVar1), (uVar2 & 1) == 0)) {

        _objc_release(uVar1);

        uVar1 = 0;

        goto LAB_00212e54;

      }

    }

  }

  _objc_release(uVar1);

  uVar1 = 1;

LAB_00212e54:

  _objc_release(param_1);

  return uVar1;

}




