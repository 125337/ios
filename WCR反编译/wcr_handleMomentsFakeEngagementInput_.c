// wcr_handleMomentsFakeEngagementInput: @ 0155bf6c

/* Function Stack Size: 0x18 bytes */

void WCRefineTopBarProfileCardPresenter::wcr_handleMomentsFakeEngagementInput_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_70;
  ulong local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  uint local_3c;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar5 = DAT_028e3920;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = DAT_028e39b8;
  local_30 = uVar5;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = uVar2;
  if ((local_30 == 0) && (local_28 != 0)) {
    uVar2 = local_28;
    _objc_getAssociatedObject(local_28,DAT_028c5f48);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_30;
    local_30 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar5);
    uVar2 = local_28;
    _objc_getAssociatedObject(local_28,DAT_028c5f50);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_38;
    local_38 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar5);
  }
  _objc_storeStrong(&DAT_028e3920,0);
  DAT_028e39b8 = 0;
  if (local_28 != 0) {
    _objc_setAssociatedObject(local_28,DAT_028c5f48,0,1);
    _objc_setAssociatedObject(local_28,DAT_028c5f50,0,0);
  }
  if (local_30 == 0) {
    local_3c = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_momentsFakeLikeCount_026a4e70);
    puVar4 = local_48;
    local_50 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_momentsFakeCommentCount_026a4e78);
    local_58 = puVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = &::cf___;
    uVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
    if ((uVar5 & 1) != 0) {
      uVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_68 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar5 & 1) != 0) {
        _objc_storeStrong(&local_60,local_68);
      }
      _objc_storeStrong(&local_68,0);
    }
    pcVar6 = local_60;
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar6 = local_70;
    FUN_0155c340();
    bVar1 = ((ulong)pcVar6 & 1) == 0;
    if (bVar1) {
      FUN_0155cd98(local_60,local_50,local_58,&local_50,&local_58);
      _WCRefineApplyManualFakeEngagementToDataItem(local_30,local_50,local_58);
      FUN_0155c7d4(local_38,0);
    }
    else {
      _WCRefineCancelManualFakeEngagementForDataItem(local_30);
      FUN_0155c7d4(local_38,0);
    }
    local_3c = (uint)!bVar1;
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

