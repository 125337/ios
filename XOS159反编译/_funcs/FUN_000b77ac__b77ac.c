// FUN_000b77ac @0xb77ac


undefined8 FUN_000b77ac(long param_1)



{

  int iVar1;

  undefined8 uVar2;

  ulong uVar3;

  undefined8 uVar4;

  long lVar5;

  

  _objc_retain();

  if (param_1 != 0) {

    uVar2 = _objc_opt_class(&_OBJC_CLASS___UIView);

    uVar3 = _objc_opt_isKindOfClass(param_1,uVar2);

    if ((uVar3 & 1) != 0) {

      _objc_retain(param_1);

      FUN_000839f4(param_1);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      FUN_000856e8();

      lVar5 = _objc_retainAutoreleasedReturnValue();

      if (lVar5 == 0) {

LAB_000b784c:

        uVar2 = 0;

      }

      else {

        iVar1 = FUN_00298760(lVar5);

        _objc_release(lVar5);

        if (iVar1 != 0x22) goto LAB_000b784c;

        uVar3 = FUN_000b16e0(param_1);

        if ((uVar3 & 1) == 0) {

          _objc_getAssociatedObject(uVar4,PTR_LOOP_003e6540);

          lVar5 = _objc_retainAutoreleasedReturnValue();

          if ((lVar5 == 0) || (uVar3 = FUN_002924e0(lVar5), (uVar3 & 1) == 0)) {

            uVar2 = FUN_00084490(param_1,0);

          }

          else {

            uVar2 = 1;

          }

          _objc_release(lVar5);

        }

        else {

          uVar2 = 1;

        }

      }

      _objc_release(uVar4);

      _objc_release(param_1);

      goto LAB_000b7860;

    }

  }

  uVar2 = 0;

LAB_000b7860:

  _objc_release(param_1);

  return uVar2;

}




