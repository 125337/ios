// FUN_000050c0 @0x50c0


bool FUN_000050c0(undefined8 param_1)



{

  bool bVar1;

  double dVar2;

  

  _objc_retain();

  dVar2 = (double)FUN_0001cc90(param_1,&cf_mesMsgMergeMessageOffsetOther);

  if (ABS(dVar2 + -46.0) <= 0.001) {

    dVar2 = (double)FUN_0001cc90(param_1,&cf_mesMsgMergeMessageOffsetSelf);

    bVar1 = 0.001 < ABS(dVar2 + -46.0);

  }

  else {

    bVar1 = true;

  }

  _objc_release(param_1);

  return bVar1;

}




