// documentPicker:didPickDocumentsAtURLs: @0x618c0


/* Function Stack Size: 0x20 bytes */



void _0x00bdda58::documentPicker_didPickDocumentsAtURLs_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  int iVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  ulong uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  cfstringStruct *pcVar9;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  cfstringStruct *pcVar10;

  undefined8 uVar11;

  undefined1 auVar12 [16];

  undefined1 auVar13 [16];

  

  FUN_00295440(param_4);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 == 0) goto LAB_00061ba8;

  iVar1 = FUN_002a4120(lVar2);

  FUN_00294040(&_OBJC_CLASS___NSData,extraout_x1,lVar2);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  if (iVar1 != 0) {

    FUN_002a42c0(lVar2);

  }

  auVar12 = FUN_00297fa0(uVar3);

  if (auVar12._0_8_ == 0) {

    uVar4 = 0;

  }

  else {

    FUN_00290ae0(&_OBJC_CLASS___NSJSONSerialization,auVar12._8_8_,uVar3,0,0);

    uVar4 = _objc_retainAutoreleasedReturnValue();

  }

  uVar5 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

  uVar6 = _objc_opt_isKindOfClass(uVar4,uVar5);

  if ((uVar6 & 1) == 0) {

    uVar5 = _objc_opt_class(&_OBJC_CLASS___NSArray);

    uVar6 = _objc_opt_isKindOfClass(uVar4,uVar5);

    if ((uVar6 & 1) != 0) goto LAB_000619a0;

    FUN_0002a854(0x4008000000000000,&cf__eQ1Y_,&cf_bgHev,2);

  }

  else {

LAB_000619a0:

    _NSSearchPathForDirectoriesInDomains(5,1,1);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_00295440();

    uVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar5);

    FUN_002a4460(uVar7,extraout_x1_00,&cf_XOS);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_00294240(&_OBJC_CLASS___NSFileManager);

    auVar12 = _objc_retainAutoreleasedReturnValue();

    FUN_00293a60(auVar12._0_8_,auVar12._8_8_,uVar5,1,0,0);

    _objc_release(auVar12._0_8_);

    FUN_002a4460(uVar5,extraout_x1_01,&cf_ys_json);

    auVar12 = _objc_retainAutoreleasedReturnValue();

    uVar6 = FUN_002a6580(uVar3,auVar12._8_8_,auVar12._0_8_,1);

    if ((uVar6 & 1) == 0) {

      uVar11 = 0x4008000000000000;

      pcVar10 = &cf_elOX__g0WreN;

      uVar8 = 2;

      pcVar9 = &cf__eQ1Y_;

    }

    else {

      FUN_002a63a0(param_1);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b240();

      _objc_release(uVar8);

      FUN_00292a40(param_1);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b240();

      _objc_release(uVar8);

      FUN_0029d920(param_1,extraout_x1_02,0);

      FUN_002a4dc0(param_1);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b140();

      _objc_release(uVar8);

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      auVar13 = _objc_retainAutoreleasedReturnValue();

      FUN_0029d080(auVar13._0_8_,auVar13._8_8_,1,&cf_ttsUseLocalVoiceList);

      _objc_release(auVar13._0_8_);

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4a40();

      _objc_release(uVar8);

      uVar6 = FUN_002982c0(param_1);

      uVar11 = 0x4004000000000000;

      if ((uVar6 & 1) == 0) {

        FUN_00298120(param_1);

      }

      pcVar10 = &cf___O_u_g0W;

      uVar8 = 1;

      pcVar9 = &cf__eQbR;

    }

    FUN_0002a854(uVar11,pcVar9,pcVar10,uVar8);

    _objc_release(auVar12._0_8_);

    _objc_release(uVar5);

    _objc_release(uVar7);

  }

  _objc_release(uVar4);

  _objc_release(uVar3);

LAB_00061ba8:

  _objc_release(lVar2);

  return;

}




