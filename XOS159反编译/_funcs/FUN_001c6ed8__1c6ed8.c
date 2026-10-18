// FUN_001c6ed8 @0x1c6ed8


void FUN_001c6ed8(undefined8 param_1)



{

  int iVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  ulong uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar6;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  uint uVar7;

  uint uVar8;

  uint uVar9;

  double dVar10;

  undefined1 auVar11 [16];

  uint local_44;

  

  _objc_retain();

  lVar2 = FUN_00297fa0(param_1);

  if (lVar2 == 0) {

    uVar4 = 0;

  }

  else {

    FUN_002a64c0(&_OBJC_CLASS___NSCharacterSet);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    FUN_002a45c0(param_1,auVar11._8_8_,auVar11._0_8_);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar11._0_8_);

    iVar1 = FUN_00295f60(uVar3,extraout_x1,&cf__);

    uVar4 = uVar3;

    if (iVar1 != 0) {

      FUN_002a47c0(uVar3,extraout_x1_00,1);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_release(uVar3);

    }

    auVar11 = FUN_00297fa0(uVar4);

    uVar3 = uVar4;

    if (auVar11._0_8_ == 3) {

      FUN_002a4640(&_OBJC_CLASS___NSMutableString,auVar11._8_8_,6);

      auVar11 = _objc_retainAutoreleasedReturnValue();

      uVar6 = auVar11._8_8_;

      uVar3 = auVar11._0_8_;

      lVar2 = 0;

      do {

        FUN_00292be0(uVar4,uVar6,lVar2);

        FUN_002919a0(uVar3,extraout_x1_01,&cf__C_C);

        lVar2 = lVar2 + 1;

        uVar6 = extraout_x1_02;

      } while (lVar2 != 3);

      _objc_release(uVar4);

    }

    auVar11 = FUN_00297fa0(uVar3);

    uVar4 = auVar11._8_8_;

    if ((auVar11._0_8_ == 6) ||

       (auVar11 = FUN_00297fa0(uVar3), uVar4 = auVar11._8_8_, auVar11._0_8_ == 8)) {

      local_44 = 0;

      FUN_0029be20(&_OBJC_CLASS___NSScanner,uVar4,uVar3);

      auVar11 = _objc_retainAutoreleasedReturnValue();

      uVar5 = FUN_0029bde0(auVar11._0_8_,auVar11._8_8_,&local_44);

      if ((uVar5 & 1) == 0) {

        uVar4 = 0;

      }

      else {

        lVar2 = FUN_00297fa0(uVar3);

        uVar9 = local_44 >> 8;

        if (lVar2 == 8) {

          uVar8 = local_44 >> 0x18;

          dVar10 = (double)(local_44 & 0xff) / 255.0;

          uVar7 = uVar9;

          uVar9 = local_44 >> 0x10;

        }

        else {

          uVar8 = local_44 >> 0x10 & 0xff;

          dVar10 = 1.0;

          uVar7 = local_44;

        }

        FUN_00293040((double)uVar8 / 255.0,(double)(uVar9 & 0xff) / 255.0,

                     (double)(uVar7 & 0xff) / 255.0,dVar10,&_OBJC_CLASS___UIColor);

        uVar4 = _objc_retainAutoreleasedReturnValue();

      }

      _objc_release(auVar11._0_8_);

    }

    else {

      uVar4 = 0;

    }

    _objc_release(uVar3);

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar4);

  return;

}




