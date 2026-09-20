// FUN_00746f28 @ 00746f28

byte FUN_00746f28(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
  _class_getInstanceVariable(lVar2,"_iCurSelection");
  lVar1 = local_20;
  if (lVar2 == 0) {
    local_11 = 0;
  }
  else {
    _ivar_getOffset();
    lVar3 = local_20;
    FUN_00745c20(local_20,*(undefined4 *)(lVar1 + lVar2));
    local_11 = (byte)lVar3 & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

