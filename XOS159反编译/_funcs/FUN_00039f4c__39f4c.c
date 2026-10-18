// FUN_00039f4c @0x39f4c


void FUN_00039f4c(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  dispatch_time_t dVar5;

  undefined8 extraout_x1;

  undefined1 auVar6 [16];

  undefined *local_68;

  undefined8 local_60;

  code *local_58;

  undefined *puStack_50;

  undefined8 local_48;

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  lVar4 = FUN_002974a0();

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  if (lVar4 < -99) {

    lVar4 = -100;

  }

  if (99 < lVar4) {

    lVar4 = 100;

  }

  FUN_0029efa0(*(undefined8 *)(param_1 + 0x28),extraout_x1,lVar4,

               &cf_mesMsgMergeReverseAvatarDownOffset);

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x28));

  FUN_002990e0(*(undefined8 *)(param_1 + 0x30));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5520();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220();

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar6._0_8_,auVar6._8_8_,0x3ea);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar6._0_8_);

  _objc_release(uVar2);

  _objc_release(uVar1);

  if (lVar4 != 0) {

    uVar1 = _objc_opt_class(&_OBJC_CLASS___UITableView);

    auVar6 = _objc_opt_isKindOfClass(lVar4,uVar1);

    if ((auVar6._0_8_ & 1) != 0) {

      FUN_00296800(&_OBJC_CLASS___NSIndexSet,auVar6._8_8_,2);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b1c0(lVar4,auVar6._8_8_,auVar6._0_8_,100);

      _objc_release(auVar6._0_8_);

    }

  }

  dVar5 = _dispatch_time(0,300000000);

  local_68 = PTR___NSConcreteStackBlock_003886f0;

  local_60 = 0xc2000000;

  local_58 = FUN_0003a17c;

  puStack_50 = &DAT_00388e60;

  local_48 = *(undefined8 *)(param_1 + 0x30);

  _dispatch_after(dVar5,PTR___dispatch_main_q_00388740,&local_68);

  _objc_release(lVar4);

  return;

}




