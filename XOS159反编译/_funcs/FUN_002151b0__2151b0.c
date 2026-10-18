// FUN_002151b0 @0x2151b0


undefined8 FUN_002151b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  long lVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  

  _objc_retain();

  _objc_retain(param_2);

  FUN_00299520(param_1,extraout_x1,param_2);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar1 != 0) {

    param_3 = FUN_002924c0(param_1,extraout_x1_00,param_2);

  }

  _objc_release(param_2);

  _objc_release(param_1);

  return param_3;

}




