// FUN_00098ebc @0x98ebc


void FUN_00098ebc(long param_1,undefined8 param_2,undefined8 param_3)



{

  cfstringStruct *pcVar1;

  int iVar2;

  ulong uVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 *puVar7;

  undefined8 uVar8;

  long lVar9;

  undefined1 auVar10 [16];

  

  _objc_retain(param_3);

  (*DAT_003e7858)(param_1,param_2,param_3);

  DAT_003e7a2f = 0;

  DAT_003e7a2e = 0;

  FUN_0010f978();

  uVar3 = FUN_000a89d8();

  if ((uVar3 & 1) == 0) goto LAB_000990a8;

  _objc_retain(param_1);

  uVar4 = _object_getClass(param_1);

  lVar5 = _class_getInstanceVariable(uVar4,"m_arrMessageNodeData");

  if (lVar5 == 0) {

    puVar7 = (undefined8 *)0x0;

  }

  else {

    lVar5 = _ivar_getOffset();

    puVar7 = (undefined8 *)(param_1 + lVar5);

  }

  _objc_release(param_1);

  uVar8 = *puVar7;

  _objc_retain(uVar8);

  uVar4 = _objc_opt_class(&_OBJC_CLASS___NSArray);

  uVar3 = _objc_opt_isKindOfClass(uVar8,uVar4);

  if (((uVar3 & 1) != 0) && (lVar5 = FUN_00293860(uVar8), lVar5 != 0)) {

    FUN_00290ac0(param_1);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_000ac140(uVar8,uVar4);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    auVar10 = FUN_00297fa0();

    if ((auVar10._0_8_ == 0) || (iVar2 = FUN_00297820(uVar6,auVar10._8_8_,DAT_003e7488), iVar2 == 0)

       ) {

LAB_00099038:

      if (DAT_003e7668 != 0) {

        FUN_0029b240();

      }

      pcVar1 = DAT_003e7488;

      DAT_003e7488 = &cf___;

      _objc_release(pcVar1);

      iVar2 = FUN_000acf2c(uVar8,uVar4);

      if (iVar2 != 0) {

        FUN_00295b80(param_1);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_000aed10(lVar5,param_1);

        goto LAB_00099088;

      }

    }

    else {

      FUN_00295440(uVar8);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      if (lVar5 == 0) {

        lVar9 = 0;

LAB_00099028:

        _objc_release(lVar9);

        _objc_release(lVar5);

        goto LAB_00099038;

      }

      _objc_getAssociatedObject(lVar5,PTR_LOOP_003e64b0);

      auVar10 = _objc_retainAutoreleasedReturnValue();

      lVar9 = auVar10._0_8_;

      if ((lVar9 == 0) || (uVar3 = FUN_00297820(lVar9,auVar10._8_8_,DAT_003e7488), (uVar3 & 1) == 0)

         ) goto LAB_00099028;

      _objc_release(lVar9);

LAB_00099088:

      _objc_release(lVar5);

    }

    _objc_release(uVar6);

    _objc_release(uVar4);

  }

  _objc_release(uVar8);

LAB_000990a8:

  _objc_release(param_3);

  return;

}




