// _WCRSideloadShareFixPreferredHostLinked @ 01508ab4

byte _WCRSideloadShareFixPreferredHostLinked(undefined8 param_1)

{
  undefined8 uVar1;
  
  if ((DAT_028e3838 & 1) == 0) {
    DAT_028e3838 = 1;
    FUN_01508b28();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    FUN_01507c5c();
    DAT_028e3839 = (byte)uVar1;
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return DAT_028e3839 & 1;
}

