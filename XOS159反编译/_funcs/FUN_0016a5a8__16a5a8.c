// FUN_0016a5a8 @0x16a5a8


void FUN_0016a5a8(long param_1,long param_2,long param_3)



{

  int iVar1;

  long lVar2;

  long lVar3;

  ulong uVar4;

  dispatch_time_t dVar5;

  long lVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 extraout_x1;

  undefined *local_d0;

  undefined8 local_c8;

  code *local_c0;

  undefined *puStack_b8;

  long local_b0;

  undefined1 auStack_a8 [8];

  undefined1 auStack_a0 [8];

  undefined *local_98;

  undefined8 local_90;

  code *local_88;

  undefined *puStack_80;

  long local_78;

  long local_70;

  long lStack_68;

  

  _objc_retain();

  _objc_retain(param_2);

  FUN_0016cb00();

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 == 0) {

    if (param_2 != 0) {

      (**(code **)(param_2 + 0x10))(param_2);

    }

    goto LAB_0016a84c;

  }

  FUN_002a56c0(lVar2);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (((lVar3 == 0) && (uVar4 = FUN_00297640(lVar2), (uVar4 & 1) == 0)) &&

     (uVar4 = FUN_00297620(lVar2), (uVar4 & 1) == 0)) {

    FUN_0029a560(lVar2);

    lVar6 = _objc_retainAutoreleasedReturnValue();

    if (lVar6 == 0) {

      iVar1 = 0;

    }

    else {

      FUN_0029a560(lVar2);

      uVar7 = _objc_retainAutoreleasedReturnValue();

      uVar4 = FUN_00297620();

      if ((uVar4 & 1) == 0) {

        FUN_0029a560(lVar2);

        uVar8 = _objc_retainAutoreleasedReturnValue();

        iVar1 = FUN_00297640();

        _objc_release(uVar8);

      }

      else {

        iVar1 = 1;

      }

      _objc_release(uVar7);

    }

    _objc_release(lVar6);

  }

  else {

    iVar1 = 1;

  }

  _objc_release(lVar3);

  if ((param_3 < 1) || (iVar1 == 0)) {

    _objc_retain(lVar2);

    lVar3 = lVar2;

    while( true ) {

      FUN_0029a560(lVar3);

      lVar6 = _objc_retainAutoreleasedReturnValue();

      if (lVar6 == 0) break;

      FUN_0029a560(lVar3);

      uVar7 = _objc_retainAutoreleasedReturnValue();

      uVar4 = FUN_00297620();

      _objc_release(uVar7);

      _objc_release(lVar6);

      if ((uVar4 & 1) != 0) break;

      FUN_0029a560(lVar3);

      lVar6 = _objc_retainAutoreleasedReturnValue();

      _objc_release(lVar3);

      lVar3 = lVar6;

    }

    uVar4 = FUN_00297620(lVar3);

    if ((uVar4 & 1) == 0) {

      FUN_002a6220(lVar3);

      uVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_002a6520();

      lVar6 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      _objc_release(uVar7);

      if (lVar6 != 0) {

        FUN_0029a500(lVar3,extraout_x1,param_1,1,0);

        if (param_2 != 0) {

          _objc_initWeak(auStack_a0,param_1);

          dVar5 = _dispatch_time(0,600000000);

          local_d0 = PTR___NSConcreteStackBlock_003886f0;

          local_c8 = 0xc2000000;

          local_c0 = FUN_001828fc;

          puStack_b8 = &DAT_0038dc38;

          _objc_copyWeak(auStack_a8,auStack_a0);

          _objc_retain(param_2);

          local_b0 = param_2;

          _dispatch_after(dVar5,PTR___dispatch_main_q_00388740,&local_d0);

          _objc_release(local_b0);

          _objc_destroyWeak(auStack_a8);

          _objc_destroyWeak(auStack_a0);

        }

        goto LAB_0016a844;

      }

    }

    if (param_2 != 0) {

      (**(code **)(param_2 + 0x10))(param_2);

    }

  }

  else {

    dVar5 = _dispatch_time(0,300000000);

    local_98 = PTR___NSConcreteStackBlock_003886f0;

    local_90 = 0xc2000000;

    local_88 = FUN_001828e8;

    puStack_80 = &DAT_0038dc08;

    _objc_retain(param_1);

    local_78 = param_1;

    _objc_retain(param_2);

    local_70 = param_2;

    lStack_68 = param_3;

    _dispatch_after(dVar5,PTR___dispatch_main_q_00388740,&local_98);

    _objc_release(local_70);

    lVar3 = local_78;

  }

LAB_0016a844:

  _objc_release(lVar3);

LAB_0016a84c:

  _objc_release(lVar2);

  _objc_release(param_2);

  _objc_release(param_1);

  return;

}




