// FUN_00083990 @0x83990


bool FUN_00083990(void)



{

  bool bVar1;

  int iVar2;

  long lVar3;

  

  FUN_000856e8();

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (lVar3 == 0) {

    bVar1 = false;

  }

  else {

    iVar2 = FUN_00298760(lVar3);

    bVar1 = iVar2 == 0x22;

  }

  _objc_release(lVar3);

  return bVar1;

}




