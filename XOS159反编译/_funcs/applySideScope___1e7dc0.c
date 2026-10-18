// applySideScope: @0x1e7dc0


/* Function Stack Size: 0x18 bytes */



void XZYChatListGroupingSettingsViewController::applySideScope_

               (ID param_1,SEL param_2,long_long param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined1 auVar3 [16];

  undefined1 auVar4 [16];

  undefined8 local_40;

  long local_38;

  

  local_38 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar3._0_8_;

  if (param_3 == 1) {

    FUN_0029efa0(uVar1,auVar3._8_8_,1,&cf_xzyChatListGroupingSideScope);

  }

  else {

    FUN_0029b4a0(uVar1,auVar3._8_8_,&cf_xzyChatListGroupingSideScope);

  }

  FUN_001e77e8(&cf_xzyChatListGroupingSideScope);

  DAT_003eaab4 = DAT_003eaab4 + 1;

  DAT_003eaad0 = (ulong)(param_3 == 1);

  FUN_00296780(&_OBJC_CLASS___NSIndexPath,extraout_x1,2,2);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4dc0(param_1);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  local_40 = uVar2;

  FUN_00291e00(&_OBJC_CLASS___NSArray,auVar3._8_8_,&local_40,1);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b1a0(auVar3._0_8_,auVar4._8_8_,auVar4._0_8_,5);

  _objc_release(auVar4._0_8_);

  _objc_release(auVar3._0_8_);

  FUN_001c9388();

  _objc_release(uVar2);

  _objc_release(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_38) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




