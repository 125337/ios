// FUN_00068114 @0x68114


void FUN_00068114(long param_1,undefined8 param_2)



{

  bool bVar1;

  bool bVar2;

  int iVar3;

  ulong uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  long lVar7;

  long lVar8;

  cfstringStruct *pcVar9;

  cfstringStruct *pcVar10;

  void *pvVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  undefined8 uVar15;

  undefined8 uVar16;

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

  undefined8 extraout_x1_15;

  undefined8 extraout_x1_16;

  undefined8 extraout_x1_17;

  undefined8 uVar17;

  undefined8 uVar18;

  undefined8 uVar19;

  undefined8 uVar20;

  undefined8 uVar21;

  undefined1 auVar22 [16];

  undefined1 auVar23 [16];

  undefined1 auVar24 [16];

  undefined1 auVar25 [16];

  cfstringStruct *local_168;

  undefined *local_138;

  undefined8 local_130;

  code *local_128;

  undefined *puStack_120;

  undefined8 local_118;

  undefined1 auStack_110 [8];

  undefined *local_108;

  undefined8 local_100;

  code *local_f8;

  undefined *puStack_f0;

  undefined8 local_e8;

  undefined8 local_e0;

  undefined8 local_d8;

  undefined8 local_d0;

  undefined8 local_c8;

  undefined *local_c0;

  undefined8 local_b8;

  code *local_b0;

  undefined *puStack_a8;

  undefined8 local_a0;

  undefined8 uStack_98;

  byte local_90 [16];

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_2);

  FUN_0029a8a0(*(undefined8 *)(param_1 + 0x20));

  auVar22 = _objc_retainAutoreleasedReturnValue();

  uVar4 = FUN_00297820(auVar22._0_8_,auVar22._8_8_,*(undefined8 *)(param_1 + 0x28));

  _objc_release(auVar22._0_8_);

  if ((uVar4 & 1) == 0) goto LAB_00068cc4;

  FUN_000690c4(&cf_ttsCustomFishToken);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_000690c4(&cf_ttsCustomFvToken);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  local_c0 = PTR___NSConcreteStackBlock_003886f0;

  local_b8 = 0xc2000000;

  local_b0 = FUN_000691b4;

  puStack_a8 = &DAT_00389f00;

  uVar21 = *(undefined8 *)(param_1 + 0x28);

  uVar17 = *(undefined8 *)(param_1 + 0x20);

  _objc_retain(*(undefined8 *)(param_1 + 0x28));

  local_a0 = uVar17;

  uStack_98 = uVar21;

  auVar22 = _objc_retainBlock(&local_c0);

  uVar17 = auVar22._8_8_;

  uVar21 = auVar22._0_8_;

  if (*(char *)(param_1 + 0x40) == '\x01') {

    iVar3 = FUN_00297820(*(undefined8 *)(param_1 + 0x30),uVar17,&cf_kk);

    if (iVar3 == 0) {

      uVar17 = extraout_x1;

      if ((*(char *)(param_1 + 0x40) == '\x01') &&

         (iVar3 = FUN_00297820(*(undefined8 *)(param_1 + 0x30),extraout_x1,&cf_fish),

         uVar17 = extraout_x1_00, iVar3 != 0)) {

        auVar22 = FUN_00297fa0(uVar5);

        uVar17 = auVar22._8_8_;

        if (auVar22._0_8_ != 0) {

          FUN_00069b88(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28),uVar5,uVar21)

          ;

          goto LAB_00068ca4;

        }

      }

      goto LAB_00068284;

    }

    FUN_00069598(0x3ff0000000000000,0x3ff0000000000000,*(undefined8 *)(param_1 + 0x38),

                 *(undefined8 *)(param_1 + 0x28),uVar21);

  }

  else {

LAB_00068284:

    if ((*(char *)(param_1 + 0x40) == '\x01') &&

       (iVar3 = FUN_00297820(*(undefined8 *)(param_1 + 0x30),uVar17,&cf_fv), uVar17 = extraout_x1_01

       , iVar3 != 0)) {

      auVar22 = FUN_00297fa0(uVar6);

      uVar17 = auVar22._8_8_;

      if (auVar22._0_8_ != 0) {

        FUN_0006a048(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x38),

                     *(undefined8 *)(param_1 + 0x28),uVar6,param_2,uVar21);

        goto LAB_00068ca4;

      }

    }

    iVar3 = FUN_00297820(*(undefined8 *)(param_1 + 0x30),uVar17,&cf_fish);

    if (iVar3 == 0) {

      bVar1 = false;

      uVar17 = extraout_x1_02;

    }

    else {

      auVar22 = FUN_00297fa0(uVar5);

      uVar17 = auVar22._8_8_;

      bVar1 = auVar22._0_8_ == 0;

    }

    iVar3 = FUN_00297820(*(undefined8 *)(param_1 + 0x30),uVar17,&cf_fv);

    if (iVar3 == 0) {

      bVar2 = false;

    }

    else {

      lVar7 = FUN_00297fa0(uVar6);

      bVar2 = lVar7 == 0;

    }

    if ((*(char *)(param_1 + 0x40) == '\x01') && (bVar1 || bVar2)) {

      uVar17 = *(undefined8 *)(param_1 + 0x30);

      local_108 = PTR___NSConcreteStackBlock_003886f0;

      local_100 = 0xc2000000;

      local_f8 = FUN_0006ad90;

      puStack_f0 = &DAT_0038a030;

      _objc_retain(uVar21);

      uVar18 = *(undefined8 *)(param_1 + 0x30);

      local_c8 = uVar21;

      _objc_retain(uVar18);

      uVar19 = *(undefined8 *)(param_1 + 0x38);

      local_e8 = uVar18;

      _objc_retain(uVar19);

      uVar18 = *(undefined8 *)(param_1 + 0x28);

      local_e0 = uVar19;

      _objc_retain(uVar18);

      local_d8 = uVar18;

      _objc_retain(param_2);

      local_d0 = param_2;

      FUN_0006a928(uVar17,&local_108);

      _objc_release(local_d0);

      _objc_release(local_d8);

      _objc_release(local_e0);

      _objc_release(local_e8);

      uVar17 = local_c8;

    }

    else {

      FUN_002940e0(&_OBJC_CLASS___NSDate);

      uVar17 = _objc_retainAutoreleasedReturnValue();

      FUN_002a51c0();

      _objc_release(uVar17);

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_03,&cf___0f);

      auVar22 = _objc_retainAutoreleasedReturnValue();

      uVar17 = auVar22._0_8_;

      FUN_00296240(&objc::class_t::_0x016d26c7,auVar22._8_8_,uVar17,&cf_xiazhiyanzuibang);

      uVar18 = _objc_retainAutoreleasedReturnValue();

      _objc_getClass("MMServiceCenter");

      FUN_00294200();

      uVar19 = _objc_retainAutoreleasedReturnValue();

      auVar22 = _objc_getClass("CContactMgr");

      FUN_00295b60(uVar19,auVar22._8_8_,auVar22._0_8_);

      lVar7 = _objc_retainAutoreleasedReturnValue();

      _objc_release(uVar19);

      if (lVar7 == 0) {

        local_168 = &cf___;

      }

      else {

        FUN_00299c80(lVar7,extraout_x1_04,"getSelfContact");

        auVar22 = _objc_retainAutoreleasedReturnValue();

        lVar8 = auVar22._0_8_;

        local_168 = &cf___;

        if (lVar8 != 0) {

          FUN_002a6080(lVar8,auVar22._8_8_,&cf_m_nsUsrName);

          pcVar9 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          local_168 = &cf___;

          if (pcVar9 != (cfstringStruct *)0x0) {

            local_168 = pcVar9;

          }

          _objc_retain();

          _objc_release(pcVar9);

        }

        _objc_release(lVar8);

      }

      _objc_release(lVar7);

      FUN_002914e0(&objc::class_t::_0x016d26c7,extraout_x1_05,local_168,&cf_xiazhiyanzuibang);

      pcVar10 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      pcVar9 = &cf___;

      if (pcVar10 != (cfstringStruct *)0x0) {

        pcVar9 = pcVar10;

      }

      _objc_retain();

      _objc_release(pcVar10);

      FUN_00293fa0(*(undefined8 *)(param_1 + 0x38),extraout_x1_06,4);

      auVar22 = _objc_retainAutoreleasedReturnValue();

      FUN_00292140(auVar22._0_8_,auVar22._8_8_,0);

      uVar19 = _objc_retainAutoreleasedReturnValue();

      pvVar11 = _malloc(0x1c);

      lVar7 = 0;

      do {

        *(byte *)((long)pvVar11 + lVar7) = (&DAT_003081a8)[lVar7] ^ 0xf6;

        lVar7 = lVar7 + 1;

      } while (lVar7 != 0x1b);

      *(undefined1 *)((long)pvVar11 + 0x1b) = 0;

      FUN_002a46c0(&_OBJC_CLASS___NSString);

      uVar12 = _objc_retainAutoreleasedReturnValue();

      _free(pvVar11);

      local_90[0] = 0x9f;

      local_90[1] = 0x98;

      local_90[2] = 0x92;

      local_90[3] = 0x93;

      local_90[4] = 0x8e;

      local_90[5] = 0xd8;

      local_90[6] = 0x86;

      local_90[7] = 0x9e;

      local_90[8] = 0x86;

      pvVar11 = _malloc(10);

      lVar7 = 0;

      do {

        *(byte *)((long)pvVar11 + lVar7) = local_90[lVar7] ^ 0xf6;

        lVar7 = lVar7 + 1;

      } while (lVar7 != 9);

      *(undefined1 *)((long)pvVar11 + 9) = 0;

      FUN_002a46c0(&_OBJC_CLASS___NSString);

      uVar13 = _objc_retainAutoreleasedReturnValue();

      _free(pvVar11);

      FUN_002a44a0(uVar12,extraout_x1_07,uVar13);

      uVar14 = _objc_retainAutoreleasedReturnValue();

      _objc_release(uVar13);

      _objc_release(uVar12);

      FUN_002a4680(&_OBJC_CLASS___NSMutableString,extraout_x1_08,

                   &cf____timestamp____signature____vid____speed_1_0_volume_1_0);

      uVar13 = _objc_retainAutoreleasedReturnValue();

      uVar12 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

      auVar23 = _objc_opt_isKindOfClass(param_2,uVar12);

      uVar12 = auVar23._8_8_;

      if ((auVar23._0_8_ & 1) != 0) {

        FUN_00299540(param_2,uVar12,&cf_emotion);

        auVar23 = _objc_retainAutoreleasedReturnValue();

        uVar12 = auVar23._0_8_;

        FUN_00299540(param_2,auVar23._8_8_,&cf_emotionMode);

        auVar23 = _objc_retainAutoreleasedReturnValue();

        FUN_00299540(param_2,auVar23._8_8_,&cf_markup);

        auVar24 = _objc_retainAutoreleasedReturnValue();

        uVar16 = auVar24._0_8_;

        FUN_00299540(param_2,auVar24._8_8_,&cf_effect);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        lVar7 = FUN_00297fa0(uVar12);

        if (lVar7 != 0) {

          FUN_00290c00(&_OBJC_CLASS___NSCharacterSet);

          auVar24 = _objc_retainAutoreleasedReturnValue();

          FUN_002a4420(uVar12,auVar24._8_8_,auVar24._0_8_);

          auVar25 = _objc_retainAutoreleasedReturnValue();

          FUN_002919a0(uVar13,auVar25._8_8_,&cf__fvemotion____fvemotionmode___);

          _objc_release(auVar25._0_8_);

          _objc_release(auVar24._0_8_);

        }

        lVar7 = FUN_00297fa0(uVar16);

        if (lVar7 != 0) {

          FUN_00290c00(&_OBJC_CLASS___NSCharacterSet);

          auVar24 = _objc_retainAutoreleasedReturnValue();

          FUN_002a4420(uVar16,auVar24._8_8_,auVar24._0_8_);

          auVar25 = _objc_retainAutoreleasedReturnValue();

          FUN_002919a0(uVar13,auVar25._8_8_,&cf__fvmarkup___);

          _objc_release(auVar25._0_8_);

          _objc_release(auVar24._0_8_);

        }

        lVar7 = FUN_00297fa0(uVar15);

        if (lVar7 != 0) {

          FUN_00290c00(&_OBJC_CLASS___NSCharacterSet);

          auVar24 = _objc_retainAutoreleasedReturnValue();

          FUN_002a4420(uVar15,auVar24._8_8_,auVar24._0_8_);

          auVar25 = _objc_retainAutoreleasedReturnValue();

          FUN_002919a0(uVar13,auVar25._8_8_,&cf__fveffect___);

          _objc_release(auVar25._0_8_);

          _objc_release(auVar24._0_8_);

        }

        _objc_release(uVar15);

        _objc_release(uVar16);

        _objc_release(auVar23._0_8_);

        _objc_release(uVar12);

        uVar12 = extraout_x1_09;

      }

      iVar3 = FUN_00297820(*(undefined8 *)(param_1 + 0x30),uVar12,&cf_fish);

      if (iVar3 != 0) {

        FUN_0006ae98(&cf_ttsFishEmotion,&PTR__OBJC_CLASS___NSConstantDictionary_003c05b8);

        uVar16 = _objc_retainAutoreleasedReturnValue();

        FUN_0006ae98(&cf_ttsFishEffect,&PTR__OBJC_CLASS___NSConstantDictionary_003c05e0);

        auVar23 = _objc_retainAutoreleasedReturnValue();

        uVar15 = auVar23._0_8_;

        auVar23 = FUN_00297820(uVar16,auVar23._8_8_,&cf_none);

        uVar12 = auVar23._8_8_;

        if ((auVar23._0_8_ & 1) == 0) {

          FUN_00290c00(&_OBJC_CLASS___NSCharacterSet);

          auVar23 = _objc_retainAutoreleasedReturnValue();

          FUN_002a4420(uVar16,auVar23._8_8_,auVar23._0_8_);

          auVar24 = _objc_retainAutoreleasedReturnValue();

          FUN_002919a0(uVar13,auVar24._8_8_,&cf__fishemotion___);

          _objc_release(auVar24._0_8_);

          _objc_release(auVar23._0_8_);

          uVar12 = extraout_x1_10;

        }

        uVar4 = FUN_00297820(uVar15,uVar12,&cf_none);

        if ((uVar4 & 1) == 0) {

          FUN_00290c00(&_OBJC_CLASS___NSCharacterSet);

          auVar23 = _objc_retainAutoreleasedReturnValue();

          FUN_002a4420(uVar15,auVar23._8_8_,auVar23._0_8_);

          auVar24 = _objc_retainAutoreleasedReturnValue();

          FUN_002919a0(uVar13,auVar24._8_8_,&cf__fisheffect___);

          _objc_release(auVar24._0_8_);

          _objc_release(auVar23._0_8_);

        }

        _objc_release(uVar15);

        _objc_release(uVar16);

      }

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      auVar23 = _objc_retainAutoreleasedReturnValue();

      uVar16 = auVar23._0_8_;

      FUN_002a45e0(uVar16,auVar23._8_8_,&cf_ttsCustomFishToken);

      auVar23 = _objc_retainAutoreleasedReturnValue();

      lVar7 = auVar23._0_8_;

      FUN_002a45e0(uVar16,auVar23._8_8_,&cf_ttsCustomFvToken);

      auVar23 = _objc_retainAutoreleasedReturnValue();

      uVar12 = auVar23._8_8_;

      lVar8 = auVar23._0_8_;

      if (lVar7 != 0) {

        auVar23 = FUN_00297fa0(lVar7);

        uVar12 = auVar23._8_8_;

        if (auVar23._0_8_ != 0) {

          FUN_00290c00(&_OBJC_CLASS___NSCharacterSet);

          auVar23 = _objc_retainAutoreleasedReturnValue();

          FUN_002a4420(lVar7,auVar23._8_8_,auVar23._0_8_);

          uVar12 = _objc_retainAutoreleasedReturnValue();

          _objc_release(auVar23._0_8_);

          FUN_002919a0(uVar13,extraout_x1_11,&cf__fishtoken___);

          _objc_release(uVar12);

          uVar12 = extraout_x1_12;

        }

      }

      if (lVar8 != 0) {

        auVar23 = FUN_00297fa0(lVar8);

        uVar12 = auVar23._8_8_;

        if (auVar23._0_8_ != 0) {

          FUN_00290c00(&_OBJC_CLASS___NSCharacterSet);

          auVar23 = _objc_retainAutoreleasedReturnValue();

          FUN_002a4420(lVar8,auVar23._8_8_,auVar23._0_8_);

          uVar12 = _objc_retainAutoreleasedReturnValue();

          _objc_release(auVar23._0_8_);

          FUN_002919a0(uVar13,extraout_x1_13,&cf__fvtoken___);

          _objc_release(uVar12);

          uVar12 = extraout_x1_14;

        }

      }

      FUN_00290c20(&_OBJC_CLASS___NSURL,uVar12,uVar13);

      auVar23 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b720(&_OBJC_CLASS___NSMutableURLRequest,auVar23._8_8_,auVar23._0_8_);

      auVar24 = _objc_retainAutoreleasedReturnValue();

      uVar12 = auVar24._0_8_;

      FUN_0029e7e0(uVar12,auVar24._8_8_,&cf_GET);

      FUN_002a1ea0(0x403e000000000000,uVar12);

      FUN_002a2480(uVar12,extraout_x1_15,pcVar9,&cf_Xlb);

      FUN_002a2480(uVar12,extraout_x1_16,uVar19,&cf_Text);

      if (lVar7 != 0) {

        auVar24 = FUN_00297fa0(lVar7);

        if (auVar24._0_8_ != 0) {

          FUN_002a2480(uVar12,auVar24._8_8_,lVar7,&cf_Fishtoken);

        }

      }

      if (lVar8 != 0) {

        auVar24 = FUN_00297fa0(lVar8);

        if (auVar24._0_8_ != 0) {

          FUN_002a2480(uVar12,auVar24._8_8_,lVar8,&cf_Fvtoken);

        }

      }

      _objc_initWeak(local_90,*(undefined8 *)(param_1 + 0x20));

      FUN_002a2ec0(&_OBJC_CLASS___NSURLSession);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      local_138 = PTR___NSConcreteStackBlock_003886f0;

      local_130 = 0xc2000000;

      local_128 = FUN_0006afcc;

      puStack_120 = &DAT_0038a090;

      _objc_copyWeak(auStack_110,local_90);

      uVar20 = *(undefined8 *)(param_1 + 0x28);

      _objc_retain(uVar20);

      local_118 = uVar20;

      FUN_00293f60(uVar15,extraout_x1_17,uVar12,&local_138);

      uVar20 = _objc_retainAutoreleasedReturnValue();

      _objc_release(uVar15);

      FUN_0029b980(uVar20);

      _objc_release(uVar20);

      _objc_release(local_118);

      _objc_destroyWeak(auStack_110);

      _objc_destroyWeak(local_90);

      _objc_release(uVar12);

      _objc_release(auVar23._0_8_);

      _objc_release(lVar8);

      _objc_release(lVar7);

      _objc_release(uVar16);

      _objc_release(uVar13);

      _objc_release(uVar14);

      _objc_release(uVar19);

      _objc_release(auVar22._0_8_);

      _objc_release(pcVar9);

      _objc_release(local_168);

      _objc_release(uVar18);

    }

    _objc_release(uVar17);

  }

LAB_00068ca4:

  _objc_release(uVar21);

  _objc_release(uStack_98);

  _objc_release(uVar6);

  _objc_release(uVar5);

LAB_00068cc4:

  _objc_release(param_2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




