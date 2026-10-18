// FUN_00244e10 @0x244e10


undefined1  [16] FUN_00244e10(undefined8 param_1,long param_2)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined1 auVar3 [16];

  undefined8 uVar4;

  undefined8 uVar5;

  undefined1 auVar6 [16];

  

  _objc_retain(param_2);

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e7258);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar6._0_8_,auVar6._8_8_,&DAT_00002455);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if ((param_2 == 0) || (lVar1 == 0)) {

    FUN_002925a0(param_2);

    auVar3 = _CGRectGetMidX();

    uVar5 = auVar3._8_8_;

    uVar4 = auVar3._0_8_;

    FUN_002925a0(param_2);

    _CGRectGetMaxY();

  }

  else {

    FUN_002a4880(lVar1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_00292ae0(lVar1);

    auVar3 = FUN_002936e0(uVar2,extraout_x1,param_2);

    uVar5 = auVar3._8_8_;

    uVar4 = auVar3._0_8_;

    _objc_release(uVar2);

  }

  _objc_release(lVar1);

  _objc_release(auVar6._0_8_);

  _objc_release(param_2);

  auVar6._8_8_ = uVar5;

  auVar6._0_8_ = uVar4;

  return auVar6;

}




