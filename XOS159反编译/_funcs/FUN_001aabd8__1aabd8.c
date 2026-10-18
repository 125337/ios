// FUN_001aabd8 @0x1aabd8


void FUN_001aabd8(undefined1 param_1 [16],double param_2,long param_3)



{

  int iVar1;

  long lVar2;

  ulong uVar3;

  dispatch_time_t dVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  bool bVar7;

  undefined8 uVar8;

  double dVar9;

  double dVar10;

  undefined1 auVar11 [16];

  undefined *local_b0;

  undefined8 local_a8;

  code *local_a0;

  undefined *puStack_98;

  undefined1 auStack_90 [8];

  undefined *local_88;

  undefined8 local_80;

  code *local_78;

  undefined *puStack_70;

  long local_68;

  

  lVar2 = _objc_loadWeakRetained(param_3 + 0x20);

  if ((lVar2 == 0) && (lVar2 = _objc_loadWeakRetained(&DAT_003e9500), lVar2 == 0)) {

    DAT_003e96c8 = 0;

    DAT_003e96c9 = 0;

    goto LAB_001aae4c;

  }

  uVar3 = FUN_00297780(lVar2);

  if (((uVar3 & 1) != 0) || (iVar1 = FUN_002976e0(lVar2), iVar1 != 0)) {

    DAT_003e96c8 = 0;

    DAT_003e96c9 = 1;

    if ((DAT_003e96ca & 1) == 0) {

      DAT_003e96ca = 1;

      _objc_initWeak(&local_88,lVar2);

      dVar4 = _dispatch_time(0,180000000);

      local_b0 = PTR___NSConcreteStackBlock_003886f0;

      local_a8 = 0xc2000000;

      local_a0 = FUN_001aaedc;

      puStack_98 = &DAT_0038a150;

      _objc_copyWeak(auStack_90,&local_88);

      _dispatch_after(dVar4,PTR___dispatch_main_q_00388740,&local_b0);

      _objc_destroyWeak(auStack_90);

      _objc_destroyWeak(&local_88);

    }

    goto LAB_001aae4c;

  }

  DAT_003e96c9 = 0;

  _objc_retain(lVar2);

  uVar8 = FUN_002935e0(lVar2);

  dVar9 = param_2;

  FUN_002967c0(lVar2);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  lVar6 = FUN_00293860();

  dVar10 = 0.0;

  if (lVar6 == 0) {

    lVar6 = 0;

LAB_001aad68:

    bVar7 = true;

  }

  else {

    FUN_00295440(uVar5);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    lVar6 = auVar11._0_8_;

    if (lVar6 == 0) goto LAB_001aad68;

    FUN_0029ae00(lVar2,auVar11._8_8_,lVar6);

    bVar7 = false;

    dVar10 = param_2 - dVar9;

  }

  local_88 = PTR___NSConcreteStackBlock_003886f0;

  local_80 = 0xc2000000;

  local_78 = FUN_001aaf4c;

  puStack_70 = &DAT_00388e60;

  _objc_retain(lVar2);

  local_68 = lVar2;

  FUN_00299ce0(&_OBJC_CLASS___UIView,extraout_x1,&local_88);

  if (bVar7) {

    FUN_002935e0(lVar2);

    if (0.5 < ABS(dVar9 - param_2)) {

      FUN_0029d6e0(uVar8,param_2,lVar2);

    }

  }

  else {

    FUN_0029ae00(lVar2,extraout_x1_00,lVar6);

    if (0.5 < ABS((dVar10 + dVar9) - param_2)) {

      FUN_0029d6e0(uVar8,lVar2);

    }

  }

  _objc_release(local_68);

  _objc_release(lVar6);

  _objc_release(uVar5);

  _objc_release(lVar2);

  DAT_003e96c8 = 0;

  _objc_storeWeak(&DAT_003e9500,0);

LAB_001aae4c:

  _objc_release(lVar2);

  return;

}




