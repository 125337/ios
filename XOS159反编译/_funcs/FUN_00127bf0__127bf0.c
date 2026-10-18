// FUN_00127bf0 @0x127bf0


undefined8 FUN_00127bf0(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined1 auVar3 [16];

  

  _objc_retain();

  if (param_1 == 0) {

    uVar1 = 0;

  }

  else {

    _objc_opt_class(param_1);

    _NSStringFromClass();

    uVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_002984e0();

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar1);

    auVar3 = FUN_00293580(uVar2,extraout_x1,&cf_pay);

    if ((((auVar3._0_8_ & 1) == 0) &&

        (auVar3 = FUN_00293580(uVar2,auVar3._8_8_,&cf_transfer), (auVar3._0_8_ & 1) == 0)) &&

       (auVar3 = FUN_00293580(uVar2,auVar3._8_8_,&cf_hongbao), (auVar3._0_8_ & 1) == 0)) {

      uVar1 = FUN_00293580(uVar2,auVar3._8_8_,&cf_redpacket);

    }

    else {

      uVar1 = 1;

    }

    _objc_release(uVar2);

  }

  _objc_release(param_1);

  return uVar1;

}




