// _WCRefineAIReplyFromCell @ 00010c28

void _WCRefineAIReplyFromCell(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_120;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [8];
  undefined *local_a0;
  undefined *local_98;
  ulong local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  ulong local_70;
  char *local_68;
  undefined1 auStack_60 [8];
  undefined *local_58;
  ulong local_50;
  ulong local_48;
  undefined4 local_40;
  undefined *local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  puVar2 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isChatProviderConfigured_0269ce90);
  if (((ulong)puVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ_W_jW_N__b__jWMn_);
    local_40 = 1;
  }
  else {
    uVar3 = local_28;
    FUN_0000ffec();
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar3;
    FUN_00010978();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
    if (uVar3 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__gS0ReW_Q_);
      local_40 = 1;
    }
    else {
      puVar2 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,
                 &cf_ck_WubVY_);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_28;
      puVar4 = PTR__OBJC_CLASS___UIResponder_026ce050;
      local_58 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIResponder_026ce050,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((uVar3 & 1) == 0) {
        local_120 = 0;
      }
      else {
        local_120 = local_28;
      }
      _objc_initWeak(auStack_60,local_120);
      pcVar5 = "SettingUtil";
      _objc_getClass();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_getLocalUsrName__0269ce98,0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_48;
      local_68 = pcVar5;
      FUN_00010240(local_48,pcVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_30;
      local_70 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_effectiveSessionOptionsForID__0269cea0,uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_30;
      local_78 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_chatReplyMaxChars_0269ceb0);
      puVar2 = PTR_WCRefineAIStore_026ce048;
      puVar6 = local_78;
      local_80 = puVar4;
      FUN_000114a8(local_78,local_30);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_promptByApplyingMaxChars_toPromp_0269ceb8,puVar4);
      _objc_retainAutoreleasedReturnValue();
      local_88 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      uVar3 = local_48;
      FUN_00011760();
      _objc_retainAutoreleasedReturnValue();
      local_90 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
      if (uVar3 == 0) {
        uVar7 = local_48;
        FUN_00011dac();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_90;
        local_90 = uVar7;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      uVar3 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
      if (uVar3 == 0) {
        _objc_storeStrong(&local_90,local_50);
      }
      uVar1 = local_48;
      pcVar5 = local_68;
      uVar7 = local_70;
      uVar3 = local_90;
      uVar8 = local_48;
      FUN_00011760();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      (*(code *)PTR__objc_msgSend_02578628)();
      FUN_00012158(uVar9,uVar3,uVar1,uVar7,pcVar5,uVar9 != 0);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = local_90;
      local_90 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar7);
      (*(code *)PTR__objc_release_02578630)(uVar8);
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_9hncag_Omo_ub);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_58;
      puVar2 = local_88;
      uVar3 = local_90;
      local_d0 = PTR___NSConcreteStackBlock_02578660;
      local_c8 = 0xc2000000;
      local_c4 = 0;
      local_c0 = FUN_00012974;
      local_b8 = &DAT_02578e00;
      local_98 = puVar6;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar4;
      local_a0 = local_80;
      _objc_copyWeak(auStack_a8,auStack_60);
      FUN_00012840(puVar6,uVar3,puVar2,&local_d0);
      _objc_unsafeClaimAutoreleasedReturnValue(puVar6);
      _objc_destroyWeak(auStack_a8);
      _objc_storeStrong(&local_b0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
      _objc_destroyWeak(auStack_60);
      _objc_storeStrong(&local_58,0);
      local_40 = 0;
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

