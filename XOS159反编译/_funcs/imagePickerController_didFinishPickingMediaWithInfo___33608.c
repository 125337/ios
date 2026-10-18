// imagePickerController:didFinishPickingMediaWithInfo: @0x33608


/* WARNING: Removing unreachable block (ram,0x00034004) */

/* Function Stack Size: 0x20 bytes */



void _0x2f19de29::imagePickerController_didFinishPickingMediaWithInfo_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  long lVar1;

  bool bVar2;

  int iVar3;

  int iVar4;

  int iVar5;

  long lVar6;

  long lVar7;

  long lVar8;

  undefined8 uVar9;

  ulong uVar10;

  cfstringStruct *pcVar11;

  undefined8 uVar12;

  long lVar13;

  long lVar14;

  long lVar15;

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

  undefined8 extraout_x1_10;

  undefined8 extraout_x1_11;

  undefined8 extraout_x1_12;

  undefined8 extraout_x1_13;

  undefined8 extraout_x1_14;

  undefined1 auVar16 [16];

  cfstringStruct *local_f0;

  undefined8 local_e0;

  undefined8 local_d8;

  undefined8 local_d0;

  undefined *local_b8;

  undefined8 local_b0;

  code *local_a8;

  undefined *puStack_a0;

  ID local_98;

  undefined *local_90;

  undefined8 local_88;

  code *local_80;

  undefined *puStack_78;

  ID local_70;

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  if (param_4 == 0) {

    FUN_00294700(param_3,extraout_x1,1,0);

    uVar9 = extraout_x1_01;

    goto LAB_00033fbc;

  }

  FUN_00299540(param_4,extraout_x1,*(undefined8 *)PTR__UIImagePickerControllerEditedImage_00388478);

  auVar16 = _objc_retainAutoreleasedReturnValue();

  lVar6 = auVar16._0_8_;

  FUN_00299540(param_4,auVar16._8_8_,

               *(undefined8 *)PTR__UIImagePickerControllerOriginalImage_00388490);

  lVar7 = _objc_retainAutoreleasedReturnValue();

  lVar1 = lVar7;

  if (lVar6 != 0) {

    lVar1 = lVar6;

  }

  _objc_retain(lVar1);

  _objc_getAssociatedObject(param_3,PTR_LOOP_003e6048);

  lVar8 = _objc_retainAutoreleasedReturnValue();

  if (lVar8 != 0) {

    uVar9 = _objc_opt_class(&_OBJC_CLASS___NSNumber);

    uVar10 = _objc_opt_isKindOfClass(lVar8,uVar9);

    if ((uVar10 & 1) == 0) goto LAB_000337c0;

    iVar3 = FUN_002924e0(lVar8);

    _objc_release(lVar8);

    iVar5 = 0;

    if (lVar1 != 0) {

      iVar5 = iVar3;

    }

    if (iVar5 != 1) goto LAB_000337d0;

    auVar16 = _objc_alloc_init(&_OBJC_CLASS___NSDateFormatter);

    local_d0 = auVar16._0_8_;

    FUN_0029db60(local_d0,auVar16._8_8_,&cf_yyyyMMdd_HHmmss);

    FUN_002940e0(&_OBJC_CLASS___NSDate);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4600(local_d0,auVar16._8_8_,auVar16._0_8_);

    local_e0 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar16._0_8_);

    FUN_00299540(param_4,extraout_x1_00,*(undefined8 *)PTR__UIImagePickerControllerImageURL_00388480

                );

    auVar16 = _objc_retainAutoreleasedReturnValue();

    uVar9 = auVar16._8_8_;

    lVar13 = auVar16._0_8_;

    if (lVar13 == 0) {

      local_f0 = &cf_png;

    }

    else {

      FUN_00299b20(lVar13);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_002984e0();

      pcVar11 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      _objc_release(uVar9);

      lVar8 = FUN_00297fa0(pcVar11);

      if (lVar8 == 0) {

        local_f0 = &cf_png;

      }

      else {

        _objc_retain(pcVar11);

        local_f0 = pcVar11;

      }

      _objc_release(pcVar11);

      uVar9 = extraout_x1_04;

    }

    FUN_002a4680(&_OBJC_CLASS___NSString,uVar9,&cf_nameplate______);

    lVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_00295a00(param_1);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    local_d8 = auVar16._0_8_;

    FUN_002a4460(local_d8,auVar16._8_8_,lVar8);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    lVar14 = auVar16._0_8_;

    if (lVar13 == 0) {

      lVar15 = lVar6;

      if (lVar7 != 0) {

        lVar15 = lVar7;

      }

      _UIImagePNGRepresentation(lVar15);

      auVar16 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      FUN_00294040(&_OBJC_CLASS___NSData,auVar16._8_8_,lVar13);

      auVar16 = _objc_retainAutoreleasedReturnValue();

    }

    uVar9 = auVar16._8_8_;

    lVar15 = auVar16._0_8_;

    if ((lVar15 != 0) &&

       (iVar5 = FUN_002a6580(lVar15,uVar9,lVar14,1), uVar9 = extraout_x1_05, iVar5 != 0)) {

      FUN_00299060(param_1);

      auVar16 = _objc_retainAutoreleasedReturnValue();

      FUN_00291240(auVar16._0_8_,auVar16._8_8_,lVar8);

      _objc_release(auVar16._0_8_);

      FUN_00299060(param_1);

      auVar16 = _objc_retainAutoreleasedReturnValue();

      FUN_002a3f00(auVar16._0_8_,auVar16._8_8_,"localizedCaseInsensitiveCompare:");

      _objc_release(auVar16._0_8_);

      iVar5 = FUN_001331c4();

      pcVar11 = &cf_xzyNameplateImageNameDark;

      if (iVar5 == 0) {

        pcVar11 = &cf_xzyNameplateImageNameLight;

      }

      _objc_retain(pcVar11);

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      auVar16 = _objc_retainAutoreleasedReturnValue();

      FUN_002a0060(auVar16._0_8_,auVar16._8_8_,lVar8,pcVar11);

      _objc_release(auVar16._0_8_);

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4a40();

      _objc_release(uVar9);

      FUN_0011acdc();

      _objc_release(pcVar11);

      local_90 = PTR___NSConcreteStackBlock_003886f0;

      local_88 = 0xc2000000;

      local_80 = FUN_00034394;

      puStack_78 = &DAT_00388e60;

      local_70 = param_1;

      _dispatch_async(PTR___dispatch_main_q_00388740,&local_90);

      uVar9 = extraout_x1_06;

    }

    FUN_00294700(param_3,uVar9,1,0);

    goto LAB_00033f64;

  }

