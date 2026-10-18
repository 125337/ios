// FUN_001e65c0 @0x1e65c0


void FUN_001e65c0(void)



{

  cfstringStruct *pcVar1;

  cfstringStruct *pcVar2;

  long lVar3;

  undefined8 uVar4;

  

  lVar3 = FUN_00297fa0(DAT_003ea988);

  pcVar1 = &cf_E5E5EA;

  if (lVar3 != 0) {

    pcVar1 = DAT_003ea988;

  }

  _objc_retain(pcVar1);

  lVar3 = FUN_00297fa0(DAT_003ea990);

  pcVar2 = &cf_2C2C2E;

  if (lVar3 != 0) {

    pcVar2 = DAT_003ea990;

  }

  FUN_00214474(pcVar1,pcVar2);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(pcVar1);

  _objc_autoreleaseReturnValue(uVar4);

  return;

}




