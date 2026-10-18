// FUN_00095210 @0x95210


void FUN_00095210(undefined8 param_1)



{

  long lVar1;

  undefined8 uVar2;

  ulong uVar3;

  long lVar4;

  undefined8 extraout_x1;

  undefined *local_70;

  undefined8 local_68;

  code *local_60;

  undefined *puStack_58;

  undefined1 auStack_50 [8];

  undefined1 auStack_48 [8];

  undefined1 auStack_40 [8];

  undefined1 auStack_38 [8];

  

  (*DAT_003e77a0)();

  FUN_00293940(param_1);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar1 != 0) {

    FUN_00293940(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b340();

    _objc_release(uVar2);

    FUN_0029d880(param_1,extraout_x1,0);

    _objc_setAssociatedObject(param_1,"headCoverImagePath",0,1);

  }

  if ((DAT_003e74b9 == '\x01') && ((DAT_003e74d8 & 1) != 0)) {

    if (DAT_003e79e0 != -1) {

      FUN_0028efa0();

    }

    if (DAT_003e79d8 != 0) {

      FUN_002a4880(param_1);

      lVar1 = _objc_retainAutoreleasedReturnValue();

      while (lVar1 != 0) {

        uVar3 = _objc_opt_isKindOfClass(lVar1,DAT_003e79d8);

        if ((uVar3 & 1) != 0) {

          uVar3 = _objc_opt_respondsToSelector(lVar1,"setupAvatarCoverMask");

          if ((uVar3 & 1) != 0) {

            _objc_getAssociatedObject(param_1,&DAT_003e79e8);

            uVar2 = _objc_retainAutoreleasedReturnValue();

            uVar3 = FUN_002924e0();

            _objc_release(uVar2);

            if ((uVar3 & 1) == 0) {

              _objc_setAssociatedObject(param_1,&DAT_003e79e8,PTR____kCFBooleanTrue_00388320,1);

              _objc_initWeak(auStack_38,param_1);

              _objc_initWeak(auStack_40,lVar1);

              local_70 = PTR___NSConcreteStackBlock_003886f0;

              local_68 = 0xc2000000;

              local_60 = FUN_000a29ec;

              puStack_58 = &DAT_0038ac20;

              _objc_copyWeak(auStack_50,auStack_38);

              _objc_copyWeak(auStack_48,auStack_40);

              _dispatch_async(PTR___dispatch_main_q_00388740,&local_70);

              _objc_destroyWeak(auStack_48);

              _objc_destroyWeak(auStack_50);

              _objc_destroyWeak(auStack_40);

              _objc_destroyWeak(auStack_38);

            }

          }

          break;

        }

        FUN_002a4880(lVar1);

        lVar4 = _objc_retainAutoreleasedReturnValue();

        _objc_release(lVar1);

        lVar1 = lVar4;

      }

      _objc_release(lVar1);

    }

  }

  return;

}




