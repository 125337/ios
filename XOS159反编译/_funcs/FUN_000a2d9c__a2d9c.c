// FUN_000a2d9c @0xa2d9c


bool FUN_000a2d9c(undefined1 param_1 [16],double param_2,double param_3,double param_4,

                 undefined8 param_5,undefined8 param_6)



{

  ulong uVar1;

  long lVar2;

  undefined8 uVar3;

  long lVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  bool bVar8;

  double dVar9;

  double dVar10;

  undefined1 auVar11 [16];

  

  _objc_retain();

  _objc_retain(param_6);

  uVar1 = FUN_000a34d4(param_5,param_6);

  if ((uVar1 & 1) == 0) {

    bVar8 = false;

    goto LAB_000a2f98;

  }

  FUN_00295b80(param_5);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 == 0) {

    bVar8 = true;

  }

  else {

    uVar1 = FUN_00297780(lVar2);

    if ((((uVar1 & 1) == 0) && (uVar1 = FUN_00297b40(lVar2), (uVar1 & 1) == 0)) &&

       (uVar1 = FUN_002976e0(lVar2), (uVar1 & 1) == 0)) {

      FUN_00297ee0(lVar2);

      dVar9 = (double)FUN_002935a0(lVar2);

      FUN_00293600(lVar2);

      FUN_002925a0(lVar2);

      FUN_002935a0(lVar2);

      param_3 = (param_2 - param_4) + param_3;

      dVar10 = -dVar9;

      if (-dVar9 <= param_3) {

        dVar10 = param_3;

      }

      FUN_002967c0(lVar2);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_00297d80();

      lVar4 = _objc_retainAutoreleasedReturnValue();

      auVar11 = FUN_00299340(lVar2);

      if ((lVar4 == 0) || (lVar7 = auVar11._0_8_ + -1, auVar11._0_8_ < 1)) {

LAB_000a2ef0:

        FUN_002935e0(lVar2);

        bVar8 = dVar10 - param_3 <= 120.0;

      }

      else {

        lVar5 = FUN_00299320(lVar2,auVar11._8_8_,lVar7);

        if ((lVar5 < 1) ||

           ((lVar6 = FUN_0029c020(lVar4), lVar6 != lVar7 ||

            (lVar7 = FUN_0029bae0(lVar4), lVar7 != lVar5 + -1)))) goto LAB_000a2ef0;

        bVar8 = true;

      }

      _objc_release(lVar4);

      _objc_release(uVar3);

    }

    else {

      bVar8 = false;

    }

  }

  _objc_release(lVar2);

LAB_000a2f98:

  _objc_release(param_6);

  _objc_release(param_5);

  return bVar8;

}




