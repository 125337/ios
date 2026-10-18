// FUN_001941b8 @0x1941b8


void FUN_001941b8(ulong param_1)



{

  undefined8 uVar1;

  cfstringStruct *pcVar2;

  long lVar3;

  cfstringStruct *pcVar4;

  undefined1 auVar5 [16];

  

  if (param_1 < 10) {

    pcVar4 = (cfstringStruct *)(&PTR_cf_Z__0038e310)[param_1];

  }

  else if ((long)param_1 < 10) {

    pcVar4 = &cf_Z_;

  }

  else {

    FUN_001aaf74();

    uVar1 = _objc_retainAutoreleasedReturnValue();

    auVar5 = FUN_00293860();

    if ((long)(param_1 - 10) < auVar5._0_8_) {

      FUN_00299500(uVar1,auVar5._8_8_,param_1 - 10);

      auVar5 = _objc_retainAutoreleasedReturnValue();

      FUN_00299540(auVar5._0_8_,auVar5._8_8_,&cf_name);

      pcVar2 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      _objc_release(auVar5._0_8_);

      lVar3 = FUN_00297fa0(pcVar2);

      pcVar4 = &cf__IN;

      if (lVar3 != 0) {

        pcVar4 = pcVar2;

      }

      _objc_retain(pcVar4);

      _objc_release(pcVar2);

    }

    else {

      pcVar4 = &cf__IN_1YHe;

    }

    _objc_release(uVar1);

  }

  _objc_autoreleaseReturnValue(pcVar4);

  return;

}




