// FUN_0088ed68 @ 0088ed68

void FUN_0088ed68(ulong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  ulong uVar3;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  undefined8 *puVar2;
  
  puVar2 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar2,param_3);
  uVar1 = (uint)puVar2;
  FUN_0088eea4();
  if ((uVar1 & 1) != 0) {
    uVar3 = local_18;
    FUN_0088f004();
    if ((uVar3 & 1) == 0) {
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_recentForwardScrollView_026a91d0);
      _objc_retainAutoreleasedReturnValue();
      FUN_0088f1d8();
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
  }
  (*DAT_028cd900)(local_18,local_20,local_28,param_4 & 1);
  _objc_storeStrong(&local_28,0);
  return;
}

