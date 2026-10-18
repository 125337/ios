// FUN_0018c460 @0x18c460


void FUN_0018c460(double param_1,long param_2,long param_3,long param_4,long param_5,ulong param_6)



{

  undefined1 auVar1 [16];

  

  _objc_retain();

  if ((((param_2 != 0) && (0 < (long)param_6)) && (param_3 <= param_4)) && (0.0 < param_1)) {

    FUN_00292340((double)param_3 / param_1,(double)param_5 / param_1,

                 ((double)(param_4 - param_3) + 1.0) / param_1,(double)param_6 / param_1,

                 &_OBJC_CLASS___UIBezierPath);

    auVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_002919c0(param_2,auVar1._8_8_,auVar1._0_8_);

    _objc_release(auVar1._0_8_);

  }

  _objc_release(param_2);

  return;

}




