// onSideRailTitleColorEnabledChanged: @0x1ea7b0


/* Function Stack Size: 0x18 bytes */



void XZYChatListGroupingSettingsViewController::onSideRailTitleColorEnabledChanged_

               (ID param_1,SEL param_2,ID param_3)



{

  long lVar1;

  cfstringStruct *pcVar2;

  int iVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 uVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  ulong uVar8;

  undefined8 uVar9;

  undefined1 auVar10 [16];

  undefined *local_90;

  undefined8 local_88;

  code *local_80;

  undefined *puStack_78;

  ID local_70;

  undefined8 local_68;

  undefined8 local_60;

  long local_58;

  

  local_58 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_3);

  uVar4 = FUN_002979c0(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d080(auVar10._0_8_,auVar10._8_8_,uVar4,&cf_xzyChatListGroupingSideRailTitleColorEnabled);

  FUN_001e77e8(&cf_xzyChatListGroupingSideRailTitleColorEnabled);

  DAT_003eaabf = (char)uVar4;

  _objc_release(auVar10._0_8_);

  FUN_001cf7f4();

  lVar1 = 3;

  if (DAT_003e70f0 != '\0') {

    lVar1 = 4;

  }

  uVar8 = (ulong)DAT_003eaabe;

  FUN_00296780(&_OBJC_CLASS___NSIndexPath,extraout_x1,lVar1 + uVar8,4);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4dc0(param_1);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_00292aa0(auVar10._0_8_,auVar10._8_8_,uVar5);

  lVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar10._0_8_);

  uVar4 = extraout_x1_00;

  if (lVar6 != 0) {

    pcVar2 = &cf___T_u;

    if (DAT_003eaabf == '\0') {

      pcVar2 = &cf__;

    }

    _objc_retain(pcVar2);

    FUN_002944a0(lVar6);

    auVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(auVar10._0_8_,auVar10._8_8_,pcVar2);

    _objc_release(auVar10._0_8_);

    _objc_release(pcVar2);

    uVar4 = extraout_x1_01;

  }

  FUN_00296780(&_OBJC_CLASS___NSIndexPath,uVar4,lVar1 + uVar8 + 1,4);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4dc0(param_1);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00292280();

  _objc_release(uVar7);

  iVar3 = FUN_002979c0(param_3);

  if (iVar3 == 0) {

    FUN_002a4dc0(param_1);

    auVar10 = _objc_retainAutoreleasedReturnValue();

    uVar7 = auVar10._0_8_;

    local_68 = uVar4;

    FUN_00291e00(&_OBJC_CLASS___NSArray,auVar10._8_8_,&local_68,1);

    auVar10 = _objc_retainAutoreleasedReturnValue();

    uVar9 = auVar10._0_8_;

    FUN_002943a0(uVar7,auVar10._8_8_,uVar9,100);

  }

  else {

    FUN_002a4dc0(param_1);

    auVar10 = _objc_retainAutoreleasedReturnValue();

    uVar7 = auVar10._0_8_;

    local_60 = uVar4;

    FUN_00291e00(&_OBJC_CLASS___NSArray,auVar10._8_8_,&local_60,1);

    auVar10 = _objc_retainAutoreleasedReturnValue();

    uVar9 = auVar10._0_8_;

    FUN_00297020(uVar7,auVar10._8_8_,uVar9,100);

  }

  _objc_release(uVar9);

  _objc_release(uVar7);

  FUN_002a4dc0(param_1);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00294c60();

  _objc_release(uVar7);

  iVar3 = FUN_002979c0(param_3);

  if (iVar3 != 0) {

    local_90 = PTR___NSConcreteStackBlock_003886f0;

    local_88 = 0xc2000000;

    local_80 = FUN_001eaba4;

    puStack_78 = &DAT_00388e60;

    local_70 = param_1;

    _dispatch_async(PTR___dispatch_main_q_00388740,&local_90);

  }

  _objc_release(uVar4);

  _objc_release(lVar6);

  _objc_release(uVar5);

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




