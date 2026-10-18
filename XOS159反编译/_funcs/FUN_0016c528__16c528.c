// FUN_0016c528 @0x16c528


void FUN_0016c528(void)



{

  long lVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar4;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined1 auVar5 [16];

  undefined8 local_a0;

  undefined8 uStack_98;

  undefined8 uStack_90;

  undefined8 uStack_88;

  undefined8 local_80;

  undefined8 uStack_78;

  undefined8 local_70;

  undefined8 uStack_68;

  undefined8 local_60;

  undefined8 uStack_58;

  undefined8 local_50;

  undefined8 uStack_48;

  

  if (DAT_003e8a38 != 0) {

    FUN_001836f8();

    if (DAT_003e8a58 != 0) {

      FUN_002a4880(DAT_003e8a38);

      lVar1 = _objc_retainAutoreleasedReturnValue();

      lVar2 = DAT_003e8a58;

      _objc_release();

      if (lVar1 != lVar2) {

        FUN_002a4880(DAT_003e8a38);

        auVar5 = _objc_retainAutoreleasedReturnValue();

        uVar3 = auVar5._8_8_;

        lVar2 = auVar5._0_8_;

        if ((lVar2 != 0) && (lVar2 != DAT_003e8a58)) {

          uVar3 = _objc_alloc(&_OBJC_CLASS___UIView);

          FUN_00295600(DAT_003e8a38);

          uVar3 = FUN_00296b80(uVar3);

          FUN_002925a0(DAT_003e8a38);

          FUN_0029d140(uVar3);

          FUN_00292ae0(DAT_003e8a38);

          FUN_0029d320(uVar3);

          if (DAT_003e8a38 == 0) {

            uStack_58 = 0;

            local_60 = 0;

            uStack_48 = 0;

            local_50 = 0;

            uStack_68 = 0;

            local_70 = 0;

            uVar4 = extraout_x1;

          }

          else {

            FUN_002a56a0(&local_70);

            uVar4 = extraout_x1_00;

          }

          uStack_98 = uStack_68;

          local_a0 = local_70;

          uStack_88 = uStack_58;

          uStack_90 = local_60;

          uStack_78 = uStack_48;

          local_80 = local_50;

          FUN_002a21c0(uVar3,uVar4,&local_a0);

          auVar5 = FUN_00291fc0(DAT_003e8a38);

          FUN_0029ce00(uVar3,auVar5._8_8_,auVar5._0_8_);

          FUN_00292dc0(&_OBJC_CLASS___UIColor);

          auVar5 = _objc_retainAutoreleasedReturnValue();

          FUN_0029cf60(uVar3,auVar5._8_8_,auVar5._0_8_);

          _objc_release(auVar5._0_8_);

          FUN_002a23c0(uVar3,extraout_x1_01,0);

          _objc_setAssociatedObject(uVar3,PTR_LOOP_003e6dc0,PTR____kCFBooleanTrue_00388320,1);

          FUN_002a4840(lVar2);

          auVar5 = _objc_retainAutoreleasedReturnValue();

          lVar1 = FUN_00296700(auVar5._0_8_,auVar5._8_8_,DAT_003e8a38);

          _objc_release(auVar5._0_8_);

          if (lVar1 == 0x7fffffffffffffff) {

            FUN_00291380(lVar2,extraout_x1_02,uVar3);

          }

          else {

            FUN_00297100(lVar2,extraout_x1_02,uVar3,lVar1);

          }

          _objc_release(uVar3);

          uVar3 = extraout_x1_03;

        }

        FUN_00291380(DAT_003e8a58,uVar3,DAT_003e8a38);

        _objc_release(lVar2);

      }

    }

  }

  return;

}




