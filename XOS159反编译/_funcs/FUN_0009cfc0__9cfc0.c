// FUN_0009cfc0 @0x9cfc0


void FUN_0009cfc0(undefined8 param_1,undefined8 param_2)



{

  undefined4 uVar1;

  int iVar2;

  undefined8 uVar3;

  long lVar4;

  long lVar5;

  undefined *local_80;

  undefined8 local_78;

  code *local_70;

  undefined *puStack_68;

  undefined8 local_60;

  undefined1 auStack_58 [8];

  undefined4 local_50;

  undefined1 auStack_48 [8];

  

  FUN_000baf7c();

  FUN_000839f4(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_000856e8();

  lVar4 = _objc_retainAutoreleasedReturnValue();

  if (lVar4 == 0) {

    uVar1 = 0;

  }

  else {

    uVar1 = FUN_00298740(lVar4);

  }

  _objc_release(lVar4);

  FUN_002a6280(param_1);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  if (lVar4 != 0) {

    _objc_setAssociatedObject(lVar4,PTR_LOOP_003e6540,PTR____kCFBooleanTrue_00388320,1);

  }

  iVar2 = FUN_000a89d8();

  if (iVar2 != 0) {

    FUN_002a6280(param_1);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    if (lVar5 != 0) {

      _objc_setAssociatedObject

                (lVar5,PTR_LOOP_003e64e8,&PTR__OBJC_CLASS___NSConstantIntegerNumber_003bf890,1);

      _objc_setAssociatedObject

                (lVar5,PTR_LOOP_003e64a8,&PTR__OBJC_CLASS___NSConstantIntegerNumber_003bf890,1);

    }

    _objc_release(lVar5);

  }

  (*DAT_003e78d8)(param_1,param_2);

  FUN_000b6e80(param_1);

  FUN_000bb020(param_1);

  _objc_initWeak(auStack_48,param_1);

  local_80 = PTR___NSConcreteStackBlock_003886f0;

  local_78 = 0xc2000000;

  local_70 = FUN_000bc27c;

  puStack_68 = &DAT_0038b138;

  _objc_copyWeak(auStack_58,auStack_48);

  local_60 = uVar3;

  local_50 = uVar1;

  _objc_retain(uVar3);

  _dispatch_async(PTR___dispatch_main_q_00388740,&local_80);

  _objc_release(local_60);

  _objc_release(uVar3);

  _objc_destroyWeak(auStack_58);

  _objc_destroyWeak(auStack_48);

  _objc_release(lVar4);

  return;

}




