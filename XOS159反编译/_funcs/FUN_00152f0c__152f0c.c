// FUN_00152f0c @0x152f0c


void FUN_00152f0c(long param_1,undefined8 param_2,undefined8 param_3)



{

  int iVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  long lVar8;

  ulong uVar9;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined1 auVar10 [16];

  undefined1 auVar11 [16];

  

  _objc_retain(param_3);

  FUN_002a6220(param_3);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  lVar3 = FUN_002a4e60();

  FUN_00139ff0();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  if (lVar3 < 0x1e14) goto LAB_001531d0;

  lVar5 = FUN_00293860(uVar4);

  if (lVar5 <= lVar3 + -0x1e14) goto LAB_001531d0;

  FUN_00299500(uVar4);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_00299540(auVar10._0_8_,auVar10._8_8_,&cf_userName);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_retain();

  _objc_retain(param_1);

  if ((param_1 != 0) && (lVar3 != 0)) {

    if (DAT_003e89b8 == 0) {

      DAT_003e89b8 = _objc_getClass("MMContext");

    }

    lVar5 = DAT_003e89b8;

    _objc_retain(DAT_003e89b8);

    _objc_autorelease(lVar5);

    FUN_00293c40();

    uVar6 = _objc_retainAutoreleasedReturnValue();

    if (DAT_003e89c0 == 0) {

      DAT_003e89c0 = _objc_getClass("CContactMgr");

    }

    lVar5 = DAT_003e89c0;

    _objc_retain(DAT_003e89c0);

    _objc_autorelease(lVar5);

    FUN_00295b60(uVar6,extraout_x1,lVar5);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar6);

    FUN_00295820(uVar7,extraout_x1_00,lVar3);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    if (lVar5 != 0) {

      if (DAT_003e89b8 == 0) {

        DAT_003e89b8 = _objc_getClass("MMContext");

      }

      lVar8 = DAT_003e89b8;

      _objc_retain(DAT_003e89b8);

      _objc_autorelease(lVar8);

      FUN_00293c40();

      uVar6 = _objc_retainAutoreleasedReturnValue();

      if (DAT_003e8a10 == 0) {

        DAT_003e8a10 = _objc_getClass("MMMsgLogicManager");

      }

      lVar8 = DAT_003e8a10;

      _objc_retain(DAT_003e8a10);

      _objc_autorelease(lVar8);

      FUN_00295b60(uVar6,extraout_x1_01,lVar8);

      lVar8 = _objc_retainAutoreleasedReturnValue();

      _objc_release(uVar6);

      if (lVar8 != 0) {

        iVar1 = FUN_00148360();

        uVar6 = extraout_x1_02;

        if (iVar1 != 0) {

          FUN_002990e0(param_1);

          auVar11 = _objc_retainAutoreleasedReturnValue();

          uVar6 = auVar11._8_8_;

          if (auVar11._0_8_ != 0) {

            uVar9 = _objc_opt_respondsToSelector

                              (lVar8,

                               "PushOtherBaseMsgControllerByContact:navigationController:animated:")

            ;

            _objc_release(auVar11._0_8_);

            uVar6 = extraout_x1_03;

            if ((uVar9 & 1) != 0) {

              FUN_002990e0(param_1);

              auVar11 = _objc_retainAutoreleasedReturnValue();

              FUN_00290b00(lVar8,auVar11._8_8_,lVar5,auVar11._0_8_,1);

              _objc_release(auVar11._0_8_);

              goto LAB_00153198;

            }

          }

        }

        FUN_00290b60(lVar8,uVar6,lVar5,0,param_1,1);

      }

LAB_00153198:

      _objc_release(lVar8);

      _objc_release(lVar5);

    }

    _objc_release(uVar7);

  }

  _objc_release(param_1);

  _objc_release(lVar3);

  _objc_release(lVar3);

  _objc_release(auVar10._0_8_);

LAB_001531d0:

  _objc_release(uVar4);

  _objc_release(uVar2);

  _objc_release(param_3);

  return;

}




