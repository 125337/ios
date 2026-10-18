// FUN_00004aa4 @0x4aa4


bool FUN_00004aa4(undefined8 param_1,byte *param_2,byte *param_3)



{

  undefined *puVar1;

  bool bVar2;

  byte bVar3;

  byte bVar4;

  int iVar5;

  long lVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  long lVar9;

  long lVar10;

  ulong uVar11;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  long *plVar12;

  long *plVar13;

  long lVar14;

  undefined1 auVar15 [16];

  long local_70;

  long local_68;

  

  _objc_retain();

  FUN_000049c8(param_1);

  lVar6 = _objc_retainAutoreleasedReturnValue();

  if (lVar6 == 0) {

    bVar2 = false;

    goto LAB_00004d1c;

  }

  _objc_retain(lVar6);

  FUN_000049c8(lVar6);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_000856e8();

  uVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_00298680();

  lVar9 = _objc_retainAutoreleasedReturnValue();

  local_68 = lVar9;

  FUN_002985c0(uVar8);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  lVar10 = auVar15._0_8_;

  local_70 = lVar10;

  auVar15 = FUN_00295fa0(lVar9,auVar15._8_8_,&cf__chatroom);

  lVar14 = lVar9;

  if (((auVar15._0_8_ & 1) == 0) &&

     (uVar11 = FUN_00295fa0(lVar10,auVar15._8_8_,&cf__chatroom), lVar14 = lVar10, (uVar11 & 1) == 0)

     ) {

    uVar11 = _objc_opt_respondsToSelector(uVar7,"isSender");

    if ((uVar11 & 1) == 0) {

      uVar11 = _objc_opt_respondsToSelector(lVar6,"isSender");

      if ((uVar11 & 1) != 0) {

        iVar5 = FUN_00297a80(lVar6);

        goto LAB_00004bb8;

      }

LAB_00004be8:

      plVar12 = &local_70;

      plVar13 = &local_68;

    }

    else {

      iVar5 = FUN_00297a80(uVar7);

LAB_00004bb8:

      if (iVar5 == 0) goto LAB_00004be8;

      plVar12 = &local_68;

      plVar13 = &local_70;

      lVar14 = lVar9;

    }

    if (lVar14 != 0) {

      plVar13 = plVar12;

    }

    lVar14 = *plVar13;

  }

  _objc_retain(lVar14);

  _objc_release(lVar10);

  _objc_release(lVar9);

  _objc_release(uVar8);

  _objc_release(uVar7);

  _objc_release(lVar6);

  lVar9 = FUN_00297fa0(lVar14);

  bVar2 = lVar9 != 0;

  if (lVar9 != 0) {

    FUN_000828e0();

    bVar3 = FUN_000bcd6c(lVar14);

    bVar3 = bVar3 | DAT_003e7bc0;

    if ((bVar3 & 1) == 0) {

      bVar4 = FUN_000bce54(lVar14);

      bVar4 = bVar4 | DAT_003e7bc1;

      uVar7 = extraout_x1_00;

    }

    else {

      bVar4 = 0;

      uVar7 = extraout_x1;

    }

    puVar1 = PTR_LOOP_003e5cd0;

    bVar3 = bVar3 & 1;

    FUN_00299380(&_OBJC_CLASS___NSNumber,uVar7,bVar3);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(lVar6,puVar1,uVar7,1);

    _objc_release(uVar7);

    puVar1 = PTR_LOOP_003e5cd8;

    FUN_00299380(&_OBJC_CLASS___NSNumber,extraout_x1_01,bVar4 & 1);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(lVar6,puVar1,uVar7,1);

    _objc_release(uVar7);

    if (param_2 != (byte *)0x0) {

      *param_2 = bVar3;

    }

    if (param_3 != (byte *)0x0) {

      *param_3 = bVar4 & 1;

    }

  }

  _objc_release(lVar14);

LAB_00004d1c:

  _objc_release(lVar6);

  _objc_release(param_1);

  return bVar2;

}




