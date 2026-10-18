// FUN_002049f4 @0x2049f4


undefined1  [16] FUN_002049f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)



{

  int iVar1;

  undefined8 uVar2;

  long lVar3;

  long lVar4;

  double dVar5;

  undefined1 auVar6 [16];

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  

  _objc_retain(param_3);

  if ((DAT_003eaa30 == '\x01') && (auVar7 = FUN_0021af90(param_1), (auVar7._0_8_ & 1) != 0)) {

    uVar2 = FUN_002a4de0(param_1,auVar7._8_8_,param_3,param_4);

    FUN_002115b0(param_1);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_00299420(&_OBJC_CLASS___NSNumber,auVar7._8_8_,param_4);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    iVar1 = FUN_00293560(auVar7._0_8_,auVar8._8_8_,auVar8._0_8_);

    _objc_release(auVar8._0_8_);

    if (iVar1 == 0) {

      auVar8 = (*DAT_003eac08)(param_1,param_2,param_3,param_4);

    }

    else if (DAT_003eaac8 - 5U < 2) {

      FUN_0020e91c(param_1);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      if ((lVar3 == 0) || (lVar4 = FUN_002974a0(lVar3), lVar4 != param_4)) {

        iVar1 = FUN_0021c15c(param_1,param_4,uVar2);

        dVar5 = DAT_003eaae8;

        if (iVar1 == 0) {

          dVar5 = 2.2250738585072014e-308;

        }

      }

      else {

        iVar1 = FUN_0021bf00(param_1,param_4);

        dVar5 = DAT_003eaae8;

        if (iVar1 == 0) {

          dVar5 = 0.0;

        }

        dVar5 = dVar5 + DAT_003e7160 * 72.4;

      }

      uVar2 = 0;

      _objc_release(lVar3);

      auVar8._8_8_ = uVar2;

      auVar8._0_8_ = dVar5;

    }

    else {

      iVar1 = FUN_0021c15c(param_1,param_4,uVar2);

      if (iVar1 == 0) {

        iVar1 = FUN_0021bf00(param_1,param_4);

        auVar8._8_8_ = 0;

        auVar8._0_8_ = DAT_003eaae8;

        if (iVar1 == 0) {

          auVar8 = ZEXT816(0x10000000000000);

        }

      }

      else {

        auVar8._8_8_ = 0;

        auVar8._0_8_ = DAT_003eaae8;

      }

    }

    uVar2 = auVar8._8_8_;

    _objc_release(auVar7._0_8_);

    auVar7._8_8_ = uVar2;

    auVar7._0_8_ = auVar8._0_8_;

  }

  else {

    auVar7 = (*DAT_003eac08)(param_1,param_2,param_3,param_4);

  }

  uVar2 = auVar7._8_8_;

  _objc_release(param_3);

  auVar6._8_8_ = uVar2;

  auVar6._0_8_ = auVar7._0_8_;

  return auVar6;

}




