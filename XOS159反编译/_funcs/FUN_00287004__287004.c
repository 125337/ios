// FUN_00287004 @0x287004


bool FUN_00287004(long param_1,undefined8 param_2,undefined8 param_3)



{

  undefined8 extraout_x1;

  

  _objc_retain();

  _objc_retain(param_2);

  _objc_retain(param_3);

  if (param_1 != 0) {

    FUN_002a24a0(param_1,extraout_x1,param_2,param_3);

  }

  _objc_release(param_3);

  _objc_release(param_2);

  _objc_release(param_1);

  return param_1 != 0;

}




