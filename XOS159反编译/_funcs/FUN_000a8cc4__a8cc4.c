// FUN_000a8cc4 @0xa8cc4


void FUN_000a8cc4(long param_1)



{

  uint uVar1;

  undefined *puVar2;

  cfstringStruct *pcVar3;

  uint uVar4;

  int iVar5;

  undefined8 uVar6;

  ulong uVar7;

  long lVar8;

  long lVar9;

  long lVar10;

  long lVar11;

  undefined8 uVar12;

  double dVar13;

  double dVar14;

  undefined1 auVar15 [16];

  

  _objc_retain();

  uVar4 = FUN_000a89d8();

  uVar1 = 0;

  if (param_1 != 0) {

    uVar1 = uVar4;

  }

  if ((uVar1 & 1) == 0) goto LAB_000a9058;

  uVar6 = _objc_getClass("BaseMsgContentViewController");

  uVar7 = _objc_opt_isKindOfClass(param_1,uVar6);

  if ((((uVar7 & 1) == 0) || ((DAT_003e7a2e & 1) != 0)) || ((DAT_003e7a2f & 1) != 0))

  goto LAB_000a9058;

  auVar15 = _objc_opt_respondsToSelector(param_1,"getArrMessageNodeData");

  uVar6 = auVar15._8_8_;

  if ((auVar15._0_8_ & 1) == 0) {

LAB_000a8d64:

    FUN_002a6080(param_1,uVar6,&cf_m_arrMessageNodeData);

    lVar8 = _objc_retainAutoreleasedReturnValue();

    if (lVar8 != 0) goto LAB_000a8d88;

  }

  else {

    FUN_002957a0(param_1);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    uVar6 = auVar15._8_8_;

    lVar8 = auVar15._0_8_;

    if (lVar8 == 0) goto LAB_000a8d64;

LAB_000a8d88:

    lVar9 = FUN_00293860(lVar8);

    if (lVar9 != 0) {

      lVar9 = FUN_00293860(lVar8);

      lVar10 = FUN_00295440(lVar8);

      lVar11 = FUN_00297d80(lVar8);

      if (((lVar9 != DAT_003e7678) || (DAT_003e7680 != lVar10)) ||

         ((DAT_003e7688 != lVar11 || (lVar9 = FUN_00297fa0(DAT_003e7488), lVar9 == 0)))) {

        auVar15 = _objc_opt_respondsToSelector(param_1,"GetContact");

        if ((auVar15._0_8_ & 1) == 0) {

          uVar6 = 0;

        }

        else {

          FUN_00299c80(param_1,auVar15._8_8_,"GetContact");

          uVar6 = _objc_retainAutoreleasedReturnValue();

        }

        FUN_000ac140(lVar8,uVar6);

        lVar9 = _objc_retainAutoreleasedReturnValue();

        if (lVar9 != 0) {

          auVar15 = FUN_00297fa0(lVar9);

          if (auVar15._0_8_ != 0) {

            iVar5 = FUN_00297820(lVar9,auVar15._8_8_,DAT_003e7488);

            if (iVar5 == 0) {

LAB_000a8f18:

              _objc_getAssociatedObject(param_1,PTR_LOOP_003e64b8);

              auVar15 = _objc_retainAutoreleasedReturnValue();

              lVar10 = auVar15._0_8_;

              if ((lVar10 != 0) && (iVar5 = FUN_00297820(lVar10,auVar15._8_8_,lVar9), iVar5 != 0)) {

                _objc_getAssociatedObject(param_1,PTR_LOOP_003e64c0);

                lVar11 = _objc_retainAutoreleasedReturnValue();

                if ((lVar11 != 0) && (uVar7 = FUN_002924e0(lVar11), (uVar7 & 1) != 0))

                goto LAB_000a9030;

                _objc_release(lVar11);

              }

              _objc_setAssociatedObject(param_1,PTR_LOOP_003e64b8,lVar9,3);

              dVar13 = (double)_CFAbsoluteTimeGetCurrent();

              _objc_getAssociatedObject(param_1,PTR_LOOP_003e64c8);

              lVar11 = _objc_retainAutoreleasedReturnValue();

              if (((lVar11 == 0) || (dVar14 = (double)FUN_00294860(lVar11), dVar14 <= 0.0)) ||

                 (0.08 <= dVar13 - dVar14)) {

                puVar2 = PTR_LOOP_003e64c8;

                FUN_002993a0(dVar13,&_OBJC_CLASS___NSNumber);

                uVar12 = _objc_retainAutoreleasedReturnValue();

                _objc_setAssociatedObject(param_1,puVar2,uVar12,1);

                _objc_release(uVar12);

                FUN_000ac6e4(param_1);

              }

              else {

                FUN_000ac5a0(0.08 - (dVar13 - dVar14),param_1);

              }

            }

            else {

              FUN_00295440(lVar8);

              lVar10 = _objc_retainAutoreleasedReturnValue();

              if (lVar10 == 0) {

                lVar11 = 0;

LAB_000a8ef4:

                pcVar3 = DAT_003e7488;

                DAT_003e7488 = &cf___;

                _objc_release(pcVar3);

                _objc_release(lVar11);

                _objc_release(lVar10);

                goto LAB_000a8f18;

              }

              _objc_getAssociatedObject(lVar10,PTR_LOOP_003e64b0);

              auVar15 = _objc_retainAutoreleasedReturnValue();

              lVar11 = auVar15._0_8_;

              if ((lVar11 == 0) ||

                 (iVar5 = FUN_00297820(lVar11,auVar15._8_8_,DAT_003e7488), iVar5 == 0))

              goto LAB_000a8ef4;

              DAT_003e7678 = FUN_00293860(lVar8);

              DAT_003e7680 = FUN_00295440(lVar8);

              DAT_003e7688 = FUN_00297d80(lVar8);

              _objc_setAssociatedObject(param_1,PTR_LOOP_003e64b8,lVar9,3);

            }

LAB_000a9030:

            _objc_release(lVar11);

            _objc_release(lVar10);

          }

        }

        _objc_release(lVar9);

        _objc_release(uVar6);

      }

    }

  }

  _objc_release(lVar8);

LAB_000a9058:

  _objc_release(param_1);

  return;

}




