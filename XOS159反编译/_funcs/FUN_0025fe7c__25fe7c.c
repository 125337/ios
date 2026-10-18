// FUN_0025fe7c @0x25fe7c


void FUN_0025fe7c(long param_1,undefined8 param_2)



{

  long lVar1;

  

  FUN_0029efa0(*(undefined8 *)(param_1 + 0x20),param_2,1,&cf_xzyHomeBottomBarStyleMode);

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x20));

  FUN_00240480();

  FUN_002995c0(*(undefined8 *)(param_1 + 0x28));

  lVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar1 != 0) {

    FUN_002995c0(*(undefined8 *)(param_1 + 0x28));

    lVar1 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar1 + 0x10))();

    _objc_release(lVar1);

  }

  FUN_0029b140(*(undefined8 *)(param_1 + 0x30));

  return;

}




