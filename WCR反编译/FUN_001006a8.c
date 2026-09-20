// FUN_001006a8 @ 001006a8

void FUN_001006a8(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong local_50;
  ulong local_40;
  ulong local_18;
  
  puVar4 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar4,param_1);
  FUN_000f915c();
  puVar5 = puVar4;
  _WCRefineChatPositionFeatureAllowed();
  bVar2 = false;
  bVar1 = false;
  bVar3 = true;
  if (((((ulong)puVar5 & 1) != 0) && (bVar3 = true, ((ulong)puVar4 & 0x100) != 0)) &&
     (bVar3 = true, ((ulong)puVar4 & 0x10000) == 0)) {
    uVar6 = local_18;
    FUN_000f91dc();
    bVar3 = true;
    if ((uVar6 & 1) == 0) {
      local_40 = local_18;
      FUN_00100134();
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      local_50 = local_40;
      FUN_000fffb4();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      bVar3 = local_50 == 0;
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (!bVar3) {
    FUN_000fa894(local_18,1);
    FUN_000faaac(0x4010000000000000,local_18,1);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

