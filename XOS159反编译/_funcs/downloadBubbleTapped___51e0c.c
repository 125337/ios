// downloadBubbleTapped: @0x51e0c


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::downloadBubbleTapped_(ID param_1,SEL param_2,ID param_3)



{

  cfstringStruct *pcVar1;

  uint uVar2;

  uint uVar3;

  int iVar4;

  long lVar5;

  long lVar6;

  undefined8 uVar7;

  cfstringStruct *pcVar8;

  long lVar9;

  cfstringStruct *pcVar10;

  cfstringStruct *pcVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  undefined8 uVar15;

  undefined8 uVar16;

  long lVar17;

  cfstringStruct *pcVar18;

  cfstringStruct *pcVar19;

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

  undefined8 uVar20;

  undefined8 extraout_x1_11;

  undefined8 extraout_x1_12;

  undefined1 auVar21 [16];

  undefined1 auVar22 [16];

  undefined1 auVar23 [16];

  

  _objc_retain(param_3);

  _objc_getAssociatedObject(param_3,"bubbleData");

  lVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_3,"downloadVC");

  lVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_3,"hasUpdate");

  uVar7 = _objc_retainAutoreleasedReturnValue();

  uVar2 = FUN_002924e0();

  if ((lVar5 == 0) || (lVar6 == 0)) goto LAB_00052384;

  FUN_00299540(lVar5,extraout_x1,&cf_bubble_name);

  auVar21 = _objc_retainAutoreleasedReturnValue();

  pcVar8 = auVar21._0_8_;

  FUN_00299540(lVar5,auVar21._8_8_,&cf_download_url);

  auVar21 = _objc_retainAutoreleasedReturnValue();

  lVar9 = auVar21._0_8_;

  FUN_00299540(lVar5,auVar21._8_8_,&cf_bubble_uuid);

  pcVar10 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar1 = &::cf___;

  if (pcVar10 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar10;

  }

  _objc_retain();

  _objc_release(pcVar10);

  FUN_00299540(lVar5,extraout_x1_00,&cf_version);

  pcVar11 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar10 = &::cf___;

  if (pcVar11 != (cfstringStruct *)0x0) {

    pcVar10 = pcVar11;

  }

  _objc_retain();

  _objc_release(pcVar11);

  FUN_00299540(lVar5,extraout_x1_01,&cf_is_card);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  uVar13 = FUN_002924e0();

  _objc_release(uVar12);

  _NSSearchPathForDirectoriesInDomains(9,1,1);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  auVar21 = _objc_retainAutoreleasedReturnValue();

  pcVar11 = &cf_CoverRes_Cards;

  if ((int)uVar13 == 0) {

    pcVar11 = &cf_CoverRes_Bubbles;

  }

  FUN_002a4460(auVar21._0_8_,auVar21._8_8_,pcVar11);

  auVar22 = _objc_retainAutoreleasedReturnValue();

  pcVar11 = pcVar8;

  if (pcVar8 == (cfstringStruct *)0x0) {

    pcVar11 = &::cf___;

  }

  FUN_002a4460(auVar22._0_8_,auVar22._8_8_,pcVar11);

  auVar23 = _objc_retainAutoreleasedReturnValue();

  uVar14 = auVar23._0_8_;

  FUN_002a4460(uVar14,auVar23._8_8_,&cf_theme_xos);

  uVar15 = _objc_retainAutoreleasedReturnValue();

  auVar23 = FUN_00297fa0(pcVar8);

  uVar16 = auVar23._8_8_;

  if (auVar23._0_8_ == 0) {

LAB_0005212c:

    if ((pcVar8 != (cfstringStruct *)0x0) && (lVar9 != 0)) {

      FUN_0029e0c0(param_3,uVar16,0);

      FUN_002a1f80(param_3,extraout_x1_04,&cf_N__N_,0);

      FUN_00294880(param_1,extraout_x1_05,lVar9,pcVar8,param_3,uVar13);

    }

  }

  else {

    FUN_00294240(&_OBJC_CLASS___NSFileManager);

    auVar23 = _objc_retainAutoreleasedReturnValue();

    uVar3 = FUN_00295160(auVar23._0_8_,auVar23._8_8_,uVar15);

    _objc_release(auVar23._0_8_);

    if ((uVar2 & uVar3) == 1) {

      FUN_002a4460(uVar14,extraout_x1_02,&cf_config_json);

      uVar16 = _objc_retainAutoreleasedReturnValue();

      FUN_00294240(&_OBJC_CLASS___NSFileManager);

      auVar23 = _objc_retainAutoreleasedReturnValue();

      iVar4 = FUN_00295160(auVar23._0_8_,auVar23._8_8_,uVar16);

      _objc_release(auVar23._0_8_);

      if (iVar4 == 0) {

        pcVar11 = &::cf___;

        uVar20 = extraout_x1_03;

      }

      else {

        FUN_00294020(&_OBJC_CLASS___NSData,extraout_x1_03,uVar16);

        auVar23 = _objc_retainAutoreleasedReturnValue();

        lVar17 = auVar23._0_8_;

        pcVar11 = &::cf___;

        if (lVar17 != 0) {

          FUN_00290ae0(&_OBJC_CLASS___NSJSONSerialization,auVar23._8_8_,lVar17,0,0);

          auVar23 = _objc_retainAutoreleasedReturnValue();

          uVar20 = auVar23._0_8_;

          FUN_00299540(uVar20,auVar23._8_8_,&cf_version);

          auVar23 = _objc_retainAutoreleasedReturnValue();

          pcVar18 = auVar23._0_8_;

          if (pcVar18 == (cfstringStruct *)0x0) {

            FUN_00299540(uVar20,auVar23._8_8_,&cf_Hr_gS);

            pcVar19 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

            if (pcVar19 != (cfstringStruct *)0x0) {

              pcVar11 = pcVar19;

            }

            _objc_retain(pcVar11);

            _objc_release(pcVar19);

          }

          else {

            _objc_retain(pcVar18);

            pcVar11 = pcVar18;

          }

          _objc_release(pcVar18);

          _objc_release(uVar20);

        }

        _objc_release(lVar17);

        uVar20 = extraout_x1_10;

      }

      FUN_0029e0c0(param_3,uVar20,0);

      FUN_002a1f80(param_3,extraout_x1_11,&cf_fe_N_,0);

      FUN_0029b6e0(param_1,extraout_x1_12,pcVar1,pcVar11,pcVar10,pcVar8,lVar9,uVar14,param_3,lVar6,

                   (char)uVar13);

LAB_0005232c:

      _objc_release(uVar16);

      _objc_release(pcVar11);

    }

    else {

      uVar16 = extraout_x1_02;

      if (uVar3 == 0) goto LAB_0005212c;

      if ((int)uVar13 == 0) {

        FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

        auVar23 = _objc_retainAutoreleasedReturnValue();

        pcVar11 = auVar23._0_8_;

        FUN_002a0060(pcVar11,auVar23._8_8_,pcVar8,&cf_mesMsgMergeSelectedBubble);

        FUN_002a4a40(pcVar11);

        FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_06,&cf__bll_);

        auVar23 = _objc_retainAutoreleasedReturnValue();

        FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar23._8_8_,&cf_n_bR,auVar23._0_8_,1);

        uVar16 = _objc_retainAutoreleasedReturnValue();

        _objc_release(auVar23._0_8_);

        FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_07,&cf_Sm,1,0);

        auVar23 = _objc_retainAutoreleasedReturnValue();

        FUN_00290fe0(uVar16,auVar23._8_8_,auVar23._0_8_);

        _objc_release(auVar23._0_8_);

        FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_08,&cf_zsS_T,2,

                     &PTR___NSConcreteGlobalBlock_00389ae0);

        auVar23 = _objc_retainAutoreleasedReturnValue();

        FUN_00290fe0(uVar16,auVar23._8_8_,auVar23._0_8_);

        _objc_release(auVar23._0_8_);

        FUN_0029a500(lVar6,extraout_x1_09,uVar16,1,0);

        goto LAB_0005232c;

      }

      FUN_00291a80(param_1,extraout_x1_02,pcVar8,uVar14,lVar6);

    }

  }

  _objc_release(uVar15);

  _objc_release(uVar14);

  _objc_release(auVar22._0_8_);

  _objc_release(auVar21._0_8_);

  _objc_release(uVar12);

  _objc_release(pcVar10);

  _objc_release(pcVar1);

  _objc_release(lVar9);

  _objc_release(pcVar8);

LAB_00052384:

  _objc_release(uVar7);

  _objc_release(lVar6);

  _objc_release(lVar5);

  _objc_release(param_3);

  return;

}




