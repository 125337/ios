// FUN_000c9f70 @0xc9f70


undefined8 FUN_000c9f70(long param_1)



{

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar1;

  undefined1 auVar2 [16];

  

  _objc_retain();

  if ((param_1 != 0) && (auVar2 = FUN_00297fa0(param_1), uVar1 = auVar2._8_8_, auVar2._0_8_ != 0)) {

    if ((DAT_003e7d19 & 1) == 0) {

      FUN_000c6fa8();

      uVar1 = extraout_x1;

    }

    if (DAT_003e7d10 == '\x01') {

      if ((DAT_003e7d19 & 1) == 0) {

        FUN_000c6fa8();

        uVar1 = extraout_x1_00;

      }

      if (DAT_003e7d13 == '\x01') {

        auVar2 = FUN_00297820(param_1,uVar1,&cf_dt_icon);

        if ((((auVar2._0_8_ & 1) == 0) &&

            (auVar2 = FUN_00297820(param_1,auVar2._8_8_,&cf_dt_icon_dark), (auVar2._0_8_ & 1) == 0))

           && (auVar2 = FUN_00295f60(param_1,auVar2._8_8_,&cf_dt_icon_), (auVar2._0_8_ & 1) == 0)) {

          uVar1 = FUN_00295f60(param_1,auVar2._8_8_,&cf_dt_icon_dark_);

        }

        else {

          uVar1 = 1;

        }

        goto LAB_000ca018;

      }

    }

  }

  uVar1 = 0;

LAB_000ca018:

  _objc_release(param_1);

  return uVar1;

}




