// FUN_00083134 @0x83134


void FUN_00083134(long param_1,long param_2)



{

  uint uVar1;

  uint uVar2;

  int iVar3;

  long lVar4;

  long lVar5;

  undefined8 uVar6;

  ulong uVar7;

  long lVar8;

  

  _objc_retain();

  lVar8 = 0;

  if ((param_1 == 0) || (param_2 == 0)) goto LAB_000832f0;

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e6328);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  uVar1 = FUN_0008336c(param_1);

  if ((lVar4 == 0) || (uVar2 = FUN_002924e0(lVar4), ((uVar1 | uVar2) & 1) != 0)) {

    FUN_00083564(param_1,param_2);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    if ((lVar5 == 0) || (iVar3 = FUN_002978a0(lVar5), iVar3 != 0)) {

      if (uVar1 == 0) {

        _objc_setAssociatedObject(param_1,PTR_LOOP_003e6328,PTR____kCFBooleanFalse_00388318,1);

      }

      else {

        _objc_setAssociatedObject(param_1,PTR_LOOP_003e6328,0,1);

        FUN_00083714(param_1);

        FUN_000839f4(param_1);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        FUN_000856e8();

        lVar8 = _objc_retainAutoreleasedReturnValue();

        if (lVar8 == 0) {

          _objc_release(uVar6);

        }

        else {

          iVar3 = FUN_00298760(lVar8);

          _objc_release(lVar8);

          _objc_release(uVar6);

          if (iVar3 == 0x22) goto LAB_000832dc;

        }

        FUN_00083a80(*(undefined8 *)PTR__CGRectZero_00388bf0,

                     *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8),

                     *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10),

                     *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18),param_1);

      }

LAB_000832dc:

      lVar8 = 0;

    }

    else {

      _objc_setAssociatedObject(param_1,PTR_LOOP_003e6330,0,1);

      _objc_setAssociatedObject(param_1,PTR_LOOP_003e6338,0,1);

      if ((lVar4 == 0) || (uVar7 = FUN_002924e0(lVar4), (uVar7 & 1) == 0)) {

        _objc_setAssociatedObject(param_1,PTR_LOOP_003e6328,PTR____kCFBooleanTrue_00388320,1);

      }

      _objc_retain(lVar5);

      lVar8 = lVar5;

    }

    _objc_release(lVar5);

  }

  else {

    lVar8 = 0;

  }

  _objc_release(lVar4);

LAB_000832f0:

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(lVar8);

  return;

}




