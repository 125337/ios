// FUN_00273278 @0x273278


void FUN_00273278(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,

                 undefined8 *param_5,undefined8 *param_6)



{

  undefined8 *puVar1;

  int iVar2;

  long lVar3;

  ulong uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  undefined8 uVar7;

  double dVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined1 auVar13 [16];

  undefined1 auVar14 [16];

  undefined8 local_a0;

  undefined8 uStack_98;

  undefined8 uStack_90;

  undefined8 uStack_88;

  undefined8 local_80;

  undefined8 uStack_78;

  

  lVar3 = _objc_loadWeakRetained(param_4 + 0x20);

  if ((lVar3 != 0) && (uVar4 = FUN_0029c480(lVar3), (uVar4 & 1) == 0)) {

    FUN_00292180(&_OBJC_CLASS___CATransaction);

    FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1,1);

    FUN_002a5120(lVar3);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    uVar6 = FUN_00290f60();

    FUN_00299100(lVar3);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1e00(auVar13._0_8_,auVar13._8_8_,uVar6);

    FUN_0029c3c0(lVar3);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1e00(auVar14._0_8_,auVar14._8_8_,uVar6);

    _objc_release(auVar14._0_8_);

    _objc_release(auVar13._0_8_);

    _objc_release(uVar5);

    FUN_0029c3c0(lVar3);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d320(param_1,param_2);

    _objc_release(uVar5);

    FUN_0029c3e0(lVar3);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d320(param_1,param_2);

    _objc_release(uVar5);

    uStack_98 = param_5[1];

    local_a0 = *param_5;

    uStack_88 = param_5[3];

    uStack_90 = param_5[2];

    uStack_78 = param_5[5];

    local_80 = param_5[4];

    FUN_0029c3c0(lVar3);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_0029f580(auVar13._0_8_,auVar13._8_8_,&local_a0);

    _objc_release(auVar13._0_8_);

    FUN_0029c3c0(lVar3);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    iVar2 = FUN_00294680();

    puVar1 = (undefined8 *)PTR__CGAffineTransformIdentity_00388998;

    if (iVar2 == 0) {

      puVar1 = param_5;

    }

    uVar9 = puVar1[1];

    uVar6 = *puVar1;

    uVar12 = puVar1[3];

    uVar11 = puVar1[2];

    uVar10 = puVar1[5];

    uVar7 = puVar1[4];

    FUN_0029c3e0(lVar3);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    local_a0 = uVar6;

    uStack_98 = uVar9;

    uStack_90 = uVar11;

    uStack_88 = uVar12;

    local_80 = uVar7;

    uStack_78 = uVar10;

    FUN_002a21c0(auVar13._0_8_,auVar13._8_8_,&local_a0);

    _objc_release(auVar13._0_8_);

    _objc_release(uVar5);

    uStack_98 = param_6[1];

    local_a0 = *param_6;

    uStack_88 = param_6[3];

    uStack_90 = param_6[2];

    uStack_78 = param_6[5];

    local_80 = param_6[4];

    FUN_00299100(lVar3);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_0029f580(auVar13._0_8_,auVar13._8_8_,&local_a0);

    _objc_release(auVar13._0_8_);

    FUN_00299180(lVar3);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d140(0,0,0x4065000000000000,0x4048000000000000);

    _objc_release(uVar5);

    FUN_00299100(lVar3);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    dVar8 = (double)_CGRectGetHeight();

    FUN_00299180(lVar3);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a07e0(param_1,dVar8 * 0.48);

    _objc_release(uVar6);

    _objc_release(uVar5);

    FUN_002a5120(lVar3);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    dVar8 = (double)FUN_00296120();

    FUN_00299180(lVar3);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a0400((float)dVar8);

    _objc_release(uVar6);

    _objc_release(uVar5);

    FUN_002a5de0(param_3,lVar3);

    FUN_002930a0(&_OBJC_CLASS___CATransaction);

  }

  _objc_release(lVar3);

  return;

}




