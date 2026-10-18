// FUN_0018b7e8 @0x18b7e8


void FUN_0018b7e8(undefined8 param_1)



{

  long lVar1;

  

  _objc_retain();

  _objc_getAssociatedObject(param_1,"xzyShadowContainer");

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 != 0) {

    FUN_0029b340(lVar1);

    _objc_setAssociatedObject(param_1,"xzyShadowContainer",0,1);

    _objc_setAssociatedObject(param_1,"xzyShadowInner",0,1);

  }

  _objc_release(lVar1);

  _objc_release(param_1);

  return;

}




