// FUN_000ba260 @0xba260


undefined8 FUN_000ba260(long param_1)



{

  cfstringStruct *pcVar1;

  ulong uVar2;

  long lVar3;

  long lVar4;

  long lVar5;

  long lVar6;

  undefined8 uVar7;

  undefined1 auVar8 [16];

  

  _objc_retain();

  if ((param_1 == 0) || (uVar2 = FUN_000a89d8(), (uVar2 & 1) == 0)) {

    uVar7 = 0;

    goto LAB_000ba34c;

  }

  uVar7 = 0;

  if (((DAT_003e7a2e & 1) != 0) || ((DAT_003e7a2f & 1) != 0)) goto LAB_000ba34c;

  FUN_000a8b40(param_1);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (lVar3 == 0) {

    uVar7 = 0;

  }

  else {

    auVar8 = _objc_opt_respondsToSelector(lVar3,"getArrMessageNodeData");

    uVar7 = auVar8._8_8_;

    if ((auVar8._0_8_ & 1) == 0) {

LAB_000ba2f0:

      FUN_002a6080(lVar3,uVar7,&cf_m_arrMessageNodeData);

      lVar4 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      FUN_002957a0(lVar3);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      uVar7 = auVar8._8_8_;

      lVar4 = auVar8._0_8_;

      if (lVar4 == 0) goto LAB_000ba2f0;

    }

    auVar8 = _objc_opt_respondsToSelector(lVar3,"GetContact");

    if ((auVar8._0_8_ & 1) == 0) {

      lVar5 = 0;

      if (lVar4 == 0) goto LAB_000ba430;

LAB_000ba37c:

      lVar6 = FUN_00293860(lVar4);

      uVar7 = 0;

      if ((lVar6 != 0) && (lVar5 != 0)) {

        if (DAT_003e7668 != 0) {

          FUN_0029b240();

        }

        pcVar1 = DAT_003e7488;

        DAT_003e7488 = &cf___;

        _objc_release(pcVar1);

        DAT_003e7678 = 0;

        DAT_003e7680 = 0;

        DAT_003e7688 = 0;

        uVar7 = FUN_000acf2c(lVar4,lVar5);

      }

    }

    else {

      FUN_00299c80(lVar3,auVar8._8_8_,"GetContact");

      lVar5 = _objc_retainAutoreleasedReturnValue();

      if (lVar4 != 0) goto LAB_000ba37c;

LAB_000ba430:

      uVar7 = 0;

    }

    _objc_release(lVar5);

    _objc_release(lVar4);

  }

  _objc_release(lVar3);

LAB_000ba34c:

  _objc_release(param_1);

  return uVar7;

}




