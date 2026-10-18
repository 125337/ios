// FUN_0023fafc @0x23fafc


void FUN_0023fafc(long param_1)



{

  long lVar1;

  int64_t delta;

  undefined *puVar2;

  uint uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  dispatch_time_t dVar7;

  undefined1 auVar8 [16];

  undefined *local_90;

  undefined8 local_88;

  code *local_80;

  undefined *puStack_78;

  long local_70;

  long local_68;

  long local_60;

  long local_58;

  

  _objc_retain();

  if (param_1 != 0) {

    FUN_00235cf4(param_1);

    local_58 = -1;

    FUN_0023fd00(param_1,&local_58);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    if (lVar4 != 0) {

      uVar3 = FUN_0023ffa4(param_1,lVar4);

      if (-1 < local_58 && (uVar3 & 1) == 0) {

        FUN_00233b10(param_1);

      }

      _objc_retain(lVar4);

      _objc_getAssociatedObject(lVar4,PTR_LOOP_003e72e8);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      auVar8 = FUN_002a5a20();

      puVar2 = PTR_LOOP_003e72e8;

      lVar1 = auVar8._0_8_ + 1;

      FUN_00299480(&_OBJC_CLASS___NSNumber,auVar8._8_8_,lVar1);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(lVar4,puVar2,uVar6,1);

      _objc_release(uVar6);

      _objc_release(uVar5);

      _objc_release(lVar4);

      delta = 0;

      if (uVar3 == 0) {

        delta = 350000000;

      }

      dVar7 = _dispatch_time(0,delta);

      local_90 = PTR___NSConcreteStackBlock_003886f0;

      local_88 = 0xc2000000;

      local_80 = FUN_00240150;

      puStack_78 = &DAT_00389800;

      _objc_retain(lVar4);

      local_70 = lVar4;

      local_60 = lVar1;

      _objc_retain(param_1);

      local_68 = param_1;

      _dispatch_after(dVar7,PTR___dispatch_main_q_00388740,&local_90);

      _objc_release(local_68);

      _objc_release(local_70);

    }

    _objc_release(lVar4);

  }

  _objc_release(param_1);

  return;

}




