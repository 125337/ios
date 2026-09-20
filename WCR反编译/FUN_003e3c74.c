// FUN_003e3c74 @ 003e3c74

byte FUN_003e3c74(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte local_84;
  undefined8 local_48;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    uVar2 = local_20;
    _object_getClass();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 1;
    local_30 = uVar2;
    FUN_003e24b4();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8);
    uVar4 = local_30;
    local_84 = 1;
    bVar1 = (uVar2 & 1) == 0;
    if (bVar1) {
      local_48 = 4;
      FUN_003e24b4();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isEqualToString__0269ccc8);
      local_84 = (byte)uVar4;
    }
    local_11 = local_84 & 1;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

