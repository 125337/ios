// FUN_0009917c @0x9917c


void FUN_0009917c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)



{

  cfstringStruct *pcVar1;

  int iVar2;

  undefined8 uVar3;

  long lVar4;

  ulong uVar5;

  undefined8 uVar6;

  undefined8 *puVar7;

  undefined8 uVar8;

  long lVar9;

  undefined1 auVar10 [16];

  

  _objc_retain(param_3);

  (*DAT_003e7860)(param_1,param_2,param_3,param_4);

  if ((param_4 & 1) != 0) goto LAB_00099374;

  DAT_003e7a2e = 0;

  DAT_003e7a2f = 0;

  FUN_0010f978();

  iVar2 = FUN_000a89d8();

  if (iVar2 == 0) goto LAB_00099374;

  _objc_retain(param_1);

  uVar3 = _object_getClass(param_1);

  lVar4 = _class_getInstanceVariable(uVar3,"m_arrMessageNodeData");

  if (lVar4 == 0) {

    puVar7 = (undefined8 *)0x0;

  }

  else {

    lVar4 = _ivar_getOffset();

    puVar7 = (undefined8 *)(param_1 + lVar4);

  }

  _objc_release(param_1);

  uVar8 = *puVar7;

  _objc_retain(uVar8);

  uVar3 = _objc_opt_class(&_OBJC_CLASS___NSArray);

  uVar5 = _objc_opt_isKindOfClass(uVar8,uVar3);

  if (((uVar5 & 1) != 0) && (lVar4 = FUN_00293860(uVar8), lVar4 != 0)) {

    FUN_00290ac0(param_1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_000ac140(uVar8,uVar3);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    auVar10 = FUN_00297fa0();

    if ((auVar10._0_8_ == 0) || (iVar2 = FUN_00297820(uVar6,auVar10._8_8_,DAT_003e7488), iVar2 == 0)

       ) {

LAB_00099304:

      if (DAT_003e7668 != 0) {

        FUN_0029b240();

      }

      pcVar1 = DAT_003e7488;

      DAT_003e7488 = &cf___;

      _objc_release(pcVar1);

      iVar2 = FUN_000acf2c(uVar8,uVar3);

      if (iVar2 != 0) {

        FUN_00295b80(param_1);

        lVar4 = _objc_retainAutoreleasedReturnValue();

        FUN_000aed10(lVar4,param_1);

        goto LAB_00099354;

      }

    }

    else {

      FUN_00295440(uVar8);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      if (lVar4 == 0) {

        lVar9 = 0;

LAB_000992f4:

        _objc_release(lVar9);

        _objc_release(lVar4);

        goto LAB_00099304;

      }

      _objc_getAssociatedObject(lVar4,PTR_LOOP_003e64b0);

      auVar10 = _objc_retainAutoreleasedReturnValue();

      lVar9 = auVar10._0_8_;

      if ((lVar9 == 0) || (uVar5 = FUN_00297820(lVar9,auVar10._8_8_,DAT_003e7488), (uVar5 & 1) == 0)

         ) goto LAB_000992f4;

      _objc_release(lVar9);

LAB_00099354:

      _objc_release(lVar4);

    }

    _objc_release(uVar6);

    _objc_release(uVar3);

  }

  _objc_release(uVar8);

LAB_00099374:

  _objc_release(param_3);

  return;

}




