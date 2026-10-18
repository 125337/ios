// FUN_001880c4 @0x1880c4


void FUN_001880c4(undefined8 param_1)



{

  byte bVar1;

  char cVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 uVar7;

  long lVar8;

  undefined8 uVar9;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  long lVar10;

  double dVar11;

  double dVar12;

  undefined1 auVar13 [16];

  undefined1 auVar14 [16];

  undefined8 local_90;

  undefined8 local_88;

  

  _objc_retain();

  FUN_00187694();

  cVar2 = DAT_003e8d35;

  bVar1 = DAT_003e8d34;

  if (((DAT_003e8d31 & 1) != 0) && (DAT_003e8d34 != 0 || DAT_003e8d35 != '\0')) {

    FUN_002a6080(param_1,extraout_x1,&cf_currentIndex);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    lVar4 = FUN_002984c0();

    _objc_release(uVar3);

    FUN_002a6080(param_1,extraout_x1_00,&cf_itemList);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    if (((bVar1 & 1) != 0) || (lVar6 = DAT_003e6e20, lVar4 != DAT_003e6e20)) {

      if (cVar2 == '\0') {

        local_90 = 0;

        local_88 = 0;

      }

      else {

        FUN_00188558(1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        _objc_retainAutorelease();

        local_88 = FUN_00290a20();

        _objc_release(uVar5);

        FUN_00188558(0);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        _objc_retainAutorelease();

        local_90 = FUN_00290a20();

        _objc_release(uVar5);

      }

      lVar10 = 0;

      while( true ) {

        auVar13 = FUN_00293860(uVar3);

        lVar6 = lVar4;

        if (auVar13._0_8_ <= lVar10) break;

        FUN_00299500(uVar3,auVar13._8_8_,lVar10);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        FUN_002a6080(auVar13._0_8_,auVar13._8_8_,&cf_view);

        lVar6 = _objc_retainAutoreleasedReturnValue();

        uVar5 = DAT_003e6e18;

        if (lVar6 != 0) {

          if (cVar2 != '\0') {

            FUN_00297e40(lVar6);

            uVar7 = _objc_retainAutoreleasedReturnValue();

            FUN_0029d820(uVar5);

            _objc_release(uVar7);

            FUN_00297e40(lVar6);

            uVar5 = _objc_retainAutoreleasedReturnValue();

            FUN_0029d0e0(0x4004000000000000);

            _objc_release(uVar5);

            FUN_00297e40(lVar6);

            auVar14 = _objc_retainAutoreleasedReturnValue();

            uVar5 = local_88;

            if (lVar4 != lVar10) {

              uVar5 = local_90;

            }

            FUN_0029d0a0(auVar14._0_8_,auVar14._8_8_,uVar5);

            _objc_release(auVar14._0_8_);

          }

          if (bVar1 != 0) {

            _objc_retain(lVar6);

            FUN_002a62a0(lVar6,extraout_x1_01,0x135257f);

            lVar8 = _objc_retainAutoreleasedReturnValue();

            _objc_release();

            if (lVar8 == 0) {

              FUN_00294b00(&_OBJC_CLASS___UIBlurEffect,extraout_x1_02,0);

              uVar5 = _objc_retainAutoreleasedReturnValue();

              auVar14 = _objc_alloc(&_OBJC_CLASS___UIVisualEffectView);

              auVar14 = FUN_00296b00(auVar14._0_8_,auVar14._8_8_,uVar5);

              uVar7 = auVar14._0_8_;

              FUN_002a1c80(uVar7,auVar14._8_8_,0x135257f);

              FUN_002925a0(lVar6);

              FUN_0029e5e0(uVar7);

              FUN_0029ce00(uVar7,extraout_x1_03,0x12);

              FUN_002a23c0(uVar7,extraout_x1_04,0);

              FUN_00297e40(uVar7);

              uVar9 = _objc_retainAutoreleasedReturnValue();

              FUN_0029d820(0x4020000000000000);

              _objc_release(uVar9);

              FUN_0029d4a0(uVar7,extraout_x1_05,1);

              FUN_0029cb60(0,uVar7);

              FUN_00291380(lVar6,extraout_x1_06,uVar7);

              _objc_release(uVar7);

              _objc_release(uVar5);

            }

            _objc_release(lVar6);

            FUN_002a62a0(lVar6,extraout_x1_07,0x135257f);

            lVar8 = _objc_retainAutoreleasedReturnValue();

            if (lVar10 - lVar4 < 1) {

              if (lVar8 != 0) {

                FUN_0029cb60(0,lVar8);

              }

            }

            else if (lVar8 != 0) {

              dVar11 = (double)(ulong)(lVar10 - lVar4) * 0.7;

              dVar12 = 1.0;

              if (dVar11 <= 1.0) {

                dVar12 = dVar11;

              }

              FUN_0029cb60(dVar12,lVar8);

              FUN_002925e0(lVar6,extraout_x1_08,lVar8);

            }

            _objc_release(lVar8);

          }

        }

        _objc_release(lVar6);

        _objc_release(auVar13._0_8_);

        lVar10 = lVar10 + 1;

      }

    }

    DAT_003e6e20 = lVar6;

    _objc_release(uVar3);

  }

  _objc_release(param_1);

  return;

}




