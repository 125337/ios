// FUN_0024cb14 @0x24cb14


/* WARNING: Removing unreachable block (ram,0x0024cbd8) */



void FUN_0024cb14(undefined8 param_1,undefined8 param_2)



{

  code *pcVar1;

  long lVar2;

  

  _objc_retain();

  pcVar1 = DAT_003eb2e8;

  _objc_getAssociatedObject(param_1,&DAT_003eb2e0);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_setAssociatedObject(param_1,&DAT_003eb2e0,PTR____kCFBooleanTrue_00388320,1);

  if (pcVar1 != (code *)0x0 && pcVar1 != FUN_0024cb14) {

    (*pcVar1)(param_1,param_2);

  }

  if (lVar2 == 0) {

    FUN_0023d46c(param_1);

  }

  _objc_setAssociatedObject(param_1,&DAT_003eb2e0,lVar2,1);

  _objc_release(lVar2);

  _objc_release(param_1);

  return;

}




