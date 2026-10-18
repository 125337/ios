// FUN_0012d9bc @0x12d9bc


void FUN_0012d9bc(void)



{

  long *plVar1;

  int iVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  

  FUN_0012da64();

  if (DAT_003e8561 == '\x01') {

    iVar2 = FUN_001331c4();

    plVar1 = &DAT_003e8518;

    if (iVar2 == 0) {

      plVar1 = &DAT_003e8510;

    }

    lVar5 = *plVar1;

    _objc_retain(lVar5);

    if ((lVar5 == 0) || (lVar3 = FUN_00297fa0(lVar5), lVar3 == 0)) {

      uVar4 = 0;

    }

    else {

      FUN_0012dd08(lVar5);

      uVar4 = _objc_retainAutoreleasedReturnValue();

    }

    _objc_release(lVar5);

  }

  else {

    uVar4 = 0;

  }

  _objc_autoreleaseReturnValue(uVar4);

  return;

}




