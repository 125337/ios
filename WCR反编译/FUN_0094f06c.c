// FUN_0094f06c @ 0094f06c

bool FUN_0094f06c(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  FUN_009463a8();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = false;
  if ((uVar3 & 1) != 0) {
    uVar3 = local_18;
    FUN_00961580();
    bVar1 = uVar3 == 0x22;
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(&local_18,0);
  return bVar1;
}

