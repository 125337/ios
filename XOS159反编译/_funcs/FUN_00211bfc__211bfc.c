// FUN_00211bfc @0x211bfc


void FUN_00211bfc(long param_1)



{

  undefined **ppuVar1;

  undefined **ppuVar2;

  long lVar3;

  undefined8 uVar4;

  dispatch_time_t dVar5;

  double dVar6;

  undefined1 auVar7 [16];

  undefined *local_70;

  undefined8 local_68;

  code *local_60;

  undefined *puStack_58;

  undefined1 auStack_50 [8];

  undefined1 auStack_48 [8];

  

  _objc_retain();

  if (param_1 != 0) {

    _objc_getAssociatedObject(param_1,&DAT_003ead89);

    ppuVar2 = (undefined **)_objc_retainAutoreleasedReturnValue();

    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_003c0010;

    if (ppuVar2 != (undefined **)0x0) {

      ppuVar1 = ppuVar2;

    }

    _objc_retain(ppuVar1);

    _objc_release(ppuVar2);

    auVar7 = FUN_002974a0(ppuVar1);

    lVar3 = auVar7._0_8_;

    if (lVar3 < 3) {

      FUN_00299400(&_OBJC_CLASS___NSNumber,auVar7._8_8_,lVar3 + 1);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_1,&DAT_003ead89,uVar4,1);

      _objc_release(uVar4);

      dVar6 = *(double *)(&DAT_0030eb60 + lVar3 * 8);

      _objc_initWeak(auStack_48,param_1);

      dVar5 = _dispatch_time(0,(long)(dVar6 * 1000000000.0));

      local_70 = PTR___NSConcreteStackBlock_003886f0;

      local_68 = 0xc2000000;

      local_60 = FUN_00212f28;

      puStack_58 = &DAT_0038a150;

      _objc_copyWeak(auStack_50,auStack_48);

      _dispatch_after(dVar5,PTR___dispatch_main_q_00388740,&local_70);

      _objc_destroyWeak(auStack_50);

      _objc_destroyWeak(auStack_48);

    }

    _objc_release(ppuVar1);

  }

  _objc_release(param_1);

  return;

}




