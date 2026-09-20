// FUN_00038c30 @ 00038c30

void FUN_00038c30(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_18 != 0) &&
     (lVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     lVar1 != 0)) {
    lVar1 = local_20;
    FUN_00039044();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    _NSSelectorFromString();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,lVar2);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,lVar2,param_3 & 1);
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

