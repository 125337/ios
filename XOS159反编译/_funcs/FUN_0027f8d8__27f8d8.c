// FUN_0027f8d8 @0x27f8d8


void FUN_0027f8d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5

                 ,undefined8 param_6)



{

  int iVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  _objc_retain();

  _objc_retain(param_3);

  _objc_retain(param_4);

  _objc_retain(param_5);

  if ((param_4 != 0) && (param_5 != 0)) {

    iVar1 = FUN_002977c0(param_4,extraout_x1,param_5);

    if (iVar1 == 0) {

      FUN_0028c91c(param_3,param_6);

      auVar3 = _objc_retainAutoreleasedReturnValue();

      uVar2 = auVar3._0_8_;

      FUN_0029e600(uVar2,auVar3._8_8_,param_4);

      FUN_002a20a0(uVar2,extraout_x1_01,param_5);

      FUN_00284e5c(param_1,param_2,uVar2,param_3);

    }

    else {

      FUN_002a44a0(&cf_xzy_liquid_motion_,extraout_x1_00,param_3);

      auVar3 = _objc_retainAutoreleasedReturnValue();

      uVar2 = auVar3._0_8_;

      FUN_0029b260(param_2,auVar3._8_8_,uVar2);

    }

    _objc_release(uVar2);

  }

  _objc_release(param_5);

  _objc_release(param_4);

  _objc_release(param_3);

  _objc_release(param_2);

  return;

}




