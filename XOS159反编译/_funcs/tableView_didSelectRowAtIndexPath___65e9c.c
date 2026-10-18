// tableView:didSelectRowAtIndexPath: @0x65e9c


/* Function Stack Size: 0x20 bytes */



void _0x00bdda58::tableView_didSelectRowAtIndexPath_(ID param_1,SEL param_2,ID param_3,ID param_4)



{

  int iVar1;

  uint uVar2;

  undefined8 uVar3;

  ulong uVar4;

  ulong uVar5;

  cfstringStruct *pcVar6;

  cfstringStruct *pcVar7;

  long lVar8;

  undefined8 uVar9;

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

  cfstringStruct *pcVar14;

  cfstringStruct *pcVar15;

  cfstringStruct *pcVar16;

  undefined1 auVar17 [16];

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  FUN_00294460(param_3,extraout_x1,param_4,1);

  FUN_0029bf00(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b860();

  _objc_release(uVar3);

  iVar1 = FUN_00297a20(param_1);

  if (iVar1 == 0) {

    FUN_00293be0(param_1);

    lVar10 = _objc_retainAutoreleasedReturnValue();

    if (lVar10 == 0) goto LAB_00066338;

    FUN_002a63a0(param_1);

    lVar8 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    _objc_release(lVar10);

    if (lVar8 == 0) goto LAB_00066338;

    FUN_002a63a0(param_1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_00293be0(param_1);

    auVar17 = _objc_retainAutoreleasedReturnValue();

    FUN_00299540(uVar3,auVar17._8_8_,auVar17._0_8_);

    pcVar6 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    _objc_release(auVar17._0_8_);

    _objc_release(uVar3);

    if (pcVar6 != (cfstringStruct *)0x0) {

      uVar3 = _objc_opt_class(&_OBJC_CLASS___NSArray);

      uVar4 = _objc_opt_isKindOfClass(pcVar6,uVar3);

      if ((uVar4 & 1) != 0) {

        uVar4 = FUN_0029bae0(param_4);

        uVar5 = FUN_00293860(pcVar6);

        if (uVar4 < uVar5) {

          auVar17 = FUN_0029bae0(param_4);

          FUN_00299500(pcVar6,auVar17._8_8_,auVar17._0_8_);

          pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          goto LAB_00065f7c;

        }

      }

    }

  }

  else {

    uVar4 = FUN_0029bae0(param_4);

    FUN_0029bf40(param_1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    uVar5 = FUN_00293860();

    _objc_release(uVar3);

    if (uVar5 <= uVar4) goto LAB_00066338;

    FUN_0029bf40(param_1);

    pcVar6 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    auVar17 = FUN_0029bae0(param_4);

    FUN_00299500(pcVar6,auVar17._8_8_,auVar17._0_8_);

    pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

LAB_00065f7c:

    _objc_release(pcVar6);

    if (pcVar7 == (cfstringStruct *)0x0) goto LAB_00066338;

    pcVar6 = &::cf___;

    pcVar15 = &::cf___;

    uVar3 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

    uVar4 = _objc_opt_isKindOfClass(pcVar7,uVar3);

    if ((uVar4 & 1) == 0) {

      uVar3 = _objc_opt_class(&_OBJC_CLASS___NSString);

      uVar4 = _objc_opt_isKindOfClass(pcVar7,uVar3);

      if ((uVar4 & 1) != 0) {

        _objc_retain(pcVar7);

        _objc_retain(pcVar7);

        pcVar15 = pcVar7;

        pcVar6 = pcVar7;

      }

    }

    else {

      _objc_retain(pcVar7);

      FUN_00299540(pcVar7,extraout_x1_00,&cf_name);

      pcVar15 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      if (pcVar15 != (cfstringStruct *)0x0) {

        pcVar6 = pcVar15;

      }

      _objc_retain(pcVar6);

      _objc_release(pcVar15);

      FUN_00299540(pcVar7,extraout_x1_01,&cf_vid);

      auVar17 = _objc_retainAutoreleasedReturnValue();

      pcVar15 = auVar17._0_8_;

      if (pcVar15 == (cfstringStruct *)0x0) {

        FUN_00299540(pcVar7,auVar17._8_8_,&cf_id);

        pcVar14 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

        pcVar16 = pcVar6;

        if (pcVar14 != (cfstringStruct *)0x0) {

          pcVar16 = pcVar14;

        }

        _objc_retain(pcVar16);

        _objc_release(pcVar14);

      }

      else {

        _objc_retain(pcVar15);

        pcVar16 = pcVar15;

      }

      _objc_release(pcVar15);

      _objc_release(pcVar7);

      pcVar15 = pcVar6;

      pcVar6 = pcVar16;

    }

    auVar17 = FUN_00297fa0(pcVar6);

    if (auVar17._0_8_ != 0) {

      FUN_002a1200(param_1,auVar17._8_8_,pcVar6);

      FUN_002a1220(param_1,extraout_x1_02,pcVar15);

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      auVar17 = _objc_retainAutoreleasedReturnValue();

      uVar3 = auVar17._0_8_;

      FUN_002a0060(uVar3,auVar17._8_8_,pcVar6,&cf_ttsSelectedVoice);

      FUN_002a0060(uVar3,extraout_x1_03,pcVar15,&cf_ttsSelectedVoiceName);

      uVar9 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

      uVar4 = _objc_opt_isKindOfClass(pcVar7,uVar9);

      pcVar16 = pcVar7;

      if ((uVar4 & 1) == 0) {

        pcVar16 = (cfstringStruct *)0x0;

      }

      _objc_retain(pcVar16);

      FUN_00299540(pcVar16,extraout_x1_04,&cf_provider);

      auVar17 = _objc_retainAutoreleasedReturnValue();

      uVar9 = auVar17._0_8_;

      uVar4 = FUN_00297820(uVar9,auVar17._8_8_,&cf_kk);

      if ((uVar4 & 1) == 0) {

        FUN_00293be0(param_1);

        auVar17 = _objc_retainAutoreleasedReturnValue();

        uVar12 = auVar17._0_8_;

        iVar1 = FUN_00297820(uVar12,auVar17._8_8_,&cf_K);

        if (iVar1 != 0) {

          _objc_release(uVar12);

          goto LAB_00066284;

        }

        FUN_00293be0(param_1);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        FUN_002984e0();

        auVar17 = _objc_retainAutoreleasedReturnValue();

        uVar4 = FUN_00293580(auVar17._0_8_,auVar17._8_8_,&cf_kk);

        _objc_release(auVar17._0_8_);

        _objc_release(uVar11);

        _objc_release(uVar12);

        _objc_release(uVar9);

        uVar9 = extraout_x1_07;

        if ((uVar4 & 1) != 0) goto LAB_0006628c;

        FUN_00293be0(param_1);

        auVar17 = _objc_retainAutoreleasedReturnValue();

        uVar9 = auVar17._0_8_;

        iVar1 = FUN_00297820(uVar9,auVar17._8_8_,&::cf_F);

        if (iVar1 == 0) {

          FUN_00293be0(param_1);

          uVar12 = _objc_retainAutoreleasedReturnValue();

          FUN_002984e0();

          auVar17 = _objc_retainAutoreleasedReturnValue();

          uVar4 = FUN_00293580(auVar17._0_8_,auVar17._8_8_,&cf_finevoice);

          _objc_release(auVar17._0_8_);

          _objc_release(uVar12);

          _objc_release(uVar9);

          uVar9 = extraout_x1_09;

          if ((uVar4 & 1) != 0) goto LAB_0006643c;

          FUN_00293be0(param_1);

          auVar17 = _objc_retainAutoreleasedReturnValue();

          uVar9 = auVar17._0_8_;

          uVar4 = FUN_00297820(uVar9,auVar17._8_8_,&cf_ttr);

          if ((uVar4 & 1) == 0) {

            FUN_00293be0(param_1);

            auVar17 = _objc_retainAutoreleasedReturnValue();

            uVar12 = auVar17._0_8_;

            uVar4 = FUN_00297820(uVar12,auVar17._8_8_,&cf_r);

            if ((uVar4 & 1) != 0) {

LAB_000664e8:

              _objc_release(uVar12);

              goto LAB_000664f0;

            }

            FUN_00293be0(param_1);

            auVar17 = _objc_retainAutoreleasedReturnValue();

            uVar11 = auVar17._0_8_;

            uVar4 = FUN_00297820(uVar11,auVar17._8_8_,&cf_N_kCQr);

            if ((uVar4 & 1) != 0) {

LAB_000664e0:

              _objc_release(uVar11);

              goto LAB_000664e8;

            }

            FUN_00293be0(param_1);

            auVar17 = _objc_retainAutoreleasedReturnValue();

            uVar13 = auVar17._0_8_;

            uVar4 = FUN_00297820(uVar13,auVar17._8_8_,&cf_r);

            if ((uVar4 & 1) != 0) {

              _objc_release(uVar13);

              goto LAB_000664e0;

            }

            FUN_00293be0(param_1);

            auVar17 = _objc_retainAutoreleasedReturnValue();

            uVar2 = FUN_00297820(auVar17._0_8_,auVar17._8_8_,&cf__);

            _objc_release(auVar17._0_8_);

            _objc_release(uVar13);

            _objc_release(uVar11);

            _objc_release(uVar12);

            _objc_release(uVar9);

            uVar9 = extraout_x1_11;

            if ((uVar2 & 1) != 0) goto LAB_000664f8;

            pcVar14 = &cf_fish;

          }

          else {

LAB_000664f0:

            _objc_release(uVar9);

            uVar9 = extraout_x1_10;

LAB_000664f8:

            pcVar14 = &cf_server;

          }

        }

        else {

          _objc_release(uVar9);

          uVar9 = extraout_x1_08;

LAB_0006643c:

          pcVar14 = &cf_fv;

        }

      }

      else {

LAB_00066284:

        _objc_release(uVar9);

        uVar9 = extraout_x1_05;

LAB_0006628c:

        pcVar14 = &cf_kk;

      }

      FUN_002a0060(uVar3,uVar9,pcVar14,&cf_ttsSelectedVoiceProvider);

      FUN_002a0060(uVar3,extraout_x1_06,pcVar6,&cf_ttsSelectedVoiceProviderVoice);

      FUN_002a4a40(uVar3);

      FUN_0029b140(param_3);

      FUN_00299820(param_1);

      lVar10 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar10 != 0) {

        FUN_00299820(param_1);

        lVar10 = _objc_retainAutoreleasedReturnValue();

        (**(code **)(lVar10 + 0x10))(lVar10,pcVar6,pcVar15);

        _objc_release(lVar10);

      }

      _objc_release(pcVar16);

      _objc_release(uVar3);

    }

    _objc_release(pcVar6);

    _objc_release(pcVar15);

    pcVar6 = pcVar7;

  }

  _objc_release(pcVar6);

LAB_00066338:

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




