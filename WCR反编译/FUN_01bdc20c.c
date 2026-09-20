// FUN_01bdc20c @ 01bdc20c

byte FUN_01bdc20c(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  byte local_50;
  ulong local_48;
  ulong local_28;
  undefined8 local_20;
  byte local_11;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  uVar2 = local_28;
  FUN_01bc758c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_50 = 0;
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    local_48 = local_28;
    FUN_01bc7610();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = (byte)uVar3;
  }
  local_11 = local_50 & 1;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(&local_28,0);
  return local_11 & 1;
}

