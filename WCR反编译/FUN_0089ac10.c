// FUN_0089ac10 @ 0089ac10

void FUN_0089ac10(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_48 [3];
  ulong local_30;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028cdce8)(param_1,param_2);
  uVar1 = local_18;
  FUN_008a4394(local_18,PTR_s_currentBrowserView_026a9818);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  FUN_008a4394(uVar1,PTR_s_assetInfo_026a97f8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_18;
  local_30 = uVar1;
  FUN_008a4394(local_18,PTR_s_m_delegate_0269d0e0);
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = uVar2;
  if (local_30 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_respondsToSelector__026ca818,
               PTR_s_indexInSelectedAssetInfosForAsse_026a9820);
    if ((uVar2 & 1) != 0) {
      uVar1 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48[0],PTR_s_indexInSelectedAssetInfosForAsse_026a9820,local_30);
      if (-1 < (long)uVar1) {
        FUN_008a48cc(local_18,local_30);
      }
    }
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

