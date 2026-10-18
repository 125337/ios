// FUN_0018c568 @0x18c568


void FUN_0018c568(void)



{

  cfstringStruct *pcVar1;

  int iVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  ulong uVar9;

  long lVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

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

  uint uVar14;

  long lVar15;

  uint uVar16;

  float fVar17;

  double dVar18;

  double dVar19;

  undefined1 auVar20 [16];

  undefined1 auVar21 [16];

  undefined *local_c8;

  undefined8 local_c0;

  code *local_b8;

  undefined *puStack_b0;

  long *local_a8;

  long local_a0;

  long *local_98;

  undefined8 local_90;

  code *local_88;

  code *pcStack_80;

  undefined8 local_78;

  

  _pthread_key_create(&DAT_003e94b0,(void *)0x0);

  FUN_002992c0(&_OBJC_CLASS___NSNull);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = DAT_003e94a8;

  DAT_003e94a8 = uVar3;

  _objc_release(uVar4);

  uVar3 = _objc_alloc_init(&_OBJC_CLASS___NSCache);

  uVar4 = DAT_003e9498;

  DAT_003e9498 = uVar3;

  _objc_release(uVar4);

  FUN_0029d860(DAT_003e9498,extraout_x1,200);

  uVar3 = _objc_alloc_init(&_OBJC_CLASS___NSCache);

  uVar4 = DAT_003e94a0;

  DAT_003e94a0 = uVar3;

  _objc_release(uVar4);

  FUN_0029d860(DAT_003e94a0,extraout_x1_00,100);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar20 = _objc_retainAutoreleasedReturnValue();

  uVar3 = auVar20._0_8_;

  fVar17 = (float)FUN_00295460(uVar3,auVar20._8_8_,&cf_xzy_fontSizeOffset);

  DAT_003e94b8 = (double)fVar17;

  FUN_0029b4a0(uVar3,extraout_x1_01,&cf_xzy_fontLaunchGuard);

  auVar20 = FUN_00297480(uVar3,extraout_x1_02,&cf_xzy_fontLaunchGuardCount);

  uVar4 = auVar20._8_8_;

  if (4 < auVar20._0_8_) {

    FUN_0029d080(uVar3,uVar4,0,&cf_xzy_customFontEnabled);

    FUN_0029efa0(uVar3,extraout_x1_03,0,&cf_xzy_fontLaunchGuardCount);

    FUN_002a4a40(uVar3);

    uVar4 = extraout_x1_04;

  }

  iVar2 = FUN_002924c0(uVar3,uVar4,&cf_xzy_customFontEnabled);

  if (iVar2 != 0) {

    FUN_0029efa0(uVar3,extraout_x1_05,auVar20._0_8_ + 1,&cf_xzy_fontLaunchGuardCount);

    FUN_002a4a40(uVar3);

    local_98 = &local_a0;

    local_a0 = 0;

    local_90 = 0x3032000000;

    local_88 = FUN_0018cee4;

    pcStack_80 = FUN_0018cef4;

    local_78 = 0;

    FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002987a0(&_OBJC_CLASS___NSOperationQueue);

    auVar20 = _objc_retainAutoreleasedReturnValue();

    local_c8 = PTR___NSConcreteStackBlock_003886f0;

    local_c0 = 0xc2000000;

    local_b8 = FUN_0018cefc;

    puStack_b0 = &DAT_0038df60;

    local_a8 = &local_a0;

    FUN_002912a0(uVar4,auVar20._8_8_,

                 *(undefined8 *)PTR__UIApplicationDidBecomeActiveNotification_003883b0,0,

                 auVar20._0_8_,&local_c8);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    lVar15 = local_98[5];

    local_98[5] = lVar5;

    _objc_release(lVar15);

    _objc_release(auVar20._0_8_);

    _objc_release(uVar4);

    __Block_object_dispose(&local_a0,8);

    _objc_release(local_78);

  }

  _objc_getClass("UIFont");

  uVar4 = _object_getClass();

  _MSHookMessageEx(uVar4,"systemFontOfSize:",FUN_0018d028,&DAT_003e94c0);

  _MSHookMessageEx(uVar4,"boldSystemFontOfSize:",FUN_0018d0d0,&DAT_003e94c8);

  _MSHookMessageEx(uVar4,"systemFontOfSize:weight:",FUN_0018d178,&DAT_003e94d0);

  _MSHookMessageEx(uVar4,"fontWithName:size:",FUN_0018d254,&DAT_003e94d8);

  _MSHookMessageEx(uVar4,"preferredFontForTextStyle:",FUN_0018d31c,&DAT_003e94e0);

  uVar4 = _objc_getClass("WKWebView");

  _MSHookMessageEx(uVar4,"initWithFrame:configuration:",FUN_0018d4dc,&DAT_003e94e8);

  _NSSearchPathForDirectoriesInDomains(9,1,1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar4);

  FUN_002a4460(uVar6,extraout_x1_06,&cf_CoverRes_reFont);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00294240(&_OBJC_CLASS___NSFileManager);

  auVar20 = _objc_retainAutoreleasedReturnValue();

  uVar11 = auVar20._0_8_;

  auVar20 = FUN_00295160(uVar11,auVar20._8_8_,uVar4);

  if ((auVar20._0_8_ & 1) == 0) {

    FUN_00293a60(uVar11,auVar20._8_8_,uVar4,1,0,0);

  }

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar20 = _objc_retainAutoreleasedReturnValue();

  uVar12 = auVar20._0_8_;

  auVar20 = FUN_002924c0(uVar12,auVar20._8_8_,&cf_xzy_customFontEnabled);

  if ((auVar20._0_8_ & 1) != 0) {

    FUN_002a45e0(uVar12,auVar20._8_8_,&cf_xzy_customFontFile);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    auVar20 = FUN_00297fa0();

    if (auVar20._0_8_ != 0) {

      FUN_002a4460(uVar4,auVar20._8_8_,uVar7);

      auVar20 = _objc_retainAutoreleasedReturnValue();

      uVar13 = auVar20._0_8_;

      iVar2 = FUN_00295160(uVar11,auVar20._8_8_,uVar13);

      if (iVar2 != 0) {

        _objc_retain(uVar13);

        FUN_00294020(&_OBJC_CLASS___NSData,extraout_x1_07,uVar13);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        if (lVar5 != 0) {

          uVar8 = _CGDataProviderCreateWithCFData(lVar5);

          lVar15 = _CGFontCreateWithDataProvider();

          _CGDataProviderRelease(uVar8);

          if (lVar15 != 0) {

            local_a0 = 0;

            uVar9 = _CTFontManagerRegisterGraphicsFont(lVar15,&local_a0);

            if ((uVar9 & 1) == 0) {

              if (local_a0 != 0) {

                _CFRelease();

              }

              _CGFontRelease(lVar15);

            }

            else {

              lVar10 = _CGFontCopyPostScriptName(lVar15);

              _CGFontRelease(lVar15);

              auVar20 = FUN_00297fa0(lVar10);

              if (auVar20._0_8_ != 0) {

                FUN_002955a0(0x4028000000000000,&_OBJC_CLASS___UIFont,auVar20._8_8_,lVar10);

                lVar15 = _objc_retainAutoreleasedReturnValue();

                _objc_release();

                if (lVar15 != 0) {

                  _objc_retain(lVar10);

                  lVar15 = DAT_003e8e48;

                  DAT_003e8e48 = lVar10;

                  _objc_release(lVar15);

                }

              }

              _objc_release(lVar10);

            }

          }

        }

        _objc_release(lVar5);

        _objc_release(uVar13);

      }

      _objc_release(uVar13);

    }

    _objc_release(uVar7);

  }

  _objc_release(uVar12);

  _objc_release(uVar11);

  _objc_release(uVar4);

  _objc_release(uVar6);

  DAT_003e94f0 = DAT_003e94b8 != 0.0 || DAT_003e8e48 != 0;

  if ((DAT_003e8e48 != 0) &&

     (iVar2 = FUN_002924c0(uVar3,extraout_x1_08,&cf_xzy_webFontInjectEnabled), iVar2 != 0)) {

    _NSSearchPathForDirectoriesInDomains(9,1,1);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_00295440();

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar4);

    FUN_002a4460(uVar6,extraout_x1_09,&cf_CoverRes_reFont);

    auVar20 = _objc_retainAutoreleasedReturnValue();

    FUN_002a45e0(uVar3,auVar20._8_8_,&cf_xzy_customFontFile);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    auVar21 = FUN_00297fa0();

    if (auVar21._0_8_ != 0) {

      FUN_002a4460(auVar20._0_8_,auVar21._8_8_,uVar4);

      auVar21 = _objc_retainAutoreleasedReturnValue();

      FUN_00294020(&_OBJC_CLASS___NSData,auVar21._8_8_,auVar21._0_8_);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar21._0_8_);

      if (lVar5 != 0) {

        FUN_00292140(lVar5,extraout_x1_10,0);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        FUN_00299b20(uVar4);

        uVar12 = _objc_retainAutoreleasedReturnValue();

        FUN_002984e0();

        uVar7 = _objc_retainAutoreleasedReturnValue();

        _objc_release(uVar12);

        iVar2 = FUN_00297820(uVar7,extraout_x1_11,&cf_otf);

        pcVar1 = &cf_font_otf;

        if (iVar2 == 0) {

          pcVar1 = &cf_font_ttf;

        }

        _objc_retain(pcVar1);

        FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_12,

                     &

                     cf__function___if_document_getElementById__xzy_cf___return_vars_document_createElement__style___s_id__xzy_cf__s_textContent___font_face_font_family__XZYCustom__src_url_data____base64_____font_weight_1999____not_i__not__class___icon____not__class___Icon____not__style___iconfont____font_family__XZYCustom__sans_serif_important_____document_head__document_documentElement__appendChild_s______

                    );

        uVar13 = _objc_retainAutoreleasedReturnValue();

        uVar12 = DAT_003e8e50;

        DAT_003e8e50 = uVar13;

        _objc_release(uVar12);

        DAT_003e94f1 = 1;

        _objc_release(pcVar1);

        _objc_release(uVar7);

        _objc_release(uVar11);

      }

      _objc_release(lVar5);

    }

    _objc_release(uVar4);

    _objc_release(auVar20._0_8_);

    _objc_release(uVar6);

  }

  if (DAT_003e8e48 != 0) {

    _pthread_setspecific(DAT_003e94b0,(void *)((long)&MACH_HEADER.magic + 1));

    uVar16 = 8;

    dVar19 = DAT_003e94b8;

    do {

      dVar18 = 1.0;

      if (1.0 <= dVar19 + (double)uVar16) {

        dVar18 = dVar19 + (double)uVar16;

      }

      uVar14 = (uint)(dVar18 + dVar18);

      if (dVar18 + dVar18 != (double)uVar14 || 0xc5 < uVar14 - 2) {

        uVar14 = 0xffffffff;

      }

      if ((-1 < (int)uVar14) && (*(long *)(&DAT_003e8e58 + (ulong)uVar14 * 8) == 0)) {

        FUN_002955a0(&_OBJC_CLASS___UIFont);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        if (lVar5 != 0) {

          _objc_retain(lVar5);

          uVar4 = *(undefined8 *)(&DAT_003e8e58 + (ulong)uVar14 * 8);

          *(long *)(&DAT_003e8e58 + (ulong)uVar14 * 8) = lVar5;

          _objc_release(uVar4);

        }

        _objc_release(lVar5);

        dVar19 = DAT_003e94b8;

      }

      uVar16 = uVar16 + 1;

    } while (uVar16 != 0x1f);

    _pthread_setspecific(DAT_003e94b0,(void *)0x0);

  }

  _objc_release(uVar3);

  return;

}




