// FUN_000ac078 @0xac078


void FUN_000ac078(double param_1,double param_2,undefined8 param_3,double param_4,undefined8 param_5

                 )



{

  undefined8 extraout_x1;

  undefined8 uVar1;

  double dVar2;

  

  _objc_retain();

  uVar1 = FUN_00295600(param_5);

  dVar2 = (param_1 - param_4) + -8.0 + (double)DAT_003e7b38;

  if (1.0 < ABS(param_2 - dVar2)) {

    FUN_00292180(&_OBJC_CLASS___CATransaction);

    FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1,1);

    FUN_0029e5e0(uVar1,dVar2,param_3,param_4,param_5);

    FUN_002930a0(&_OBJC_CLASS___CATransaction);

  }

  _objc_release(param_5);

  return;

}




