// dockList_liftTextForStyle: @0x25e1e4


/* Function Stack Size: 0x18 bytes */



ID XZYHomeDockCustomStyleListController::dockList_liftTextForStyle_

             (ID param_1,SEL param_2,ID param_3)



{

  cfstringStruct *pcVar1;

  ID IVar2;

  undefined8 extraout_x1;

  double dVar3;

  

  _objc_retain(param_3);

  dVar3 = (double)FUN_0024e5a8(param_3);

  if (dVar3 <= 0.05) {

    pcVar1 = &cf_MOn_;

  }

  else {

    pcVar1 = &cf_Ny;

    if (0.05 <= ABS(dVar3 - (double)(long)dVar3)) {

      pcVar1 = &cf_Ny;

    }

    FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,pcVar1);

    pcVar1 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  }

  _objc_release(param_3);

  IVar2 = _objc_autoreleaseReturnValue(pcVar1);

  return IVar2;

}




