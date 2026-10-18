// FUN_001ca7ec @0x1ca7ec


undefined8 FUN_001ca7ec(long param_1)



{

  int iVar1;

  long lVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 extraout_x1;

  undefined8 uVar5;

  undefined1 auVar6 [16];

  undefined8 local_58;

  double local_50;

  undefined8 local_48;

  undefined8 local_40;

  undefined8 local_38;

  

  _objc_retain();

  if (param_1 == 0) {

    uVar5 = 0;

    goto LAB_001ca924;

  }

  lVar2 = _objc_loadWeakRetained(&DAT_003ead70);

  if (param_1 == lVar2) {

    lVar4 = _objc_loadWeakRetained(&DAT_003ead70);

    _objc_release();

    _objc_release(lVar2);

    if (lVar4 != 0) {

      uVar5 = 1;

      goto LAB_001ca924;

    }

  }

  else {

    _objc_release(lVar2);

  }

  _objc_retain(param_1);

  FUN_00293e40(&_OBJC_CLASS___UITraitCollection);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b8e0(param_1,auVar6._8_8_,auVar6._0_8_);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(param_1);

  _objc_release(auVar6._0_8_);

  local_40 = 0;

  local_38 = 0;

  local_50 = 0.0;

  local_48 = 0;

  auVar6 = FUN_00295ac0(uVar3,extraout_x1,&local_38,&local_40,&local_48,&local_50);

  if ((auVar6._0_8_ & 1) == 0) {

    local_58 = 0;

    iVar1 = FUN_00295bc0(uVar3,auVar6._8_8_,&local_58,&local_50);

    if (iVar1 != 0) {

      local_48 = local_58;

      local_40 = local_58;

      local_38 = local_58;

      goto LAB_001ca8bc;

    }

LAB_001ca8d0:

    uVar5 = 0;

  }

  else {

LAB_001ca8bc:

    if (local_50 < 0.1) goto LAB_001ca8d0;

    _objc_storeWeak(&DAT_003ead70,param_1);

    uVar5 = 1;

  }

  _objc_release(uVar3);

LAB_001ca924:

  _objc_release(param_1);

  return uVar5;

}




