// FUN_009c0574 @ 009c0574

byte FUN_009c0574(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  FUN_009c0a40();
  local_11 = 1;
  if ((uVar1 & 1) != 0) {
    lVar2 = local_28;
    FUN_009af3fc();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = lVar3 != 0;
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

