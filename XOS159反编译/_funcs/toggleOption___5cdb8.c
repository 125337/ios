// toggleOption: @0x5cdb8


/* Function Stack Size: 0x18 bytes */



void OBF_AIChatSettingViewController::toggleOption_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  cfstringStruct *pcVar5;

  undefined1 auVar6 [16];

  

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  lVar2 = FUN_002a4e60(param_3);

  if (lVar2 < 0x66) {

    if (lVar2 == 100) {

      auVar6 = FUN_002979c0(param_3);

      FUN_0029e7a0(param_1,auVar6._8_8_,auVar6._0_8_);

      auVar6 = FUN_002979c0(param_3);

      pcVar5 = &cf_aiChatGroupNoAt;

    }

    else {

      if (lVar2 != 0x65) goto LAB_0005cf78;

      auVar6 = FUN_002979c0(param_3);

      FUN_0029ca60(param_1,auVar6._8_8_,auVar6._0_8_);

      auVar6 = FUN_002979c0(param_3);

      pcVar5 = &cf_aiChatAllFriends;

    }

  }

  else {

    if (lVar2 == 0x66) {

      auVar6 = FUN_002979c0(param_3);

      FUN_0029daa0(param_1,auVar6._8_8_,auVar6._0_8_);

      auVar6 = FUN_002979c0(param_3);

      FUN_0029d080(uVar1,auVar6._8_8_,auVar6._0_8_,&cf_aiChatCustomApiEnabled);

      FUN_002990e0(param_1);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_002a5520();

      uVar4 = _objc_retainAutoreleasedReturnValue();

      FUN_002a6220();

      auVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_002a62a0(auVar6._0_8_,auVar6._8_8_,3000);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar6._0_8_);

      _objc_release(uVar4);

      _objc_release(uVar3);

      if (lVar2 != 0) {

        FUN_0029b140(lVar2);

      }

      _objc_release(lVar2);

      FUN_002a4dc0(param_1);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b140();

      _objc_release(uVar3);

      goto LAB_0005cf78;

    }

    if (lVar2 != 0x67) goto LAB_0005cf78;

    auVar6 = FUN_002979c0(param_3);

    FUN_002a0ba0(param_1,auVar6._8_8_,auVar6._0_8_);

    auVar6 = FUN_002979c0(param_3);

    pcVar5 = &cf_aiChatQuoteReplyEnabled;

  }

  FUN_0029d080(uVar1,auVar6._8_8_,auVar6._0_8_,pcVar5);

LAB_0005cf78:

  FUN_002a4a40(uVar1);

  _objc_release(uVar1);

  _objc_release(param_3);

  return;

}




