// toggleBubbleEnabled: @0x3cb98


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::toggleBubbleEnabled_(ID param_1,SEL param_2,ID param_3)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar4 [16];

  undefined *local_98;

  undefined8 local_90;

  code *local_88;

  undefined *puStack_80;

  ID local_78;

  undefined *local_70;

  undefined8 local_68;

  code *local_60;

  undefined *puStack_58;

  undefined8 local_50;

  ID local_48;

  ID IStack_40;

  undefined8 local_38;

  

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  iVar1 = FUN_002979c0(param_3);

  if (iVar1 == 0) {

    FUN_0029d080(uVar2,extraout_x1,0,&cf_mesMsgMergeCreatorPermission);

    FUN_002a4a40(uVar2);

    FUN_0029af00(param_1);

    local_98 = PTR___NSConcreteStackBlock_003886f0;

    local_90 = 0xc2000000;

    local_88 = FUN_0003d334;

    puStack_80 = &DAT_00388e60;

    local_78 = param_1;

    _dispatch_async(PTR___dispatch_main_q_00388740,&local_98);

  }

  else {

    FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,&cf_hgcCg,&cf_ck_WR_OCgPzP_,1);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    uVar3 = auVar4._0_8_;

    FUN_0029a500(param_1,auVar4._8_8_,uVar3,1,0);

    local_70 = PTR___NSConcreteStackBlock_003886f0;

    local_68 = 0xc2000000;

    local_60 = FUN_0003cd80;

    puStack_58 = &DAT_00389690;

    _objc_retain(uVar3);

    local_50 = uVar3;

    _objc_retain(param_3);

    local_48 = param_3;

    IStack_40 = param_1;

    _objc_retain(uVar2);

    local_38 = uVar2;

    FUN_002950e0(param_1,extraout_x1_00,&local_70);

    _objc_release(local_38);

    _objc_release(local_48);

    _objc_release(local_50);

    _objc_release(uVar3);

  }

  _objc_release(uVar2);

  _objc_release(param_3);

  return;

}




