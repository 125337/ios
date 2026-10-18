// FUN_000fd30c @0xfd30c


undefined8 FUN_000fd30c(long param_1)



{

  undefined *puVar1;

  ulong uVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  long lVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar7 [16];

  undefined *local_a8;

  undefined8 local_a0;

  code *local_98;

  undefined *puStack_90;

  long local_88;

  char *pcStack_80;

  undefined *local_78;

  undefined8 local_70;

  code *local_68;

  undefined *puStack_60;

  long local_58;

  

  if (DAT_003eb410 == '\x01') {

    uVar2 = FUN_00297960(&_OBJC_CLASS___NSThread);

    if ((uVar2 & 1) == 0) {

      local_78 = PTR___NSConcreteStackBlock_003886f0;

      local_70 = 0xc0000000;

      local_68 = FUN_001053b4;

      puStack_60 = &DAT_0038abe0;

      local_58 = param_1;

      _dispatch_async(PTR___dispatch_main_q_00388740,&local_78);

    }

    else if (param_1 != 0) {

      auVar7 = _class_getInstanceMethod(param_1,"layoutSubviews");

      lVar3 = auVar7._0_8_;

      if (lVar3 == 0) {

        return 0;

      }

      uVar4 = FUN_00297440(param_1,auVar7._8_8_,"xzy_applyModelBoundBubbleAfterLayout");

      if ((int)uVar4 == 0) {

        return uVar4;

      }

      lVar5 = _method_getImplementation(lVar3);

      _objc_getAssociatedObject(param_1,PTR_LOOP_003e68d8);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      lVar6 = FUN_0029a060();

      _objc_release(uVar4);

      if (lVar5 == 0) {

        return 0;

      }

      if (lVar5 == lVar6) {

        return 0;

      }

      local_a8 = PTR___NSConcreteStackBlock_003886f0;

      local_a0 = 0xc0000000;

      local_98 = FUN_001053bc;

      puStack_90 = &DAT_0038c650;

      pcStack_80 = "layoutSubviews";

      local_88 = lVar5;

      uVar4 = _objc_retainBlock(&local_a8);

      lVar6 = _imp_implementationWithBlock();

      _objc_release(uVar4);

      if (lVar6 != 0) {

        uVar4 = _method_getTypeEncoding(lVar3);

        _class_replaceMethod(param_1,"layoutSubviews",lVar6,uVar4);

        puVar1 = PTR_LOOP_003e68e0;

        FUN_002a6180(&_OBJC_CLASS___NSValue,extraout_x1,lVar5);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(param_1,puVar1,uVar4,1);

        _objc_release(uVar4);

        puVar1 = PTR_LOOP_003e68d8;

        FUN_002a6180(&_OBJC_CLASS___NSValue,extraout_x1_00,lVar6);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(param_1,puVar1,uVar4,1);

        _objc_release(uVar4);

        return 1;

      }

    }

  }

  return 0;

}




