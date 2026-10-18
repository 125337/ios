// FUN_00222ee8 @0x222ee8


void FUN_00222ee8(undefined8 param_1,undefined8 param_2)



{

  undefined *puVar1;

  int iVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  int iVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined1 auVar10 [16];

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

  undefined1 local_100;

  undefined *local_f8;

  undefined8 local_f0;

  code *local_e8;

  undefined *puStack_e0;

  long local_d8;

  undefined1 local_d0;

  undefined *local_c8;

  undefined8 local_c0;

  code *local_b8;

  undefined *puStack_b0;

  undefined8 local_a8;

  long local_a0;

  undefined8 local_98;

  long local_90;

  

  _objc_retain();

  _objc_getAssociatedObject(param_1,&DAT_003eae52);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (lVar3 != 0) {

    iVar2 = FUN_00294ea0(lVar3);

    iVar7 = (int)param_2;

    if (iVar7 != iVar2) {

      FUN_0029e1e0(lVar3,extraout_x1,param_2);

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      auVar10 = _objc_retainAutoreleasedReturnValue();

      FUN_0029d080(auVar10._0_8_,auVar10._8_8_,param_2,

                   &cf_xzyChatListGroupingHorizontalSearchOrbExpanded);

      _objc_release(auVar10._0_8_);

      auVar10 = _objc_alloc(&_OBJC_CLASS___UIImpactFeedbackGenerator);

      uVar4 = FUN_00296ea0(auVar10._0_8_,auVar10._8_8_,0);

      FUN_00296680();

      FUN_002a6080(param_1,extraout_x1_00,&cf_m_tableView);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      if (lVar5 != 0) {

        FUN_002a4880(lVar5);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        puVar1 = PTR___NSConcreteStackBlock_003886f0;

        local_c8 = PTR___NSConcreteStackBlock_003886f0;

        local_c0 = 0xc2000000;

        local_b8 = FUN_00223650;

        puStack_b0 = &DAT_003898c0;

        _objc_retain(param_1);

        local_a8 = param_1;

        _objc_retain(lVar5);

        local_a0 = lVar5;

        _objc_retain(uVar6);

        local_98 = uVar6;

        _objc_retain(lVar3);

        local_90 = lVar3;

        FUN_00291800(0x3fe0000000000000,0,0x3fe8f5c28f5c28f6,0x3fe3333333333333,

                     &_OBJC_CLASS___UIView,extraout_x1_01,6,&local_c8,0);

        uVar9 = 0x3fd3333333333333;

        if (iVar7 == 0) {

          uVar9 = 0x3fc70a3d70a3d70a;

        }

        uVar8 = 0x3fb999999999999a;

        if (iVar7 == 0) {

          uVar8 = 0;

        }

        local_f8 = puVar1;

        local_f0 = 0xc2000000;

        local_e8 = FUN_00223684;

        puStack_e0 = &DAT_0038d0a8;

        _objc_retain(lVar3);

        local_d8 = lVar3;

        local_d0 = (char)param_2;

        FUN_002917e0(uVar9,uVar8,&_OBJC_CLASS___UIView,extraout_x1_02,6,&local_f8,0);

        local_128 = puVar1;

        local_120 = 0xc2000000;

        local_118 = FUN_0022377c;

        puStack_110 = &DAT_0038d0a8;

        _objc_retain(lVar3);

        local_150 = puVar1;

        local_148 = 0xc2000000;

        local_140 = FUN_00223814;

        puStack_138 = &DAT_00389830;

        local_108 = lVar3;

        local_100 = (char)param_2;

        _objc_retain(lVar3);

        local_130 = lVar3;

        FUN_00291800(0x3fd3333333333333,0,0x3fe6666666666666,0x3fe0000000000000,

                     &_OBJC_CLASS___UIView,extraout_x1_03,4,&local_128,&local_150);

        _objc_release(local_130);

        _objc_release(local_108);

        _objc_release(local_d8);

        _objc_release(local_90);

        _objc_release(local_98);

        _objc_release(local_a0);

        _objc_release(local_a8);

        _objc_release(uVar6);

        _objc_release(lVar5);

      }

      _objc_release(uVar4);

    }

  }

  _objc_release(lVar3);

  _objc_release(param_1);

  return;

}




