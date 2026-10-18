// FUN_0010ece4 @0x10ece4


undefined1  [16] FUN_0010ece4(long param_1)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined1 auVar3 [16];

  undefined8 uVar4;

  undefined8 uVar5;

  undefined1 auVar6 [16];

  undefined *local_88;

  undefined8 local_80;

  code *local_78;

  undefined *puStack_70;

  undefined8 *local_68;

  undefined8 local_60;

  undefined8 *local_58;

  undefined8 local_50;

  undefined8 local_48;

  

  _objc_retain();

  uVar4 = 0;

  uVar5 = 0;

  if ((param_1 != 0) && (auVar6 = FUN_00297fa0(param_1), uVar2 = auVar6._8_8_, auVar6._0_8_ != 0)) {

    if (DAT_003e8268 != -1) {

      FUN_0028f2ec();

      uVar2 = extraout_x1;

    }

    FUN_00299520(DAT_003e8248,uVar2,param_1);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    if (lVar1 == 0) {

      local_60 = 0;

      local_50 = 0x2020000000;

      local_48 = 0;

      local_58 = &local_60;

      auVar6 = FUN_00297fa0(param_1);

      local_88 = PTR___NSConcreteStackBlock_003886f0;

      local_80 = 0xc2000000;

      local_78 = FUN_0010f11c;

      puStack_70 = &DAT_0038c910;

      local_68 = &local_60;

      FUN_00294da0(param_1,auVar6._8_8_,0,auVar6._0_8_,2,&local_88);

      uVar4 = DAT_003e8248;

      FUN_002993a0(local_58[3],&_OBJC_CLASS___NSNumber);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_002a0060(uVar4,auVar6._8_8_,auVar6._0_8_,param_1);

      _objc_release(auVar6._0_8_);

      uVar4 = local_58[3];

      uVar5 = 0;

      __Block_object_dispose(&local_60,8);

      auVar6._8_8_ = uVar5;

      auVar6._0_8_ = uVar4;

    }

    else {

      auVar6 = FUN_00294860(lVar1);

    }

    uVar5 = auVar6._8_8_;

    uVar4 = auVar6._0_8_;

    _objc_release(lVar1);

  }

  _objc_release(param_1);

  auVar3._8_8_ = uVar5;

  auVar3._0_8_ = uVar4;

  return auVar3;

}




