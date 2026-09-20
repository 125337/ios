// FUN_003df9e8 @ 003df9e8

void FUN_003df9e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  if ((local_18 != 0) &&
     (lVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     lVar1 != 0)) {
    lVar1 = local_20;
    _NSSelectorFromString();
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,lVar1);
    if ((uVar2 & 1) != 0) {
      if (local_28 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,lVar1);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,lVar1,local_28);
      }
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