LAB_000337c0:

  _objc_release(lVar8);

LAB_000337d0:

  _objc_getAssociatedObject(param_3,PTR_LOOP_003e6050);

  lVar8 = _objc_retainAutoreleasedReturnValue();

  if (lVar8 == 0) {

LAB_00033830:

    iVar5 = 0;

  }

  else {

    uVar9 = _objc_opt_class(&_OBJC_CLASS___NSNumber);

    uVar10 = _objc_opt_isKindOfClass(lVar8,uVar9);

    if ((uVar10 & 1) == 0) goto LAB_00033830;

    iVar5 = FUN_002924e0(lVar8);

  }

  _objc_release(lVar8);

  if (lVar1 != 0) {

    auVar16 = _objc_alloc_init(&_OBJC_CLASS___NSDateFormatter);

    local_d0 = auVar16._0_8_;

    FUN_0029db60(local_d0,auVar16._8_8_,&cf_yyyyMMdd_HHmmss);

    FUN_002940e0(&_OBJC_CLASS___NSDate);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4600(local_d0,auVar16._8_8_,auVar16._0_8_);

    local_e0 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar16._0_8_);

    FUN_00299540(param_4,extraout_x1_02,*(undefined8 *)PTR__UIImagePickerControllerImageURL_00388480

                );

    auVar16 = _objc_retainAutoreleasedReturnValue();

    uVar9 = auVar16._8_8_;

    lVar8 = auVar16._0_8_;

    if (lVar8 == 0) {

      iVar3 = 0;

      bVar2 = false;

      pcVar11 = &cf_png;

    }

    else {

      FUN_00299b20(lVar8);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_002984e0();

      uVar12 = _objc_retainAutoreleasedReturnValue();

      _objc_release(uVar9);

      auVar16 = FUN_00297820(uVar12,extraout_x1_03,&cf_gif);

      iVar3 = auVar16._0_4_;

      if ((auVar16._0_8_ & 1) == 0) {

        auVar16 = FUN_00297820(uVar12,auVar16._8_8_,&cf_webp);

        if ((auVar16._0_8_ & 1) == 0) {

          auVar16 = FUN_00297820(uVar12,auVar16._8_8_,&cf_jpg);

          if (((auVar16._0_8_ & 1) == 0) &&

             (iVar4 = FUN_00297820(uVar12,auVar16._8_8_,&cf_jpeg), iVar4 == 0)) {

            bVar2 = false;

            pcVar11 = &cf_png;

          }

          else {

            bVar2 = false;

            pcVar11 = &cf_jpg;

          }

        }

        else {

          pcVar11 = &cf_webp;

          bVar2 = true;

        }

      }

      else {

        bVar2 = false;

        pcVar11 = &cf_gif;

      }

      _objc_release(uVar12);

      uVar9 = extraout_x1_07;

    }

    if (iVar5 == 0) {

      FUN_002a4680(&_OBJC_CLASS___NSString,uVar9,&cf_cover______);

      lVar13 = _objc_retainAutoreleasedReturnValue();

      FUN_00295960(param_1);

      auVar16 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      FUN_002a4680(&_OBJC_CLASS___NSString,uVar9,&cf_personal______);

      lVar13 = _objc_retainAutoreleasedReturnValue();

      FUN_00295a40(param_1);

      auVar16 = _objc_retainAutoreleasedReturnValue();

    }

    local_f0 = auVar16._0_8_;

    FUN_002a4460(local_f0,auVar16._8_8_,lVar13);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    local_d8 = auVar16._0_8_;

    if ((lVar8 == 0) || (iVar3 == 0 && !bVar2)) {

      iVar3 = FUN_00297820(pcVar11,auVar16._8_8_,&cf_jpg);

      if (iVar3 == 0) {

        _UIImagePNGRepresentation(lVar1);

        auVar16 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        _UIImageJPEGRepresentation(0x3feccccccccccccd,lVar1);

        auVar16 = _objc_retainAutoreleasedReturnValue();

      }

    }

    else {

      FUN_00294040(&_OBJC_CLASS___NSData,auVar16._8_8_,lVar8);

      auVar16 = _objc_retainAutoreleasedReturnValue();

    }

    uVar9 = auVar16._8_8_;

    lVar14 = auVar16._0_8_;

    if ((lVar14 == 0) ||

       (iVar3 = FUN_002a6580(lVar14,uVar9,local_d8,1), uVar9 = extraout_x1_08, iVar3 == 0)) {

      FUN_00291580(&_OBJC_CLASS___UIAlertController,uVar9,&cf_OX_1Y_,&cf_VGrOX_1Y_,1);

      auVar16 = _objc_retainAutoreleasedReturnValue();

      lVar15 = auVar16._0_8_;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar16._8_8_,&cf_nx_,0,0);

      auVar16 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(lVar15,auVar16._8_8_,auVar16._0_8_);

      _objc_release(auVar16._0_8_);

      FUN_0029a500(param_1,extraout_x1_10,lVar15,1,0);

