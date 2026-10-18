// FUN_001ca5d8 @0x1ca5d8


undefined8 FUN_001ca5d8(long param_1)



{

  long lVar1;

  long lVar2;

  long lVar3;

  undefined8 uVar4;

  double dVar5;

  double dVar6;

  double dVar7;

  double dVar8;

  double dVar9;

  undefined4 local_54;

  

  _objc_retain();

  if (param_1 == 0) {

LAB_001ca648:

    uVar4 = 0;

  }

  else {

    lVar1 = _objc_loadWeakRetained(&DAT_003ead68);

    if (param_1 == lVar1) {

      lVar2 = _objc_loadWeakRetained(&DAT_003ead68);

      _objc_release();

      _objc_release(lVar1);

      if (lVar2 == 0) goto LAB_001ca620;

    }

    else {

      _objc_release(lVar1);

LAB_001ca620:

      dVar5 = (double)FUN_002a3d80(param_1);

      dVar8 = 8.0;

      if ((dVar5 < 8.0) || (FUN_002a3d80(param_1), dVar8 < 8.0)) goto LAB_001ca648;

      _objc_retainAutorelease(param_1);

      lVar1 = FUN_00290a40();

      if (lVar1 != 0) {

        local_54 = 0;

        lVar2 = _CGColorSpaceCreateDeviceRGB();

        if (lVar2 != 0) {

          lVar3 = _CGBitmapContextCreate(&local_54,1,1,8,4,lVar2,0x4001);

          _CGColorSpaceRelease(lVar2);

          if (lVar3 != 0) {

            dVar5 = (double)FUN_0029bda0(param_1);

            dVar9 = 1.0;

            if (0.0 < dVar5) {

              dVar9 = (double)FUN_0029bda0(param_1);

            }

            dVar6 = (double)FUN_002a3d80(param_1);

            FUN_002a3d80(param_1);

            dVar5 = dVar8;

            dVar7 = (double)FUN_002a3d80(param_1);

            FUN_002a3d80(param_1);

            _CGContextDrawImage(0.5 - dVar9 * dVar6 * 0.5,0.5 - dVar9 * dVar8 * 0.5,dVar9 * dVar7,

                                dVar9 * dVar5,lVar3,lVar1);

            _CGContextRelease(lVar3);

            if (local_54._3_1_ < 0xd) goto LAB_001ca648;

          }

        }

      }

      _objc_storeWeak(&DAT_003ead68,param_1);

    }

    uVar4 = 1;

  }

  _objc_release(param_1);

  return uVar4;

}




