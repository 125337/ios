// copyWxidToClipboard: @0xef74


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::copyWxidToClipboard_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  ulong uVar4;

  undefined8 uVar5;

  dispatch_time_t dVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar7 [16];

  undefined *local_68;

  undefined8 local_60;

  code *local_58;

  undefined *puStack_50;

  undefined8 local_48;

  

  FUN_002a6220(param_3);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a64e0(&_OBJC_CLASS___NSCharacterSet);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45c0(uVar2,auVar7._8_8_,auVar7._0_8_);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar7._0_8_);

  if ((lVar3 != 0) && (uVar4 = FUN_00297820(lVar3,extraout_x1,&cf__g_vU_), (uVar4 & 1) == 0)) {

    FUN_002956a0(&_OBJC_CLASS___UIPasteboard);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1a60(auVar7._0_8_,auVar7._8_8_,lVar3);

    _objc_release(auVar7._0_8_);

    FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_00,0,&cf_w,1);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    uVar5 = auVar7._0_8_;

    FUN_0029a500(param_1,auVar7._8_8_,uVar5,1,0);

    dVar6 = _dispatch_time(0,1000000000);

    local_68 = PTR___NSConcreteStackBlock_003886f0;

    local_60 = 0xc2000000;

    local_58 = FUN_0000f160;

    puStack_50 = &DAT_00388e60;

    local_48 = uVar5;

    _objc_retain(uVar5);

    _dispatch_after(dVar6,PTR___dispatch_main_q_00388740,&local_68);

    _objc_release(local_48);

    _objc_release(uVar5);

  }

  _objc_release(lVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  return;

}




