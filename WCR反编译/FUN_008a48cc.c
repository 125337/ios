// FUN_008a48cc @ 008a48cc

void FUN_008a48cc(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_20;
  FUN_008a4c44();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_20;
  local_20 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar5);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = local_20 == 0;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (((ulong)puVar4 & 1) == 0 || bVar1) {
    local_30 = 1;
  }
  else {
    uVar5 = local_20;
    FUN_008a4394(local_20,PTR_s_asset_026a97d0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar5;
    if ((((uVar5 == 0) || (FUN_008a47c0(uVar5,PTR_s_isLivePhoto_026a4b08,0), (uVar5 & 1) == 0)) ||
        ((uVar5 = local_38,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_canUseLivePhoto_026a97d8),
         (uVar5 & 1) != 0 &&
         (uVar5 = local_38, FUN_008a47c0(local_38,PTR_s_canUseLivePhoto_026a97d8,0),
         (uVar5 & 1) == 0)))) ||
       (uVar5 = local_38, FUN_008a47c0(local_38,PTR_s_m_isUseLivePhoto_026a97e0,0), (uVar5 & 1) != 0
       )) {
      local_30 = 1;
    }
    else {
      uVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_setM_isUseLivePhoto__026a97e8);
      if ((uVar5 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setM_isUseLivePhoto__026a97e8,1);
      }
      uVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,
                 PTR_s_onUpdateLivePhotoIconDisplayStat_026a97f0);
      if ((uVar5 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_onUpdateLivePhotoIconDisplayStat_026a97f0,local_20);
      }
      local_30 = 0;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

