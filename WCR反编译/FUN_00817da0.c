// FUN_00817da0 @ 00817da0

void FUN_00817da0(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long local_48 [3];
  long local_30;
  ulong local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_18;
  (*DAT_028cd120)(local_18,local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  local_30 = lVar2;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = (uint)lVar3;
  local_48[0] = lVar2;
  if (((DAT_028cd231 & 1) != 0) && (local_30 != 0)) {
    uVar4 = local_28;
    FUN_00838d94();
    lVar2 = local_30;
    uVar1 = (uint)uVar4;
    if ((uVar4 & 1) != 0) {
      uVar4 = local_28;
      FUN_0083907c();
      _objc_retainAutoreleasedReturnValue();
      FUN_0080d088();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_48[0];
      local_48[0] = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar3);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      goto LAB_00817fe0;
    }
  }
  if (((((DAT_028cd232 & 1) == 0) && ((DAT_028cd233 & 1) == 0)) &&
      (_WCRFrostedBubbleEnabled(), (uVar1 & 1) == 0)) ||
     ((local_30 == 0 || (uVar4 = local_28, FUN_008394f8(), (uVar4 & 1) == 0)))) {
    lVar3 = local_30;
    FUN_0080c9e4(local_30,local_28);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_48[0];
    local_48[0] = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  else {
    lVar3 = local_30;
    FUN_00839934(local_30,local_28);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_48[0];
    local_48[0] = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
LAB_00817fe0:
  puVar5 = PTR_WCRefineBubbleCut_026ce9c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineBubbleCut_026ce9c8,PTR_s_applyCutIfNeededToImage_assetNam_026a8c88,
             local_48[0],local_28);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(puVar5);
  return;
}

