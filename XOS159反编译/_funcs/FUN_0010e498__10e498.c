// FUN_0010e498 @0x10e498


void FUN_0010e498(long param_1,long param_2,long param_3,long param_4)



{

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  

  _objc_retain();

  _objc_retain(param_2);

  _objc_retain(param_3);

  _objc_retain(param_4);

  if ((param_2 != 0) && (param_2 != param_1)) {

    if (param_3 != 0) {

      FUN_00295600(param_3);

      FUN_00293720(param_2,extraout_x1,param_1);

      FUN_0029e5e0(param_3);

    }

    if (param_4 != 0) {

      FUN_00295600(param_4);

      FUN_00293720(param_2,extraout_x1_00,param_1);

      FUN_0029e5e0(param_4);

    }

  }

  _objc_release(param_4);

  _objc_release(param_3);

  _objc_release(param_2);

  _objc_release(param_1);

  return;

}




