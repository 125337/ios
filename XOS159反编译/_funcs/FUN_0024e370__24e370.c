// FUN_0024e370 @0x24e370


undefined1  [16] FUN_0024e370(undefined8 param_1)



{

  undefined8 uVar1;

  ulong uVar2;

  long lVar3;

  long lVar4;

  undefined8 extraout_x1;

  undefined8 uVar5;

  ulong uVar6;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  undefined1 auVar9 [16];

  double local_58;

  

  _objc_retain();

  uVar1 = _objc_opt_class(&_OBJC_CLASS___NSString);

  uVar2 = _objc_opt_isKindOfClass(param_1,uVar1);

  uVar1 = 0;

  uVar6 = 0;

  if ((uVar2 & 1) != 0) {

    auVar7 = FUN_00297fa0(param_1);

    uVar5 = auVar7._8_8_;

    if (auVar7._0_8_ != 0) {

      if (DAT_003eb308 == 0) {

        FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

        lVar3 = _objc_retainAutoreleasedReturnValue();

        lVar4 = DAT_003eb308;

        DAT_003eb308 = lVar3;

        _objc_release(lVar4);

        uVar5 = extraout_x1;

      }

      FUN_00299540(DAT_003eb308,uVar5,param_1);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      lVar4 = auVar7._0_8_;

      if (lVar4 == 0) {

        auVar7 = FUN_0029abc0(param_1,auVar7._8_8_,&cf_xzy_template_lift_,1);

        lVar3 = auVar7._8_8_;

        if (auVar7._0_8_ == 0x7fffffffffffffff) {

          FUN_002a00a0(DAT_003eb308,lVar3,&PTR__OBJC_CLASS___NSConstantDoubleNumber_003bf730,param_1

                      );

          auVar8._8_8_ = 0;

          auVar8._0_8_ = uVar6;

          auVar7 = auVar8 << 0x40;

        }

        else {

          FUN_002a47c0(param_1,lVar3,auVar7._0_8_ + lVar3);

          auVar7 = _objc_retainAutoreleasedReturnValue();

          FUN_0029be20(&_OBJC_CLASS___NSScanner,auVar7._8_8_,auVar7._0_8_);

          auVar8 = _objc_retainAutoreleasedReturnValue();

          local_58 = 0.0;

          auVar9 = FUN_0029bdc0(auVar8._0_8_,auVar8._8_8_,&local_58);

          if ((auVar9._0_8_ & 1) == 0) {

            FUN_002a00a0(DAT_003eb308,auVar9._8_8_,

                         &PTR__OBJC_CLASS___NSConstantDoubleNumber_003bf730,param_1);

          }

          else {

            uVar1 = NEON_fminnm(local_58,0x4044000000000000);

            if (local_58 <= 0.0) {

              uVar1 = 0;

            }

            uVar6 = 0;

            FUN_002993a0(uVar1,&_OBJC_CLASS___NSNumber);

            auVar9 = _objc_retainAutoreleasedReturnValue();

            FUN_002a00a0(DAT_003eb308,auVar9._8_8_,auVar9._0_8_,param_1);

            _objc_release(auVar9._0_8_);

          }

          _objc_release(auVar8._0_8_);

          _objc_release(auVar7._0_8_);

          auVar7._8_8_ = uVar6;

          auVar7._0_8_ = uVar1;

        }

      }

      else {

        auVar7 = FUN_00294860(lVar4);

      }

      uVar6 = auVar7._8_8_;

      uVar1 = auVar7._0_8_;

      _objc_release(lVar4);

    }

  }

  _objc_release(param_1);

  auVar9._8_8_ = uVar6;

  auVar9._0_8_ = uVar1;

  return auVar9;

}




