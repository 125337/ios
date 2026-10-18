// FUN_000b16e0 @0xb16e0


undefined8

FUN_000b16e0(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,

            undefined8 param_5)



{

  bool bVar1;

  bool bVar2;

  bool bVar3;

  int iVar4;

  undefined8 uVar5;

  ulong uVar6;

  undefined8 uVar7;

  long lVar8;

  undefined8 extraout_x1;

  long lVar9;

  

  _objc_retain();

  uVar5 = _objc_opt_class(&_OBJC_CLASS___UIView);

  uVar6 = _objc_opt_isKindOfClass(param_5,uVar5);

  uVar5 = param_5;

  if ((uVar6 & 1) == 0) {

    uVar5 = 0;

  }

  _objc_retain(uVar5);

  if ((uVar6 & 1) != 0) {

    lVar9 = 0;

    do {

      FUN_000b3444(uVar5,*(undefined8 *)((long)&PTR_s_m_voiceTransView_0038b078 + lVar9));

      uVar7 = _objc_retainAutoreleasedReturnValue();

      iVar4 = FUN_000b30dc(uVar7,uVar5);

      if (iVar4 != 0) {

        FUN_002a4880(uVar7);

        lVar8 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        if (lVar8 != 0) {

          FUN_002925a0(uVar7);

          FUN_00293720(uVar7,extraout_x1,uVar5);

          bVar1 = false;

          bVar2 = true;

          bVar3 = false;

          if (0.5 < param_3) {

            bVar1 = false;

            bVar2 = false;

            bVar3 = true;

            if (!NAN(param_4)) {

              bVar1 = param_4 < 0.5;

              bVar2 = param_4 == 0.5;

              bVar3 = false;

            }

          }

          if (!bVar2 && bVar1 == bVar3) {

            _objc_release(uVar7);

            uVar7 = 1;

            goto LAB_000b17b8;

          }

        }

      }

      _objc_release(uVar7);

      lVar9 = lVar9 + 8;

    } while (lVar9 != 0x18);

  }

  uVar7 = 0;

LAB_000b17b8:

  _objc_release(uVar5);

  _objc_release(param_5);

  return uVar7;

}




