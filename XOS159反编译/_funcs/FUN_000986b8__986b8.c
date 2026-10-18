// FUN_000986b8 @0x986b8


void FUN_000986b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  int iVar1;

  long lVar2;

  undefined8 uVar3;

  ulong uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar5 [16];

  undefined *local_58;

  undefined8 local_50;

  code *local_48;

  undefined *puStack_40;

  long local_38;

  

  _objc_retain(param_3);

  (*DAT_003e7820)(param_1,param_2,param_3);

  FUN_002a5680(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  iVar1 = FUN_00295f20(auVar5._0_8_,auVar5._8_8_,param_3);

  _objc_release(auVar5._0_8_);

  if (iVar1 != 0) {

    FUN_001331b8();

    FUN_00007f9c();

    FUN_0011acdc();

    FUN_002a6080(param_1,extraout_x1,&cf_m_tableView);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if (lVar2 != 0) {

      uVar3 = _objc_opt_class(&_OBJC_CLASS___UITableView);

      uVar4 = _objc_opt_isKindOfClass(lVar2,uVar3);

      if ((uVar4 & 1) != 0) {

        local_58 = PTR___NSConcreteStackBlock_003886f0;

        local_50 = 0xc2000000;

        local_48 = FUN_000b53dc;

        puStack_40 = &DAT_00388e60;

        _objc_retain(lVar2);

        local_38 = lVar2;

        FUN_002a5720(0x3fd6666666666666,&_OBJC_CLASS___UIView,extraout_x1_00,lVar2,0x500000,

                     &local_58,0);

        _objc_release(local_38);

      }

    }

    _objc_release(lVar2);

  }

  _objc_release(param_3);

  return;

}




