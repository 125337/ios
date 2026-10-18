// FUN_00215f98 @0x215f98


void FUN_00215f98(undefined1 param_1 [16],double param_2,double param_3,double param_4,long param_5)



{

  double *pdVar1;

  long lVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  ulong uVar6;

  long lVar7;

  ulong uVar8;

  double dVar9;

  double dVar10;

  double dVar11;

  double dVar12;

  undefined1 auVar13 [16];

  undefined1 auVar14 [16];

  char local_91;

  

  _objc_retain();

  if ((((param_5 == 0) || ((DAT_003ead50 & 1) != 0)) || (DAT_003eaad0 != 1)) ||

     (DAT_003eaa30 != '\x01' || 5 < DAT_003eaac8 - 1)) goto LAB_0021634c;

  FUN_002158c4(param_5);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 != 0) {

    FUN_002935e0(param_5);

    dVar10 = param_2;

    _objc_getAssociatedObject(param_5,&DAT_003eaeb1);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_getAssociatedObject(param_5,&DAT_003eaeb2);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    uVar4 = auVar13._8_8_;

    if ((lVar3 == 0) || (auVar13._0_8_ == 0)) {

LAB_0021608c:

      FUN_00299400(&_OBJC_CLASS___NSNumber,uVar4,(long)(param_2 * 0.25));

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_5,&DAT_003eaeb1,uVar4,1);

      _objc_release(uVar4);

      FUN_002a4880(param_5);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      if (lVar5 == 0) {

        uVar4 = _objc_opt_class(&_OBJC_CLASS___UIViewController);

        uVar6 = _objc_opt_isKindOfClass(lVar2,uVar4);

        if ((uVar6 & 1) == 0) goto LAB_00216114;

        FUN_002a6220(lVar2);

        lVar7 = _objc_retainAutoreleasedReturnValue();

      }

      else {

LAB_00216114:

        _objc_retain(lVar5);

        lVar7 = lVar5;

      }

      _objc_release(lVar5);

      if (lVar7 != 0) {

        uVar4 = FUN_00215bbc(param_5);

        dVar11 = 54.0;

        if (param_3 <= 274.0) {

          dVar11 = 48.0;

        }

        if ((DAT_003eaac8 & 0xfffffffffffffffd) == 1) {

          dVar9 = (double)_CGRectGetMinX(uVar4,dVar10,param_3,param_4);

        }

        else {

          dVar9 = (double)_CGRectGetMaxX(uVar4,dVar10,param_3,param_4);

          dVar9 = dVar9 - dVar11;

        }

        local_91 = '\0';

        dVar9 = (double)FUN_00216410(dVar9,param_5,lVar7,&local_91);

        uVar6 = DAT_003eaac8;

        pdVar1 = (double *)&DAT_003eaad8;

        if ((DAT_003eaac8 & 0xfffffffffffffffd) != 1) {

          pdVar1 = (double *)&DAT_003eaae0;

        }

        dVar12 = *pdVar1;

        uVar8 = 0x5a5a5a5a;

        if (local_91 == '\0') {

          uVar8 = 0;

        }

        _objc_getAssociatedObject(param_5,&DAT_003eaeb2);

        auVar14 = _objc_retainAutoreleasedReturnValue();

        uVar4 = auVar14._8_8_;

        lVar5 = auVar14._0_8_;

        uVar6 = (long)(dVar11 + dVar11) * 0xf4265 + 0xe8d6d9a340U ^

                (long)(dVar10 * 0.25) * 0xf4261 + 0xe8d69c9a40U ^

                (long)(param_4 * 0.25) * 0xf4267 + 0xe8d6f827c0U ^ uVar6 << 8 ^ uVar8 ^

                (long)(dVar9 + dVar12 + dVar9 + dVar12) * 0xf4243 + 0xe8d4d2d6c0U;

        if (lVar5 == 0) {

LAB_002162e0:

          FUN_00299420(&_OBJC_CLASS___NSNumber,uVar4,uVar6);

          uVar4 = _objc_retainAutoreleasedReturnValue();

          _objc_setAssociatedObject(param_5,&DAT_003eaeb2,uVar4,1);

          _objc_release(uVar4);

          FUN_0020b734(lVar2,0);

        }

        else {

          auVar14 = FUN_002984c0(lVar5);

          uVar4 = auVar14._8_8_;

          if (auVar14._0_8_ != uVar6) goto LAB_002162e0;

        }

        _objc_release(lVar5);

      }

      _objc_release(lVar7);

    }

    else {

      auVar14 = FUN_002974a0(lVar3);

      uVar4 = auVar14._8_8_;

      if (auVar14._0_8_ != (long)(param_2 * 0.25)) goto LAB_0021608c;

    }

    _objc_release(auVar13._0_8_);

    _objc_release(lVar3);

  }

  _objc_release(lVar2);

LAB_0021634c:

  _objc_release(param_5);

  return;

}




