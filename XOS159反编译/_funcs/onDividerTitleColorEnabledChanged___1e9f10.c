// onDividerTitleColorEnabledChanged: @0x1e9f10


/* Function Stack Size: 0x18 bytes */



void XZYChatListGroupingSettingsViewController::onDividerTitleColorEnabledChanged_

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

  undefined8 uVar8;

  undefined1 auVar9 [16];

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

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d080(auVar9._0_8_,auVar9._8_8_,uVar4,&cf_xzyChatListGroupingDividerTitleColorEnabled);

  FUN_001e77e8(&cf_xzyChatListGroupingDividerTitleColorEnabled);

  DAT_003eaabe = (char)uVar4;

  FUN_0020c558(0);

  _objc_release(auVar9._0_8_);

  FUN_001ce328();

  lVar1 = 2;

  if (DAT_003e70f0 != '\0') {

    lVar1 = 3;

  }

  FUN_00296780(&_OBJC_CLASS___NSIndexPath,extraout_x1,lVar1,4);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4dc0(param_1);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_00292aa0(auVar9._0_8_,auVar9._8_8_,uVar5);

  lVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar9._0_8_);

  uVar4 = extraout_x1_00;

  if (lVar6 != 0) {

    pcVar2 = &cf___T_u;

    if (DAT_003eaabe == '\0') {

      pcVar2 = &cf__;

    }

    _objc_retain(pcVar2);

    FUN_002944a0(lVar6);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(auVar9._0_8_,auVar9._8_8_,pcVar2);

    _objc_release(auVar9._0_8_);

    _objc_release(pcVar2);

    uVar4 = extraout_x1_01;

  }

  FUN_00296780(&_OBJC_CLASS___NSIndexPath,uVar4,lVar1 + 1,4);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4dc0(param_1);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00292280();

  _objc_release(uVar7);

  iVar3 = FUN_002979c0(param_3);

  if (iVar3 == 0) {

    FUN_002a4dc0(param_1);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    uVar7 = auVar9._0_8_;

    local_68 = uVar4;

    FUN_00291e00(&_OBJC_CLASS___NSArray,auVar9._8_8_,&local_68,1);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    uVar8 = auVar9._0_8_;

    FUN_002943a0(uVar7,auVar9._8_8_,uVar8,100);

  }

  else {

    FUN_002a4dc0(param_1);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    uVar7 = auVar9._0_8_;

    local_60 = uVar4;

    FUN_00291e00(&_OBJC_CLASS___NSArray,auVar9._8_8_,&local_60,1);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    uVar8 = auVar9._0_8_;

    FUN_00297020(uVar7,auVar9._8_8_,uVar8,100);

  }

  _objc_release(uVar8);

  _objc_release(uVar7);

  FUN_002a4dc0(param_1);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00294c60();

  _objc_release(uVar7);

  iVar3 = FUN_002979c0(param_3);

  if (iVar3 != 0) {

    local_90 = PTR___NSConcreteStackBlock_003886f0;

    local_88 = 0xc2000000;

    local_80 = FUN_001ea300;

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




