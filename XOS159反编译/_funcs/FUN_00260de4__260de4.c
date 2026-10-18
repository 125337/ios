// FUN_00260de4 @0x260de4


void FUN_00260de4(long param_1)



{

  cfstringStruct *pcVar1;

  int iVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  cfstringStruct *pcVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  long lVar8;

  undefined1 auVar9 [16];

  undefined1 auVar10 [16];

  double local_58;

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  pcVar5 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar1 = &cf___;

  if (pcVar5 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar5;

  }

  _objc_retain(pcVar1);

  _objc_release(pcVar5);

  _objc_release(uVar4);

  _objc_release(uVar3);

  FUN_0029be20(&_OBJC_CLASS___NSScanner,extraout_x1,pcVar1);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  local_58 = 0.0;

  iVar2 = FUN_0029bdc0(auVar9._0_8_,auVar9._8_8_,&local_58);

  if (iVar2 == 0) {

    local_58 = 0.0;

  }

  uVar3 = NEON_fminnm(local_58,0x405e000000000000);

  if (local_58 <= 0.0) {

    uVar3 = 0;

  }

  FUN_0024d85c();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar6 = FUN_00299020();

  _objc_release(uVar4);

  lVar8 = *(long *)(param_1 + 0x30);

  auVar10 = FUN_00293860(uVar6);

  if (lVar8 < auVar10._0_8_) {

    FUN_00299500(uVar6,auVar10._8_8_,*(undefined8 *)(param_1 + 0x30));

    uVar4 = _objc_retainAutoreleasedReturnValue();

    uVar7 = FUN_00299020();

    _objc_release(uVar4);

    FUN_002993a0(uVar3,&_OBJC_CLASS___NSNumber);

    auVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_002a00a0(uVar7,auVar10._8_8_,auVar10._0_8_,&cf_overflowTop);

    _objc_release(auVar10._0_8_);

    FUN_002a0040(uVar6,extraout_x1_00,uVar7,*(undefined8 *)(param_1 + 0x30));

    FUN_0024d944(uVar6);

    if (*(char *)(param_1 + 0x38) == '\x01') {

      FUN_00240480();

    }

    FUN_002995c0(*(undefined8 *)(param_1 + 0x28));

    lVar8 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar8 != 0) {

      FUN_002995c0(*(undefined8 *)(param_1 + 0x28));

      lVar8 = _objc_retainAutoreleasedReturnValue();

      (**(code **)(lVar8 + 0x10))();

      _objc_release(lVar8);

    }

    FUN_002a4dc0(*(undefined8 *)(param_1 + 0x28));

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b140();

    _objc_release(uVar3);

    _objc_release(uVar7);

  }

  _objc_release(uVar6);

  _objc_release(auVar9._0_8_);

  _objc_release(pcVar1);

  return;

}




