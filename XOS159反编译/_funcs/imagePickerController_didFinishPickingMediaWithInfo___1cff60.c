// imagePickerController:didFinishPickingMediaWithInfo: @0x1cff60


/* Function Stack Size: 0x20 bytes */



void XZYCLGDividerGestureTarget::imagePickerController_didFinishPickingMediaWithInfo_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  cfstringStruct *pcVar1;

  int iVar2;

  long lVar3;

  cfstringStruct *pcVar4;

  long lVar5;

  undefined8 uVar6;

  long lVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

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

  undefined8 extraout_x1_09;

  ulong uVar12;

  double dVar13;

  double in_d1;

  double dVar14;

  undefined1 auVar15 [16];

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  FUN_00299540(param_4,extraout_x1,*(undefined8 *)PTR__UIImagePickerControllerOriginalImage_00388490

              );

  auVar15 = _objc_retainAutoreleasedReturnValue();

  lVar5 = auVar15._0_8_;

  if (lVar5 == 0) {

    FUN_00299540(param_4,auVar15._8_8_,

                 *(undefined8 *)PTR__UIImagePickerControllerEditedImage_00388478);

    lVar3 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    _objc_retain(lVar5);

    lVar3 = lVar5;

  }

  _objc_release(lVar5);

  FUN_00299c20(param_1);

  pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  auVar15 = FUN_00297fa0();

  uVar6 = auVar15._8_8_;

  if ((auVar15._0_8_ != 0) && (lVar3 != 0)) {

    iVar2 = FUN_00299c40(param_1);

    _objc_retain(pcVar4);

    _objc_retain(lVar3);

    if (iVar2 == 0) {

      lVar5 = FUN_00297fa0(pcVar4);

      if (((lVar5 != 0) && (dVar13 = (double)FUN_002a3d80(lVar3), 0.0 < dVar13)) && (0.0 < in_d1)) {

        dVar14 = 24.0 / dVar13;

        if (24.0 / in_d1 <= 24.0 / dVar13) {

          dVar14 = 24.0 / in_d1;

        }

        _UIGraphicsBeginImageContextWithOptions(0x4038000000000000,0x4038000000000000,0,0);

        lVar5 = _UIGraphicsGetCurrentContext();

        if (lVar5 != 0) {

          _CGContextClearRect(0,0,0x4038000000000000,0x4038000000000000);

        }

        FUN_00294900((24.0 - dVar13 * dVar14) * 0.5,(24.0 - in_d1 * dVar14) * 0.5,lVar3);

        _UIGraphicsGetImageFromCurrentImageContext();

        lVar5 = _objc_retainAutoreleasedReturnValue();

        _UIGraphicsEndImageContext();

        if (lVar5 == 0) {

          uVar6 = 0;

        }

        else {

          _UIImagePNGRepresentation(lVar5);

          uVar6 = _objc_retainAutoreleasedReturnValue();

        }

        lVar7 = FUN_00297fa0(uVar6);

        if (lVar7 != 0) {

          FUN_0020c20c();

          uVar8 = _objc_retainAutoreleasedReturnValue();

          _objc_retain(pcVar4);

          auVar15 = FUN_00297fa0(pcVar4);

          pcVar1 = &cf_group;

          if (auVar15._0_8_ != 0) {

            pcVar1 = pcVar4;

          }

          FUN_002a46a0(&_OBJC_CLASS___NSMutableString,auVar15._8_8_,pcVar1);

          auVar15 = _objc_retainAutoreleasedReturnValue();

          uVar11 = auVar15._0_8_;

          FUN_00292c40(&_OBJC_CLASS___NSCharacterSet,auVar15._8_8_,

                       &cf_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789__);

          uVar9 = _objc_retainAutoreleasedReturnValue();

          auVar15 = FUN_00297fa0(uVar11);

          uVar10 = auVar15._8_8_;

          if (0 < auVar15._0_8_) {

            uVar12 = auVar15._0_8_ + 1;

            do {

              auVar15 = FUN_00292be0(uVar11,uVar10,uVar12 - 2);

              auVar15 = FUN_00292c00(uVar9,auVar15._8_8_,auVar15._0_8_);

              uVar10 = auVar15._8_8_;

              if ((auVar15._0_8_ & 1) == 0) {

                FUN_0029b5e0(uVar11,uVar10,uVar12 - 2,1,&cf__);

                uVar10 = extraout_x1_04;

              }

              uVar12 = uVar12 - 1;

            } while (1 < uVar12);

          }

          FUN_002a4680(&_OBJC_CLASS___NSString,uVar10,&cf_clg_icon____png);

          uVar10 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar9);

          _objc_release(uVar11);

          _objc_release(pcVar4);

          FUN_002a4460(uVar8,extraout_x1_05,uVar10);

          uVar11 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar10);

          _objc_release(uVar8);

          uVar12 = FUN_002a6580(uVar6,extraout_x1_06,uVar11,1);

          if ((uVar12 & 1) != 0) {

            FUN_0020c3d4(pcVar4,uVar11);

          }

          _objc_release(uVar11);

        }

        _objc_release(uVar6);

        _objc_release(lVar5);

      }

      _objc_release(lVar3);

      _objc_release(pcVar4);

      FUN_001ce1f8(pcVar4,0);

      FUN_001ce328();

      uVar6 = extraout_x1_07;

    }

    else {

      lVar5 = FUN_00297fa0(pcVar4);

      if (((lVar5 != 0) && (dVar13 = (double)FUN_002a3d80(lVar3), 0.0 < dVar13)) && (0.0 < in_d1)) {

        dVar14 = 48.0 / dVar13;

        if (48.0 / in_d1 <= 48.0 / dVar13) {

          dVar14 = 48.0 / in_d1;

        }

        _UIGraphicsBeginImageContextWithOptions(0x4048000000000000,0x4048000000000000,0,0);

        lVar5 = _UIGraphicsGetCurrentContext();

        if (lVar5 != 0) {

          _CGContextClearRect(0,0,0x4048000000000000,0x4048000000000000);

        }

        FUN_00294900((48.0 - dVar13 * dVar14) * 0.5,(48.0 - in_d1 * dVar14) * 0.5,lVar3);

        _UIGraphicsGetImageFromCurrentImageContext();

        lVar5 = _objc_retainAutoreleasedReturnValue();

        _UIGraphicsEndImageContext();

        if (lVar5 == 0) {

          uVar6 = 0;

        }

        else {

          _UIImagePNGRepresentation(lVar5);

          uVar6 = _objc_retainAutoreleasedReturnValue();

        }

        lVar7 = FUN_00297fa0(uVar6);

        if (lVar7 != 0) {

          FUN_0020c20c();

          uVar8 = _objc_retainAutoreleasedReturnValue();

          _objc_retain(pcVar4);

          auVar15 = FUN_00297fa0(pcVar4);

          pcVar1 = &cf_group;

          if (auVar15._0_8_ != 0) {

            pcVar1 = pcVar4;

          }

          FUN_002a46a0(&_OBJC_CLASS___NSMutableString,auVar15._8_8_,pcVar1);

          auVar15 = _objc_retainAutoreleasedReturnValue();

          uVar11 = auVar15._0_8_;

          FUN_00292c40(&_OBJC_CLASS___NSCharacterSet,auVar15._8_8_,

                       &cf_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789__);

          uVar9 = _objc_retainAutoreleasedReturnValue();

          auVar15 = FUN_00297fa0(uVar11);

          uVar10 = auVar15._8_8_;

          if (0 < auVar15._0_8_) {

            uVar12 = auVar15._0_8_ + 1;

            do {

              auVar15 = FUN_00292be0(uVar11,uVar10,uVar12 - 2);

              auVar15 = FUN_00292c00(uVar9,auVar15._8_8_,auVar15._0_8_);

              uVar10 = auVar15._8_8_;

              if ((auVar15._0_8_ & 1) == 0) {

                FUN_0029b5e0(uVar11,uVar10,uVar12 - 2,1,&cf__);

                uVar10 = extraout_x1_00;

              }

              uVar12 = uVar12 - 1;

            } while (1 < uVar12);

          }

          FUN_002a4680(&_OBJC_CLASS___NSString,uVar10,&cf_clg_side_icon____png);

          uVar10 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar9);

          _objc_release(uVar11);

          _objc_release(pcVar4);

          FUN_002a4460(uVar8,extraout_x1_01,uVar10);

          uVar11 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar10);

          _objc_release(uVar8);

          uVar12 = FUN_002a6580(uVar6,extraout_x1_02,uVar11,1);

          if ((uVar12 & 1) != 0) {

            FUN_0020c804(pcVar4,uVar11);

          }

          _objc_release(uVar11);

        }

        _objc_release(uVar6);

        _objc_release(lVar5);

      }

      _objc_release(lVar3);

      _objc_release(pcVar4);

      FUN_001cf6c4(pcVar4,0);

      FUN_001cf7f4();

      uVar6 = extraout_x1_03;

    }

  }

  FUN_002a0600(param_1,uVar6,0);

  FUN_002a0620(param_1,extraout_x1_08,0);

  FUN_00294700(param_3,extraout_x1_09,1,0);

  _objc_release(pcVar4);

  _objc_release(lVar3);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