LAB_00033f64:

      _objc_release(lVar15);

    }

    else {

      if (iVar5 != 0) {

        FUN_00295b40(param_1);

        auVar16 = _objc_retainAutoreleasedReturnValue();

        uVar9 = auVar16._8_8_;

        lVar15 = auVar16._0_8_;

        if (lVar15 != 0) {

          FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

          uVar9 = _objc_retainAutoreleasedReturnValue();

          iVar5 = FUN_001331c4();

          if (iVar5 == 0) {

            FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_09,&cf_personalCover____Light);

            auVar16 = _objc_retainAutoreleasedReturnValue();

          }

          else {

            FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_09,&cf_personalCover____Dark);

            auVar16 = _objc_retainAutoreleasedReturnValue();

          }

          FUN_002a0060(uVar9,auVar16._8_8_,lVar13,auVar16._0_8_);

          FUN_002a4a40(uVar9);

          FUN_00007f9c();

          _objc_release(auVar16._0_8_);

          _objc_release(uVar9);

          uVar9 = extraout_x1_12;

        }

        FUN_00291580(&_OBJC_CLASS___UIAlertController,uVar9,&cf_mRbR,&cf_beni_VGr_mRv_n_bR,1);

        auVar16 = _objc_retainAutoreleasedReturnValue();

        uVar9 = auVar16._0_8_;

        FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar16._8_8_,&cf_bwSN,0,0);

        auVar16 = _objc_retainAutoreleasedReturnValue();

        FUN_00290fe0(uVar9,auVar16._8_8_,auVar16._0_8_);

        _objc_release(auVar16._0_8_);

        FUN_0029a500(param_1,extraout_x1_13,uVar9,1,0);

        _objc_release(uVar9);

        goto LAB_00033f64;

      }

      FUN_00293960(param_1);

      auVar16 = _objc_retainAutoreleasedReturnValue();

      FUN_00291240(auVar16._0_8_,auVar16._8_8_,lVar13);

      _objc_release(auVar16._0_8_);

      FUN_00293960(param_1);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      lVar15 = FUN_00293860();

      _objc_release(uVar9);

      if (lVar15 == 1) {

        FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        iVar5 = FUN_001331c4();

        pcVar11 = &cf_selectedCoverImageNameDark;

        if (iVar5 == 0) {

          pcVar11 = &cf_selectedCoverImageNameLight;

        }

        _objc_retain(pcVar11);

        FUN_002a0060(uVar9,extraout_x1_11,lVar13,pcVar11);

        FUN_002a4a40(uVar9);

        FUN_00007f9c();

        _objc_release(pcVar11);

        _objc_release(uVar9);

      }

      local_b8 = PTR___NSConcreteStackBlock_003886f0;

      local_b0 = 0xc2000000;

      local_a8 = FUN_00034484;

      puStack_a0 = &DAT_00388e60;

      local_98 = param_1;

      _dispatch_async(PTR___dispatch_main_q_00388740,&local_b8);

    }

    _objc_release(lVar14);

    _objc_release(local_d8);

    _objc_release(lVar8);

    _objc_release(local_f0);

    _objc_release(lVar13);

    _objc_release(local_e0);

    _objc_release(local_d0);

  }

  _objc_release(lVar1);

  _objc_release(lVar7);

  _objc_release(lVar6);

  uVar9 = extraout_x1_14;

LAB_00033fbc:

  FUN_00294700(param_3,uVar9,1,0);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




