// FUN_003b7c38 @ 003b7c38

byte FUN_003b7c38(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte local_30;
  undefined8 local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  uVar2 = 0;
  local_30 = 0;
  if (lVar1 != 0) {
    FUN_003b4c6c(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_30 = (byte)uVar3;
    local_28 = uVar2;
  }
  local_11 = local_30 & 1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

