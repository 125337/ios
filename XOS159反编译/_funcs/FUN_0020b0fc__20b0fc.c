// FUN_0020b0fc @0x20b0fc


void FUN_0020b0fc(long param_1)



{

  undefined *puVar1;

  undefined *puVar2;

  int iVar3;

  bool bVar4;

  int iVar5;

  long lVar6;

  undefined8 uVar7;

  ulong uVar8;

  dispatch_time_t dVar9;

  undefined8 extraout_x1;

  long lVar10;

  bool bVar11;

  undefined1 auVar12 [16];

  undefined *local_a8;

  undefined8 local_a0;

  code *local_98;

  undefined *puStack_90;

  undefined1 auStack_88 [8];

  int local_80;

  undefined1 auStack_78 [8];

  

  _objc_retain();

  iVar3 = DAT_003ead58;

  if (((param_1 == 0) || ((DAT_003eaa30 & 1) == 0)) || ((DAT_003ead50 & 1) != 0)) goto LAB_0020b314;

  if (DAT_003ead58 == 0) goto LAB_0020b314;

  _objc_getAssociatedObject(param_1,&DAT_003eaf12);

  auVar12 = _objc_retainAutoreleasedReturnValue();

  uVar7 = auVar12._8_8_;

  lVar6 = auVar12._0_8_;

  if ((lVar6 == 0) || (iVar5 = FUN_002a5a00(lVar6), uVar7 = extraout_x1, iVar5 != iVar3)) {

    FUN_00299460(&_OBJC_CLASS___NSNumber,uVar7,iVar3);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_1,&DAT_003eaf12,uVar7,1);

    _objc_release(uVar7);

    _objc_retain(param_1);

    if ((DAT_003eaa30 == 1) && ((DAT_003ead50 & 1) == 0)) {

      uVar7 = _sel_registerName("reloadSessions");

      uVar8 = _objc_opt_respondsToSelector(param_1,uVar7);

      if ((uVar8 & 1) == 0) goto LAB_0020b238;

      _objc_msgSend(param_1,uVar7);

      _objc_release(param_1);

      FUN_00223934(param_1);

      FUN_0021e588(param_1);

    }

    else {

LAB_0020b238:

      _objc_release(param_1);

      FUN_002239ac(param_1,iVar3,1);

    }

    _objc_initWeak(auStack_78,param_1);

    puVar2 = PTR___dispatch_main_q_00388740;

    puVar1 = PTR___NSConcreteStackBlock_003886f0;

    lVar10 = 0;

    bVar4 = true;

    do {

      bVar11 = bVar4;

      dVar9 = _dispatch_time(0,(long)((double)(&DAT_0030eba8)[lVar10] * 1000000000.0));

      local_a8 = puVar1;

      local_a0 = 0xc2000000;

      local_98 = FUN_00223a88;

      puStack_90 = &DAT_0038f538;

      _objc_copyWeak(auStack_88,auStack_78);

      local_80 = iVar3;

      _dispatch_after(dVar9,puVar2,&local_a8);

      _objc_destroyWeak(auStack_88);

      lVar10 = 1;

      bVar4 = false;

    } while (bVar11);

    _objc_destroyWeak(auStack_78);

  }

  _objc_release(lVar6);

LAB_0020b314:

  _objc_release(param_1);

  return;

}




