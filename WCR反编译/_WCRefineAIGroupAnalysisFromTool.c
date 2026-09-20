// _WCRefineAIGroupAnalysisFromTool @ 00017528

void _WCRefineAIGroupAnalysisFromTool(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  uint local_30;
  undefined *local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar3 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_groupChatAnalysisEnabled_0269d010);
  if (((ulong)puVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ);
    local_30 = 1;
  }
  else {
    puVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isChatProviderConfigured_0269ce90);
    if (((ulong)puVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ_W_jW_N__b__jWMn_
                );
      local_30 = 1;
    }
    else {
      uVar4 = local_18;
      FUN_00016f40();
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_hasSuffix__0269d018,&cf__chatroom);
      bVar1 = (uVar4 & 1) != 0;
      if (bVar1) {
        uVar4 = local_18;
        FUN_00017874();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR___dispatch_main_q_02578680;
        local_40 = uVar4;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_40;
        local_70 = PTR___NSConcreteStackBlock_02578660;
        local_68 = 0xc2000000;
        local_64 = 0;
        local_60 = FUN_00017cf4;
        local_58 = &DAT_02578e60;
        (*(code *)PTR__objc_retain_02578638)();
        uVar2 = local_38;
        local_50 = uVar4;
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = uVar2;
        _dispatch_async(puVar3,&local_70);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        _objc_storeStrong(&local_48);
        _objc_storeStrong(&local_50,0);
        _objc_storeStrong(&local_40,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__J);
      }
      local_30 = (uint)!bVar1;
      _objc_storeStrong(&local_38,0);
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

