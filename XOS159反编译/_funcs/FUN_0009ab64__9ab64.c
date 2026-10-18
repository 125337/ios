// FUN_0009ab64 @0x9ab64


undefined8 FUN_0009ab64(undefined8 param_1,undefined8 param_2)



{

  byte bVar1;

  undefined *puVar2;

  byte bVar3;

  int iVar4;

  int iVar5;

  int iVar6;

  int iVar7;

  int iVar8;

  uint uVar9;

  ulong uVar10;

  long lVar11;

  undefined8 uVar12;

  long lVar13;

  undefined8 uVar14;

  undefined8 extraout_x1;

  undefined1 auVar15 [16];

  undefined *local_90;

  undefined8 local_88;

  code *local_80;

  undefined *puStack_78;

  undefined8 local_70;

  undefined1 local_68;

  

  uVar10 = FUN_000a89d8();

  if ((uVar10 & 1) == 0) {

                    /* WARNING: Could not recover jumptable at 0x0009ac24. Too many branches */

                    /* WARNING: Treating indirect jump as call */

    uVar12 = (*DAT_003e78a0)(param_1,param_2);

    return uVar12;

  }

  if (0 < DAT_003e7b40) {

    auVar15 = (*DAT_003e78a0)(param_1,param_2);

    puVar2 = PTR_LOOP_003e64a0;

    uVar12 = auVar15._0_8_;

    FUN_00299380(&_OBJC_CLASS___NSNumber,auVar15._8_8_,uVar12);

    lVar11 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_1,puVar2,lVar11,1);

    goto LAB_0009af08;

  }

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e5ce0);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  bVar3 = FUN_002924e0();

  _objc_release(uVar12);

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e5cc8);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  iVar4 = FUN_002924e0();

  _objc_release(uVar12);

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e5cc0);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  iVar5 = FUN_002924e0();

  _objc_release(uVar12);

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e6478);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  iVar6 = FUN_002924e0();

  _objc_release(uVar12);

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e5cd0);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  iVar7 = FUN_002924e0();

  _objc_release(uVar12);

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e5cd8);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  iVar8 = FUN_002924e0();

  bVar1 = bVar3 | 2;

  if (iVar4 == 0) {

    bVar1 = bVar3;

  }

  bVar3 = bVar1 | 4;

  if (iVar5 == 0) {

    bVar3 = bVar1;

  }

  bVar1 = bVar3 | 8;

  if (iVar6 == 0) {

    bVar1 = bVar3;

  }

  bVar3 = bVar1 | 0x10;

  if (iVar7 == 0) {

    bVar3 = bVar1;

  }

  _objc_release(uVar12);

  bVar1 = bVar3 | 0x20;

  if (iVar8 == 0) {

    bVar1 = bVar3;

  }

  if (((DAT_003e7a2e & 1) == 0) && ((DAT_003e7a2f & 1) == 0)) {

LAB_0009adf4:

    auVar15 = (*DAT_003e78a0)(param_1,param_2);

    puVar2 = PTR_LOOP_003e64a0;

    FUN_00299380(&_OBJC_CLASS___NSNumber,auVar15._8_8_,auVar15._0_8_);

    uVar12 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_1,puVar2,uVar12,1);

    _objc_release(uVar12);

    local_90 = PTR___NSConcreteStackBlock_003886f0;

    local_88 = 0xc0000000;

    local_80 = FUN_000b64ec;

    puStack_78 = &DAT_0038b1d8;

    local_68 = auVar15[0];

    local_70 = param_1;

    lVar11 = _objc_retainBlock(&local_90);

    auVar15 = (**(code **)(lVar11 + 0x10))();

    puVar2 = PTR_LOOP_003e64e0;

    uVar12 = auVar15._0_8_;

    FUN_00299380(&_OBJC_CLASS___NSNumber,auVar15._8_8_,uVar12);

    uVar14 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_1,puVar2,uVar14,1);

    _objc_release(uVar14);

    puVar2 = PTR_LOOP_003e65a8;

    FUN_00299440(&_OBJC_CLASS___NSNumber,extraout_x1,bVar1);

    lVar13 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_1,puVar2,lVar13,1);

  }

  else {

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e65a8);

    lVar11 = _objc_retainAutoreleasedReturnValue();

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e64e0);

    lVar13 = _objc_retainAutoreleasedReturnValue();

    if ((lVar11 == 0) || ((lVar13 == 0 || (uVar9 = FUN_002a59e0(lVar11), uVar9 != bVar1)))) {

      _objc_release(lVar13);

      _objc_release(lVar11);

      goto LAB_0009adf4;

    }

    uVar12 = FUN_002924e0(lVar13);

  }

  _objc_release(lVar13);

LAB_0009af08:

  _objc_release(lVar11);

  return uVar12;

}




