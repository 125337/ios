// FUN_004d21f0 @ 004d21f0

ulong FUN_004d21f0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_004d2324(local_18,"m_arrSelectMsg");
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar1;
  if (uVar1 == 0) {
    uVar2 = local_18;
    FUN_004d2324(local_18,"_m_arrSelectMsg");
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_20;
    local_20 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar1 = local_20;
  FUN_004d2538();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return uVar1 & 0xffffffff;
}

