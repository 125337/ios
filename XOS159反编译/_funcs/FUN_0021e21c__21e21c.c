// FUN_0021e21c @0x21e21c


void FUN_0021e21c(long param_1,undefined8 param_2,undefined8 param_3)



{

  int iVar1;

  long lVar2;

  ulong uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined1 auVar6 [16];

  undefined *local_a8;

  undefined8 local_a0;

  code *local_98;

  undefined *puStack_90;

  undefined1 auStack_88 [8];

  undefined *local_80;

  undefined8 local_78;

  code *local_70;

  undefined *puStack_68;

  undefined8 local_60;

  undefined8 local_58;

  undefined1 auStack_50 [8];

  undefined1 auStack_48 [8];

  

  _objc_retain();

  _objc_retain(param_2);

  _objc_retain(param_3);

  if (((param_1 == 0) || (lVar2 = FUN_00297fa0(param_2), lVar2 == 0)) || (DAT_003ead50 != '\0')) {

    FUN_0021bac8(param_1);

  }

  else {

    uVar3 = FUN_00297960(&_OBJC_CLASS___NSThread);

    if ((uVar3 & 1) == 0) {

      _objc_initWeak(auStack_48,param_1);

      uVar4 = FUN_002937a0(param_2);

      local_80 = PTR___NSConcreteStackBlock_003886f0;

      local_78 = 0xc2000000;

      local_70 = FUN_0021e6a4;

      puStack_68 = &DAT_0038f458;

      _objc_copyWeak(auStack_50,auStack_48);

      local_60 = uVar4;

      _objc_retain(param_3);

      local_58 = param_3;

      _objc_retain(uVar4);

      _dispatch_async(PTR___dispatch_main_q_00388740,&local_80);

      _objc_release(local_58);

      _objc_release(local_60);

      _objc_release(uVar4);

      _objc_destroyWeak(auStack_50);

      _objc_destroyWeak(auStack_48);

    }

    else {

      _objc_getAssociatedObject(param_1,&DAT_003eaefc);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      iVar1 = FUN_002924e0();

      if (iVar1 == 0) {

        _objc_getAssociatedObject(param_1,&DAT_003eaefb);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        uVar3 = FUN_002924e0();

        _objc_release(uVar5);

        _objc_release(uVar4);

        if ((uVar3 & 1) != 0) goto LAB_0021e2b8;

        _objc_getAssociatedObject(param_1,&DAT_003eaf00);

        auVar6 = _objc_retainAutoreleasedReturnValue();

        if (auVar6._0_8_ == 0) {

          FUN_0029c6e0(&_OBJC_CLASS___NSMutableSet);

          uVar4 = _objc_retainAutoreleasedReturnValue();

          _objc_setAssociatedObject(param_1,&DAT_003eaf00,uVar4,1);

          auVar6._8_8_ = extraout_x1;

          auVar6._0_8_ = uVar4;

        }

        uVar4 = auVar6._0_8_;

        FUN_00291240(uVar4,auVar6._8_8_,param_2);

        iVar1 = FUN_00297aa0(param_3);

        if (iVar1 != 0) {

          _objc_getAssociatedObject(param_1,&DAT_003eaf01);

          lVar2 = _objc_retainAutoreleasedReturnValue();

          _objc_release();

          if (lVar2 == 0) {

            _objc_setAssociatedObject(param_1,&DAT_003eaf01,param_3,1);

          }

        }

        _objc_getAssociatedObject(param_1,&DAT_003eaefa);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        uVar3 = FUN_002924e0();

        _objc_release(uVar5);

        if ((uVar3 & 1) == 0) {

          _objc_setAssociatedObject(param_1,&DAT_003eaefa,PTR____kCFBooleanTrue_00388320,1);

          _objc_initWeak(auStack_48,param_1);

          local_a8 = PTR___NSConcreteStackBlock_003886f0;

          local_a0 = 0xc2000000;

          local_98 = FUN_0021e6ec;

          puStack_90 = &DAT_0038a150;

          _objc_copyWeak(auStack_88,auStack_48);

          _dispatch_async(PTR___dispatch_main_q_00388740,&local_a8);

          _objc_destroyWeak(auStack_88);

          _objc_destroyWeak(auStack_48);

        }

      }

      _objc_release(uVar4);

    }

  }

LAB_0021e2b8:

  _objc_release(param_3);

  _objc_release(param_2);

  _objc_release(param_1);

  return;

}




