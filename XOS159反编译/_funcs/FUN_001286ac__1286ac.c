// FUN_001286ac @0x1286ac


void FUN_001286ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,

                 undefined8 param_5)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined1 auVar3 [16];

  

  _objc_retain(param_3);

  (*DAT_003e8500)(param_1,param_2,param_3,param_4,param_5);

  _objc_getAssociatedObject(param_3,&DAT_003e8509);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (((lVar1 == 0) && (FUN_0011efd4(), DAT_003e83d0 == '\x01')) && (DAT_003e8470 == 0)) {

    auVar3 = _objc_alloc(&_OBJC_CLASS___UILongPressGestureRecognizer);

    uVar2 = FUN_00296f20(auVar3._0_8_,auVar3._8_8_,param_1,"xzy_homeNameplateLongPress:");

    FUN_0029fce0(0x3fe999999999999a);

    FUN_00291140(param_3,extraout_x1,uVar2);

    _objc_setAssociatedObject(param_3,&DAT_003e8509,PTR____kCFBooleanTrue_00388320,1);

    _objc_release(uVar2);

  }

  _objc_release(lVar1);

  _objc_release(param_3);

  return;

}




