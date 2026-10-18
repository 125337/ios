// FUN_00235cf4 @0x235cf4


void FUN_00235cf4(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)



{

  undefined *puVar1;

  int iVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  undefined8 uVar8;

  ulong uVar9;

  undefined8 uVar10;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  ulong uVar11;

  undefined8 uVar12;

  undefined1 auVar13 [16];

  undefined *local_150;

  undefined8 local_148;

  code *local_140;

  undefined *puStack_138;

  long local_130;

  undefined *local_128;

  undefined8 local_120;

  code *local_118;

  undefined *puStack_110;

  long local_108;

  undefined *local_100;

  undefined8 local_f8;

  code *local_f0;

  undefined *puStack_e8;

  long local_e0;

  undefined1 local_d8;

  undefined *local_d0;

  undefined8 local_c8;

  code *local_c0;

  undefined *puStack_b8;

  undefined8 local_b0;

  undefined8 local_a8;

  undefined8 uStack_a0;

  

  _objc_retain();

  _objc_getAssociatedObject(param_3,PTR_LOOP_003e7258);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = _objc_opt_class(&objc::class_t::XZYHomeDockLiquidContainer);

  auVar13 = _objc_opt_isKindOfClass(uVar3,uVar4);

  if ((auVar13._0_8_ & 1) != 0) {

    FUN_002946e0(uVar3,auVar13._8_8_,0);

  }

  _objc_setAssociatedObject(param_3,PTR_LOOP_003e7288,0,1);

  _objc_getAssociatedObject(param_3,PTR_LOOP_003e7260);

  lVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_3,PTR_LOOP_003e7290);

  lVar6 = _objc_retainAutoreleasedReturnValue();

  if (lVar6 != 0) {

    FUN_0029b340(lVar6);

    _objc_setAssociatedObject(param_3,PTR_LOOP_003e7290,0,1);

  }

  iVar2 = FUN_0023cfb8(param_3);

  if (iVar2 != 0) {

    FUN_0023d02c(param_3);

    lVar7 = _objc_retainAutoreleasedReturnValue();

    if (lVar7 != 0) {

      FUN_0023d0d8(lVar7,0,0);

    }

    _objc_release(lVar7);

  }

  if (lVar5 != 0) {

    iVar2 = FUN_0023d2c4(param_3);

    puVar1 = PTR___NSConcreteStackBlock_003886f0;

    if (iVar2 == 0) {

      local_128 = PTR___NSConcreteStackBlock_003886f0;

      local_120 = 0xc2000000;

      local_118 = FUN_0023d404;

      puStack_110 = &DAT_00388e60;

      _objc_retain(lVar5);

      local_150 = puVar1;

      local_148 = 0xc2000000;

      local_140 = FUN_0023d464;

      puStack_138 = &DAT_00389830;

      local_108 = lVar5;

      _objc_retain(lVar5);

      local_130 = lVar5;

      FUN_002917c0(0x3fc47ae147ae147b,&_OBJC_CLASS___UIView,extraout_x1_01,&local_128,&local_150);

      _objc_setAssociatedObject(param_3,PTR_LOOP_003e7260,0,1);

      _objc_release(local_130);

      _objc_release(local_108);

    }

    else {

      _objc_retain(param_3);

      _objc_retain(lVar5);

      uVar12 = FUN_00244e10(param_3,lVar5);

      FUN_00244f44(lVar5);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      auVar13 = FUN_00293860();

      puVar1 = PTR___NSConcreteStackBlock_003886f0;

      uVar4 = auVar13._8_8_;

      uVar9 = auVar13._0_8_;

      if (uVar9 == 0) {

        FUN_0029b340(lVar5);

      }

      else if (0 < (long)uVar9) {

        uVar11 = 0;

        do {

          FUN_00299500(uVar8,uVar4,uVar11);

          uVar4 = _objc_retainAutoreleasedReturnValue();

          FUN_00297e40();

          uVar10 = _objc_retainAutoreleasedReturnValue();

          FUN_0029b220();

          _objc_release(uVar10);

          local_d0 = puVar1;

          local_c8 = 0xc2000000;

          local_c0 = FUN_002450f0;

          puStack_b8 = &DAT_0038faf8;

          _objc_retain(uVar4);

          local_100 = puVar1;

          local_f8 = 0xc2000000;

          local_f0 = FUN_002451bc;

          puStack_e8 = &DAT_0038fb28;

          local_d8 = uVar9 - 1 == uVar11;

          local_b0 = uVar4;

          local_a8 = uVar12;

          uStack_a0 = param_2;

          _objc_retain(lVar5);

          local_e0 = lVar5;

          FUN_002917e0(0x3fc47ae147ae147b,(double)uVar11 * 0.1,&_OBJC_CLASS___UIView,extraout_x1,

                       &DAT_00010006,&local_d0,&local_100);

          _objc_release(local_e0);

          _objc_release(local_b0);

          _objc_release(uVar4);

          uVar11 = uVar11 + 1;

          uVar4 = extraout_x1_00;

        } while (uVar9 != uVar11);

      }

      _objc_release(uVar8);

      _objc_release(lVar5);

      _objc_release(param_3);

      _objc_setAssociatedObject(param_3,PTR_LOOP_003e7260,0,1);

    }

  }

  _objc_release(lVar6);

  _objc_release(lVar5);

  _objc_release(uVar3);

  _objc_release(param_3);

  return;

}




