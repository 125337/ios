// documentPicker:didPickDocumentsAtURLs: @0x34778


/* Function Stack Size: 0x20 bytes */



void _0x2f19de29::documentPicker_didPickDocumentsAtURLs_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  int iVar1;

  int iVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  ulong uVar6;

  long lVar7;

  cfstringStruct *pcVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined **ppuVar12;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined1 auVar13 [16];

  undefined1 auVar14 [16];

  undefined1 auVar15 [16];

  undefined1 auVar16 [16];

  undefined *local_c0;

  undefined8 local_b8;

  code *local_b0;

  undefined *puStack_a8;

  ID local_a0;

  undefined *local_98;

  undefined8 local_90;

  code *local_88;

  undefined *puStack_80;

  ID local_78;

  long local_70 [2];

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  auVar13 = FUN_00293860(param_4);

  if (auVar13._0_8_ == 0) {

    FUN_00294700(param_3,auVar13._8_8_,1,0);

    goto LAB_00034c80;

  }

  FUN_00295440(param_4);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_3,PTR_LOOP_003e6050);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  if (lVar4 == 0) {

LAB_00034820:

    iVar1 = 0;

  }

  else {

    uVar5 = _objc_opt_class(&_OBJC_CLASS___NSNumber);

    uVar6 = _objc_opt_isKindOfClass(lVar4,uVar5);

    if ((uVar6 & 1) == 0) goto LAB_00034820;

    iVar1 = FUN_002924e0(lVar4);

  }

  _objc_release(lVar4);

  local_70[0] = 0;

  FUN_00294060(&_OBJC_CLASS___NSData,extraout_x1,uVar3,0,local_70);

  lVar7 = _objc_retainAutoreleasedReturnValue();

  lVar4 = local_70[0];

  _objc_retain(local_70[0]);

  if ((lVar4 != 0) || (lVar7 == 0)) {

    FUN_00294700(param_3,extraout_x1_00,1,0);

    _objc_release(lVar7);

    _objc_release(lVar4);

    _objc_release(uVar3);

    goto LAB_00034c80;

  }

  FUN_00299b20(uVar3);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002984e0();

  pcVar8 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  _objc_release(uVar5);

  auVar13 = FUN_00297820(pcVar8,extraout_x1_01,&cf_png);

  if (((((auVar13._0_8_ & 1) == 0) &&

       (auVar13 = FUN_00297820(pcVar8,auVar13._8_8_,&cf_jpg), (auVar13._0_8_ & 1) == 0)) &&

      (auVar13 = FUN_00297820(pcVar8,auVar13._8_8_,&cf_jpeg), (auVar13._0_8_ & 1) == 0)) &&

     ((auVar13 = FUN_00297820(pcVar8,auVar13._8_8_,&cf_gif), (auVar13._0_8_ & 1) == 0 &&

      (uVar6 = FUN_00297820(pcVar8,auVar13._8_8_,&cf_webp), (uVar6 & 1) == 0)))) {

    _objc_release(pcVar8);

    pcVar8 = &cf_png;

  }

  auVar13 = _objc_alloc_init(&_OBJC_CLASS___NSDateFormatter);

  uVar5 = auVar13._0_8_;

  FUN_0029db60(uVar5,auVar13._8_8_,&cf_yyyyMMdd_HHmmss);

  FUN_002940e0(&_OBJC_CLASS___NSDate);

  auVar13 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4600(uVar5,auVar13._8_8_,auVar13._0_8_);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar13._0_8_);

  if (iVar1 == 0) {

    FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_02,&cf_cover______);

    uVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_00295960(param_1);

    auVar13 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_02,&cf_personal______);

    uVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_00295a40(param_1);

    auVar13 = _objc_retainAutoreleasedReturnValue();

  }

  FUN_002a4460(auVar13._0_8_,auVar13._8_8_,uVar10);

  auVar14 = _objc_retainAutoreleasedReturnValue();

  iVar2 = FUN_002a6580(lVar7,auVar14._8_8_,auVar14._0_8_,1);

  if (iVar2 == 0) {

    local_c0 = PTR___NSConcreteStackBlock_003886f0;

    local_b8 = 0xc2000000;

    local_b0 = FUN_00034ff8;

    puStack_a8 = &DAT_00388e60;

    ppuVar12 = &local_c0;

    local_a0 = param_1;

LAB_00034b50:

    _dispatch_async(PTR___dispatch_main_q_00388740,ppuVar12);

  }

  else {

    if (iVar1 == 0) {

      FUN_00293960(param_1);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_00291240(auVar15._0_8_,auVar15._8_8_,uVar10);

      _objc_release(auVar15._0_8_);

      local_98 = PTR___NSConcreteStackBlock_003886f0;

      local_90 = 0xc2000000;

      local_88 = FUN_00034e34;

      puStack_80 = &DAT_00388e60;

      ppuVar12 = &local_98;

      local_78 = param_1;

      goto LAB_00034b50;

    }

    FUN_00295b40(param_1);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    uVar11 = auVar15._8_8_;

    if (auVar15._0_8_ != 0) {

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      uVar11 = _objc_retainAutoreleasedReturnValue();

      iVar1 = FUN_001331c4();

      if (iVar1 == 0) {

        FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_03,&cf_personalCover____Light);

        auVar16 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_03,&cf_personalCover____Dark);

        auVar16 = _objc_retainAutoreleasedReturnValue();

      }

      FUN_002a0060(uVar11,auVar16._8_8_,uVar10,auVar16._0_8_);

      FUN_002a4a40(uVar11);

      FUN_00007f9c();

      _objc_release(auVar16._0_8_);

      _objc_release(uVar11);

      uVar11 = extraout_x1_04;

    }

    FUN_00291580(&_OBJC_CLASS___UIAlertController,uVar11,&cf_mRbR,&cf_beni_VGr_mRv_n_bR,1);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    uVar11 = auVar16._0_8_;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar16._8_8_,&cf_bwSN,0,0);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar11,auVar16._8_8_,auVar16._0_8_);

    _objc_release(auVar16._0_8_);

    FUN_0029a500(param_1,extraout_x1_05,uVar11,1,0);

    _objc_release(uVar11);

    _objc_release(auVar15._0_8_);

  }

  _objc_release(auVar14._0_8_);

  _objc_release(auVar13._0_8_);

  _objc_release(uVar10);

  _objc_release(uVar9);

  _objc_release(uVar5);

  _objc_release(pcVar8);

  _objc_release(lVar7);

  _objc_release(uVar3);

  FUN_00294700(param_3,extraout_x1_06,1,0);

LAB_00034c80:

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




