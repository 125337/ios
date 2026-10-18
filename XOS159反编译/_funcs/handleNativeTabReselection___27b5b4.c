// handleNativeTabReselection: @0x27b5b4


/* Function Stack Size: 0x18 bytes */



bool XZYHomeDockLiquidContainer::handleNativeTabReselection_

               (ID param_1,SEL param_2,long_long param_3)



{

  int iVar1;

  long lVar2;

  ulong uVar3;

  long lVar4;

  undefined8 uVar5;

  long_long lVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  long lVar9;

  bool bVar10;

  double dVar11;

  undefined1 auVar12 [16];

  

  FUN_002a6520();

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (((((lVar2 == 0) || (uVar3 = FUN_002978a0(param_1), (uVar3 & 1) != 0)) ||

       (dVar11 = (double)FUN_002916a0(param_1), dVar11 <= 0.01)) ||

      ((iVar1 = FUN_00297b60(param_1), iVar1 == 0 || (lVar4 = FUN_0029a520(param_1), lVar4 != 0))))

     || ((uVar3 = FUN_0029c460(param_1), (uVar3 & 1) != 0 ||

         (uVar3 = FUN_002a5580(param_1), (uVar3 & 1) != 0)))) {

    bVar10 = 0;

    goto LAB_0027b644;

  }

  FUN_002a5120(param_1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  uVar3 = FUN_002948e0();

  if (((uVar3 & 1) == 0) && (lVar6 = FUN_0029c2c0(param_1), param_3 == lVar6)) {

    lVar6 = FUN_0029a900(param_1);

    bVar10 = 0;

    if ((-1 < (long)param_3) && (param_3 == lVar6)) {

      FUN_002a4d60(param_1);

      uVar7 = _objc_retainAutoreleasedReturnValue();

      lVar4 = FUN_00293860();

      _objc_release(uVar7);

      _objc_release(uVar5);

      _objc_release(lVar2);

      if (lVar4 <= (long)param_3) {

        return 0;

      }

      FUN_0029c520(param_1);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      iVar1 = FUN_002977a0();

      if (iVar1 == 0) {

LAB_0027b790:

        _objc_release(uVar5);

      }

      else {

        FUN_0029c520(param_1);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        FUN_002a6220();

        lVar2 = _objc_retainAutoreleasedReturnValue();

        if (lVar2 == 0) {

LAB_0027b788:

          _objc_release(uVar7);

          goto LAB_0027b790;

        }

        FUN_0029c520(param_1);

        uVar8 = _objc_retainAutoreleasedReturnValue();

        FUN_002a6220();

        lVar4 = _objc_retainAutoreleasedReturnValue();

        FUN_002a4880(param_1);

        lVar9 = _objc_retainAutoreleasedReturnValue();

        if (lVar4 != lVar9) {

          _objc_release();

          _objc_release(lVar4);

          _objc_release(uVar8);

          _objc_release(lVar2);

          goto LAB_0027b788;

        }

        lVar6 = FUN_00299080(param_1);

        _objc_release(lVar9);

        _objc_release(lVar4);

        _objc_release(uVar8);

        _objc_release(lVar2);

        _objc_release(uVar7);

        _objc_release(uVar5);

        if ((param_3 == lVar6) && (uVar3 = _UIAccessibilityIsVoiceOverRunning(), (uVar3 & 1) == 0))

        {

          return 1;

        }

      }

      uVar3 = FUN_0029c4e0(param_1);

      if ((uVar3 & 1) != 0) {

        return 1;

      }

      FUN_002a4d60(param_1);

      auVar12 = _objc_retainAutoreleasedReturnValue();

      lVar2 = auVar12._0_8_;

      FUN_00299500(lVar2,auVar12._8_8_,param_3);

      auVar12 = _objc_retainAutoreleasedReturnValue();

      uVar5 = auVar12._0_8_;

      FUN_0029b640(param_1,auVar12._8_8_,uVar5,0);

      bVar10 = 1;

    }

  }

  else {

    bVar10 = 0;

  }

  _objc_release(uVar5);

LAB_0027b644:

  _objc_release(lVar2);

  return bVar10;

}




