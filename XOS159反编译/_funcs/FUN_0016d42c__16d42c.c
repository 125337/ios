// FUN_0016d42c @0x16d42c


void FUN_0016d42c(long param_1)



{

  long lVar1;

  ulong uVar2;

  long lVar3;

  dispatch_time_t dVar4;

  undefined8 extraout_x1;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined1 auVar7 [16];

  undefined *local_60;

  undefined8 local_58;

  code *local_50;

  undefined *puStack_48;

  undefined8 local_40;

  undefined8 local_38;

  

  FUN_0016cb00();

  auVar7 = _objc_retainAutoreleasedReturnValue();

  lVar1 = auVar7._0_8_;

  if (lVar1 == 0) {

    FUN_002953c0(*(undefined8 *)(param_1 + 0x20),auVar7._8_8_,0);

  }

  else {

    uVar2 = FUN_00297620(lVar1);

    if ((uVar2 & 1) == 0) {

      FUN_002a56c0(lVar1);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar3 == 0) {

        FUN_0029a500(lVar1,extraout_x1,*(undefined8 *)(param_1 + 0x28),1,0);

        goto LAB_0016d52c;

      }

    }

    dVar4 = _dispatch_time(0,300000000);

    local_60 = PTR___NSConcreteStackBlock_003886f0;

    local_58 = 0xc2000000;

    local_50 = FUN_0016d55c;

    puStack_48 = &DAT_00388d50;

    uVar6 = *(undefined8 *)(param_1 + 0x28);

    _objc_retain(uVar6);

    uVar5 = *(undefined8 *)(param_1 + 0x20);

    local_40 = uVar6;

    _objc_retain(uVar5);

    local_38 = uVar5;

    _dispatch_after(dVar4,PTR___dispatch_main_q_00388740,&local_60);

    _objc_release(local_38);

    _objc_release(local_40);

  }

LAB_0016d52c:

  _objc_release(lVar1);

  return;

}




