// FUN_000c94e4 @0xc94e4


byte FUN_000c94e4(long param_1)



{

  int iVar1;

  ulong uVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  byte bVar5;

  undefined1 auVar6 [16];

  

  _objc_retain();

  if ((param_1 != 0) && (uVar2 = FUN_000c93cc(param_1), (uVar2 & 1) != 0)) {

    if ((DAT_003e7d19 & 1) == 0) {

      FUN_000c6fa8();

    }

    if (DAT_003e7d10 == '\x01') {

      iVar1 = FUN_000c849c(param_1);

      bVar5 = DAT_003e7d17;

      if (iVar1 != 0) goto LAB_000c96f0;

      FUN_00290e20(param_1);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      if (lVar3 != 0) {

        FUN_002a64c0(&_OBJC_CLASS___NSCharacterSet);

        auVar6 = _objc_retainAutoreleasedReturnValue();

        FUN_002a45c0(lVar3,auVar6._8_8_,auVar6._0_8_);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        _objc_release(auVar6._0_8_);

        auVar6 = FUN_00297fa0(uVar4);

        if (auVar6._0_8_ != 0) {

          auVar6 = FUN_00297820(uVar4,auVar6._8_8_,&cf_fY);

          if ((auVar6._0_8_ & 1) == 0) {

            auVar6 = FUN_00293580(uVar4,auVar6._8_8_,&cf_fY);

            if ((auVar6._0_8_ & 1) != 0) goto LAB_000c9644;

            auVar6 = FUN_00292a20(uVar4,auVar6._8_8_,&cf_more);

            if (auVar6._0_8_ == 0) goto LAB_000c9644;

            auVar6 = FUN_00297820(uVar4,auVar6._8_8_,&cf_T);

            if ((auVar6._0_8_ & 1) != 0) goto LAB_000c9644;

            auVar6 = FUN_00297820(uVar4,auVar6._8_8_,&cf_T0);

            if ((auVar6._0_8_ & 1) != 0) goto LAB_000c9644;

            auVar6 = FUN_00293580(uVar4,auVar6._8_8_,&cf_T);

            if ((auVar6._0_8_ & 1) != 0) goto LAB_000c9644;

            auVar6 = FUN_00293580(uVar4,auVar6._8_8_,&cf_T0);

            if ((auVar6._0_8_ & 1) != 0) goto LAB_000c9644;

            auVar6 = FUN_00297820(uVar4,auVar6._8_8_,&cf_s0_);

            if ((auVar6._0_8_ & 1) != 0) goto LAB_000c9644;

            iVar1 = FUN_00293580(uVar4,auVar6._8_8_,&cf_s0_);

            _objc_release(uVar4);

            _objc_release(lVar3);

            if (iVar1 == 0) goto LAB_000c967c;

          }

          else {

LAB_000c9644:

            _objc_release(uVar4);

            _objc_release(lVar3);

          }

          bVar5 = DAT_003e7d15;

          if ((DAT_003e7d19 & 1) == 0) {

            FUN_000c6fa8();

            bVar5 = DAT_003e7d15;

          }

          goto LAB_000c96f0;

        }

        _objc_release(uVar4);

        _objc_release(lVar3);

      }

LAB_000c967c:

      FUN_00290e20(param_1);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      lVar3 = auVar6._0_8_;

      bVar5 = 0;

      if (lVar3 == 0) goto LAB_000c96f0;

      iVar1 = FUN_00297820(lVar3,auVar6._8_8_,&cf_d__J_YU_);

      if (iVar1 == 0) {

        iVar1 = FUN_00293580(lVar3,extraout_x1,&cf_d__J_YU_);

        _objc_release(lVar3);

        if (iVar1 == 0) goto LAB_000c96ec;

      }

      else {

        _objc_release(lVar3);

      }

      bVar5 = DAT_003e7d16;

      if ((DAT_003e7d19 & 1) == 0) {

        FUN_000c6fa8();

        bVar5 = DAT_003e7d16;

      }

      goto LAB_000c96f0;

    }

  }

LAB_000c96ec:

  bVar5 = 0;

LAB_000c96f0:

  _objc_release(param_1);

  return bVar5 & 1;

}




