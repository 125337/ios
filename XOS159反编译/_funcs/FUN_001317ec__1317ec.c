// FUN_001317ec @0x1317ec


void FUN_001317ec(undefined8 param_1,ulong param_2,undefined8 param_3)



{

  undefined *puVar1;

  long lVar2;

  long lVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  

  _objc_retain();

  _objc_retain(param_2);

  _objc_retain(param_3);

  lVar2 = FUN_00131ac4(param_1,0x1f);

  lVar3 = FUN_00131c60(param_3,0x11);

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e6ac8);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  lVar3 = lVar2 + (param_2 >> 4) + lVar3;

  if ((lVar4 != 0) && (lVar2 = FUN_002a5a20(lVar4), lVar2 == lVar3)) {

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e6ad0);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if (lVar2 != 0) goto LAB_00131938;

  }

  FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00131dc8(param_1,uVar5,param_2,param_3,0);

  lVar2 = FUN_002937a0(uVar5);

  _objc_setAssociatedObject(param_1,PTR_LOOP_003e6ad0,lVar2,1);

  puVar1 = PTR_LOOP_003e6ac8;

  FUN_00299480(&_OBJC_CLASS___NSNumber,extraout_x1,lVar3);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_setAssociatedObject(param_1,puVar1,uVar6,1);

  _objc_release(uVar6);

  _objc_release(uVar5);

LAB_00131938:

  _objc_release(lVar4);

  _objc_release(param_3);

  _objc_release(param_2);

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(lVar2);

  return;

}




