// _WCRGroupingTelegramTabSnapshotCached @ 003582b8

byte _WCRGroupingTelegramTabSnapshotCached(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  uint local_f4;
  cfstringStruct *local_f0;
  uint local_b4;
  ulong local_90;
  ulong local_80;
  cfstringStruct *local_78;
  ulong local_70;
  ulong local_68;
  byte local_59;
  ulong local_58;
  ulong local_50;
  undefined4 local_44;
  long local_40;
  long local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  if (((local_30 == 0) ||
      (lVar3 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
      lVar3 == 0)) ||
     (lVar3 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    local_21 = 0;
    local_44 = 1;
  }
  else {
    uVar4 = local_30;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_telegramTabCacheSignature_026a25b8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_59 = 0;
    local_b4 = 0;
    if (uVar5 != 0) {
      uVar5 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_telegramTabCacheSignature_026a25b8);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      local_58 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_b4 = (uint)uVar5 ^ 1;
    }
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    (*(code *)PTR__objc_release_02578630)(uVar4);
    if ((local_b4 & 1) == 0) {
      uVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_telegramTabSnapshots_026a25a8);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_snapshot);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
      local_70 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_f0 = pcVar7;
      if (pcVar7 == (cfstringStruct *)0x0) {
        local_f0 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = local_f0;
      (*(code *)PTR__objc_release_02578630)(pcVar7);
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      uVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_signature);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar2 = false;
      bVar1 = false;
      local_f4 = 1;
      if ((uVar5 & 1) != 0) {
        local_80 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_expanded);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        uVar5 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_f4 = 1;
        if (((uVar5 & 1) != 0) && (local_f4 = 1, local_70 != 0)) {
          local_90 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_entries_026a25d0);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          uVar5 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_f4 = 1;
          if (uVar5 != 0) {
            uVar5 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_budgetFallback_026a25d8);
            local_f4 = 1;
            if ((uVar5 & 1) == 0) {
              uVar5 = local_70;
              FUN_00357d1c();
              local_f4 = (uint)uVar5 ^ 1;
            }
          }
        }
      }
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      (*(code *)PTR__objc_release_02578630)(uVar4);
      local_21 = (local_f4 & 1) == 0;
      local_44 = 1;
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
    }
    else {
      local_21 = 0;
      local_44 = 1;
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

