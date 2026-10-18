// FUN_00094da0 @0x94da0


void FUN_00094da0(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  undefined *puVar1;

  int iVar2;

  long lVar3;

  ulong uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined1 auVar7 [16];

  undefined *local_170;

  undefined8 local_168;

  code *local_160;

  undefined *puStack_158;

  undefined8 local_150;

  undefined *local_148;

  undefined8 local_140;

  code *local_138;

  undefined *puStack_130;

  undefined8 local_128;

  undefined *local_120;

  undefined8 local_118;

  code *local_110;

  undefined *puStack_108;

  undefined8 local_100;

  undefined *local_f8;

  undefined8 local_f0;

  code *local_e8;

  undefined *puStack_e0;

  undefined8 local_d8;

  undefined *local_d0;

  undefined8 local_c8;

  code *local_c0;

  undefined *puStack_b8;

  undefined8 local_b0;

  undefined8 local_a8;

  undefined *local_a0;

  undefined8 local_98;

  code *local_90;

  undefined *puStack_88;

  undefined8 local_80;

  undefined *local_78;

  undefined8 local_70;

  code *local_68;

  undefined *puStack_60;

  undefined8 local_58;

  

  _objc_retain(param_3);

  (*DAT_003e7790)(param_1,param_2,param_3);

  if ((DAT_003e74b9 == '\x01') && ((DAT_003e74d8 & 1) != 0)) {

    FUN_002a5680(param_1);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    iVar2 = FUN_00295f20(auVar7._0_8_,auVar7._8_8_,param_3);

    _objc_release(auVar7._0_8_);

    if (iVar2 != 0) {

      FUN_001331b8();

      FUN_00007f9c();

      _objc_setAssociatedObject(param_1,"coverImagePath",0,1);

      FUN_00293940(param_1);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar3 == 0) {

        uVar4 = FUN_002978e0(param_1);

        if ((uVar4 & 1) == 0) {

          FUN_002a2b80(param_1);

          FUN_00293940(param_1);

          lVar3 = _objc_retainAutoreleasedReturnValue();

          _objc_release();

          if (lVar3 != 0) {

            FUN_00293940(param_1);

            uVar5 = _objc_retainAutoreleasedReturnValue();

            FUN_0029cb60(0);

            _objc_release(uVar5);

            local_170 = PTR___NSConcreteStackBlock_003886f0;

            local_168 = 0xc0000000;

            local_160 = FUN_000a297c;

            puStack_158 = &DAT_0038abe0;

            local_150 = param_1;

            FUN_002917a0(0x3fd6666666666666,&_OBJC_CLASS___UIView,extraout_x1_00,&local_170);

          }

        }

      }

      else {

        FUN_00293940(param_1);

        auVar7 = _objc_retainAutoreleasedReturnValue();

        uVar5 = auVar7._0_8_;

        FUN_0029d880(param_1,auVar7._8_8_,0);

        iVar2 = FUN_002978e0(param_1);

        puVar1 = PTR___NSConcreteStackBlock_003886f0;

        if (iVar2 == 0) {

          FUN_002a2b80(param_1);

          FUN_00293940(param_1);

          lVar3 = _objc_retainAutoreleasedReturnValue();

          _objc_release();

          puVar1 = PTR___NSConcreteStackBlock_003886f0;

          if (lVar3 == 0) {

            local_120 = PTR___NSConcreteStackBlock_003886f0;

            local_118 = 0xc2000000;

            local_110 = FUN_000a2968;

            puStack_108 = &DAT_00388e60;

            _objc_retain(uVar5);

            local_148 = puVar1;

            local_140 = 0xc2000000;

            local_138 = FUN_000a2974;

            puStack_130 = &DAT_00389830;

            local_100 = uVar5;

            _objc_retain(uVar5);

            local_128 = uVar5;

            FUN_002917c0(0x3fd6666666666666,&_OBJC_CLASS___UIView,extraout_x1_02,&local_120,

                         &local_148);

            _objc_release(local_128);

            uVar6 = local_100;

          }

          else {

            FUN_00293940(param_1);

            uVar6 = _objc_retainAutoreleasedReturnValue();

            FUN_0029cb60(0);

            _objc_release(uVar6);

            puVar1 = PTR___NSConcreteStackBlock_003886f0;

            local_d0 = PTR___NSConcreteStackBlock_003886f0;

            local_c8 = 0xc2000000;

            local_c0 = FUN_000a2904;

            puStack_b8 = &DAT_0038abb0;

            local_a8 = param_1;

            _objc_retain(uVar5);

            local_f8 = puVar1;

            local_f0 = 0xc2000000;

            local_e8 = FUN_000a2960;

            puStack_e0 = &DAT_00389830;

            local_b0 = uVar5;

            _objc_retain(uVar5);

            local_d8 = uVar5;

            FUN_002917c0(0x3fd6666666666666,&_OBJC_CLASS___UIView,extraout_x1_01,&local_d0,&local_f8

                        );

            _objc_release(local_d8);

            uVar6 = local_b0;

          }

        }

        else {

          local_78 = PTR___NSConcreteStackBlock_003886f0;

          local_70 = 0xc2000000;

          local_68 = FUN_000a28f0;

          puStack_60 = &DAT_00388e60;

          _objc_retain(uVar5);

          local_a0 = puVar1;

          local_98 = 0xc2000000;

          local_90 = FUN_000a28fc;

          puStack_88 = &DAT_00389830;

          local_58 = uVar5;

          _objc_retain(uVar5);

          local_80 = uVar5;

          FUN_002917c0(0x3fd6666666666666,&_OBJC_CLASS___UIView,extraout_x1,&local_78,&local_a0);

          _objc_release(local_80);

          uVar6 = local_58;

        }

        _objc_release(uVar6);

        _objc_release(uVar5);

      }

    }

  }

  _objc_release(param_3);

  return;

}




