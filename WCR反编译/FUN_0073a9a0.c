// FUN_0073a9a0 @ 0073a9a0

void FUN_0073a9a0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_40;
  
  if (DAT_028cc540 == 0) {
    _WCRSideloadShareFixApplicationGroupIDs();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    lVar1 = DAT_028cc540;
    DAT_028cc540 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  if (DAT_028cc540 == 0) {
    local_40 = *(long *)PTR____NSArray0___02578280;
  }
  else {
    local_40 = DAT_028cc540;
  }
  _objc_retainAutoreleaseReturnValue(local_40);
  return;
}

