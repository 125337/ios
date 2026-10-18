// applyStickyOffSpacing: @0x1e9428


/* Function Stack Size: 0x18 bytes */



void XZYChatListGroupingSettingsViewController::applyStickyOffSpacing_

               (ID param_1,SEL param_2,double param_3)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 uVar2;

  double dVar3;

  double dVar4;

  double dVar5;

  undefined1 auVar6 [16];

  undefined1 auVar7 [16];

  undefined8 local_50;

  long local_48;

  

  local_48 = *(long *)PTR____stack_chk_guard_00388738;

  dVar5 = 0.0;

  dVar3 = 0.0;

  if (0.0 <= param_3) {

    dVar3 = param_3;

  }

  dVar4 = 120.0;

  if (dVar3 <= 120.0) {

    dVar4 = dVar3;

  }

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar6._0_8_;

  if (dVar4 <= 0.0) {

    FUN_0029b4a0(uVar1,auVar6._8_8_,&cf_xzyChatListGroupingStickyOffSpacing);

  }

  else {

    FUN_0029de20(dVar4,uVar1,auVar6._8_8_,&cf_xzyChatListGroupingStickyOffSpacing);

    dVar5 = dVar4;

  }

  FUN_001e77e8(&cf_xzyChatListGroupingStickyOffSpacing);

  if (DAT_003eaac8 - 5U < 2) {

    uVar2 = 3;

  }

  else {

    uVar2 = 4;

    if ((DAT_003eaac8 - 1U < 6 & DAT_003eaa30) != 0) {

      uVar2 = 5;

    }

  }

  DAT_003eaaf0 = dVar5;

  FUN_00296780(&_OBJC_CLASS___NSIndexPath,extraout_x1,uVar2,2);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4dc0(param_1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  local_50 = uVar2;

  FUN_00291e00(&_OBJC_CLASS___NSArray,auVar6._8_8_,&local_50,1);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b1a0(auVar6._0_8_,auVar7._8_8_,auVar7._0_8_,5);

  _objc_release(auVar7._0_8_);

  _objc_release(auVar6._0_8_);

  FUN_001c9388();

  _objc_release(uVar2);

  _objc_release(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_48) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




