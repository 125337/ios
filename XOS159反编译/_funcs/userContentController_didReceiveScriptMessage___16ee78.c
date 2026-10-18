// userContentController:didReceiveScriptMessage: @0x16ee78


/* Function Stack Size: 0x20 bytes */



void CadisHTMLLyricsMessageHandler::userContentController_didReceiveScriptMessage_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  int iVar1;

  ulong uVar2;

  cfstringStruct *pcVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  cfstringStruct *pcVar6;

  cfstringStruct *pcVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar8 [16];

  

  _objc_retain(param_4);

  FUN_00299040(param_4);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  uVar2 = FUN_00297820(auVar8._0_8_,auVar8._8_8_,&cf_cadisLyrics);

  _objc_release(auVar8._0_8_);

  if (((uVar2 & 1) == 0) || (iVar1 = FUN_001c4780(), iVar1 == 0)) goto LAB_0016f0a8;

  FUN_00292460(param_4);

  pcVar3 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  uVar4 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

  uVar2 = _objc_opt_isKindOfClass(pcVar3,uVar4);

  if ((uVar2 & 1) == 0) {

    uVar4 = _objc_opt_class(&_OBJC_CLASS___NSString);

    auVar8 = _objc_opt_isKindOfClass(pcVar3,uVar4);

    uVar4 = auVar8._8_8_;

    if ((auVar8._0_8_ & 1) == 0) {

      pcVar6 = (cfstringStruct *)0x0;

      uVar5 = 0;

    }

    else {

      _objc_retain(pcVar3);

      uVar5 = 0;

      uVar4 = extraout_x1_00;

      pcVar6 = pcVar3;

    }

  }

  else {

    _objc_retain(pcVar3);

    FUN_00299540(pcVar3,extraout_x1,&cf_text);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    pcVar7 = auVar8._0_8_;

    FUN_00299540(pcVar3,auVar8._8_8_,&cf_type);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    uVar5 = _objc_opt_class(&_OBJC_CLASS___NSString);

    uVar2 = _objc_opt_isKindOfClass(pcVar7,uVar5);

    if ((uVar2 & 1) == 0) {

      uVar5 = _objc_opt_class(&_OBJC_CLASS___NSNumber);

      uVar2 = _objc_opt_isKindOfClass(pcVar7,uVar5);

      if ((uVar2 & 1) == 0) {

        pcVar6 = (cfstringStruct *)0x0;

      }

      else {

        FUN_002a4620(pcVar7);

        pcVar6 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      }

    }

    else {

      _objc_retain(pcVar7);

      pcVar6 = pcVar7;

    }

    uVar5 = _objc_opt_class(&_OBJC_CLASS___NSString);

    uVar2 = _objc_opt_isKindOfClass(uVar4,uVar5);

    if ((uVar2 & 1) == 0) {

      uVar5 = 0;

    }

    else {

      _objc_retain(uVar4);

      uVar5 = uVar4;

    }

    _objc_release(uVar4);

    _objc_release(pcVar7);

    _objc_release(pcVar3);

    uVar4 = extraout_x1_01;

  }

  auVar8 = FUN_00297820(uVar5,uVar4,&cf_clear);

  if ((auVar8._0_8_ & 1) == 0) {

    auVar8 = FUN_00297820(uVar5,auVar8._8_8_,&cf_stop);

    if ((auVar8._0_8_ & 1) != 0) goto LAB_0016f084;

    uVar2 = FUN_00297820(uVar5,auVar8._8_8_,&cf_pause);

    pcVar7 = &::cf___;

    if (((uVar2 & 1) == 0) && (pcVar6 != (cfstringStruct *)0x0)) {

      pcVar7 = pcVar6;

    }

  }

  else {

LAB_0016f084:

    pcVar7 = &::cf___;

  }

  FUN_001c3d54(pcVar7);

  _objc_release(uVar5);

  _objc_release(pcVar6);

  _objc_release(pcVar3);

LAB_0016f0a8:

  _objc_release(param_4);

  return;

}




