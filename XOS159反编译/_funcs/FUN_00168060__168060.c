// FUN_00168060 @0x168060


void FUN_00168060(long param_1)



{

  int iVar1;

  ulong uVar2;

  long lVar3;

  dispatch_time_t dVar4;

  double dVar5;

  undefined *local_78;

  undefined8 local_70;

  code *local_68;

  undefined *puStack_60;

  undefined1 auStack_58 [8];

  undefined1 auStack_50 [8];

  long local_48;

  undefined1 auStack_40 [8];

  undefined1 auStack_38 [8];

  

  _objc_retain();

  uVar2 = FUN_00167c64();

  if ((((((uVar2 & 1) != 0) && ((DAT_003e8a88 & 1) == 0)) && ((DAT_003e8a89 & 1) == 0)) &&

      ((DAT_003e8a30 != 0 && (DAT_003e8a38 != 0)))) &&

     ((param_1 != 0 && ((2 < DAT_003e8a90 & DAT_003e8a98) == 0)))) {

    FUN_002a6520(param_1);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (((lVar3 != 0) && (iVar1 = FUN_00167ed4(param_1,DAT_003e8a38), iVar1 != 0)) &&

       (dVar5 = (double)FUN_002a5220(&_OBJC_CLASS___NSDate), (DAT_003e8a99 & 1) == 0)) {

      if (2.0 <= dVar5 - DAT_003e8aa0) {

        DAT_003e8a99 = 1;

        lVar3 = 1;

        if (1 < DAT_003e6ba0 + 1U) {

          lVar3 = DAT_003e6ba0 + 1;

        }

        DAT_003e6ba0 = lVar3;

        DAT_003e8aa0 = dVar5;

        _objc_initWeak(auStack_38,param_1);

        _objc_initWeak(auStack_40,DAT_003e8a30);

        dVar4 = _dispatch_time(0,350000000);

        local_78 = PTR___NSConcreteStackBlock_003886f0;

        local_70 = 0xc2000000;

        local_68 = FUN_00168314;

        puStack_60 = &DAT_0038b1a8;

        _objc_copyWeak(auStack_58,auStack_38);

        _objc_copyWeak(auStack_50,auStack_40);

        local_48 = lVar3;

        _dispatch_after(dVar4,PTR___dispatch_main_q_00388740,&local_78);

        _objc_destroyWeak(auStack_50);

        _objc_destroyWeak(auStack_58);

        _objc_destroyWeak(auStack_40);

        _objc_destroyWeak(auStack_38);

      }

      else {

        FUN_00168258((2.0 - (dVar5 - DAT_003e8aa0)) + 0.05,DAT_003e8a30);

      }

    }

  }

  _objc_release(param_1);

  return;

}




