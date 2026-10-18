// startIfNeeded @0x22f8b8


/* Function Stack Size: 0x10 bytes */



void XZYHighRefreshDriver::startIfNeeded(ID param_1,SEL param_2)



{

  ulong uVar1;

  long lVar2;

  undefined8 extraout_x1;

  long lVar3;

  undefined1 auVar4 [16];

  undefined *local_58;

  undefined8 local_50;

  code *local_48;

  undefined *puStack_40;

  ID local_38;

  

  if (((DAT_003eb0e8 & 1) != 0) || ((DAT_003eb0e9 & 1) != 0)) {

    uVar1 = FUN_00297960(&_OBJC_CLASS___NSThread);

    if ((uVar1 & 1) != 0) {

      FUN_0022fa5c();

      FUN_0022ef28();

      if (DAT_003eb0b8 == 0) {

        FUN_00294760(&_OBJC_CLASS___CADisplayLink,extraout_x1,param_1,"displayLinkTick:");

        lVar2 = _objc_retainAutoreleasedReturnValue();

        lVar3 = DAT_003eb0b8;

        DAT_003eb0b8 = lVar2;

        _objc_release(lVar3);

        FUN_0022fde4(DAT_003eb0b8);

        lVar2 = DAT_003eb0b8;

        FUN_002987c0(&_OBJC_CLASS___NSRunLoop);

        auVar4 = _objc_retainAutoreleasedReturnValue();

        lVar3 = auVar4._0_8_;

        FUN_00291440(lVar2,auVar4._8_8_,lVar3,*(undefined8 *)PTR__NSRunLoopCommonModes_003882f8);

      }

      else {

        FUN_002a05e0(DAT_003eb0b8,extraout_x1,0);

        lVar3 = DAT_003eb0b8;

        if (DAT_003eb0e8 == 1) {

          FUN_0022fde4(DAT_003eb0b8);

          return;

        }

        _objc_retain(DAT_003eb0b8);

        if (lVar3 != 0) {

          FUN_002a0800(*(undefined4 *)PTR__CAFrameRateRangeDefault_00388560,

                       *(undefined4 *)(PTR__CAFrameRateRangeDefault_00388560 + 4),

                       *(undefined4 *)(PTR__CAFrameRateRangeDefault_00388560 + 8),lVar3);

        }

      }

      _objc_release(lVar3);

      return;

    }

    local_58 = PTR___NSConcreteStackBlock_003886f0;

    local_50 = 0xc2000000;

    local_48 = FUN_0022fa54;

    puStack_40 = &DAT_00388e60;

    local_38 = param_1;

    _dispatch_async(PTR___dispatch_main_q_00388740,&local_58);

  }

  return;

}




