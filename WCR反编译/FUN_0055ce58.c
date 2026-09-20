// FUN_0055ce58 @ 0055ce58

void FUN_0055ce58(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_80;
  ulong local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  uint local_50;
  long local_40;
  ulong local_38;
  undefined8 local_30;
  long local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar2 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028cb548);
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar2;
  _objc_setAssociatedObject(local_28,&DAT_028cb548,0,1);
  if (local_40 == 0) {
    local_50 = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_momentsFakeLikeCount_026a4e70);
    puVar4 = local_58;
    local_60 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_momentsFakeCommentCount_026a4e78);
    local_68 = puVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = &cf___;
    uVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
    if ((uVar5 & 1) != 0) {
      uVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_78 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar5 & 1) != 0) {
        _objc_storeStrong(&local_70,local_78);
      }
      _objc_storeStrong(&local_78,0);
    }
    pcVar6 = local_70;
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar6 = local_80;
    FUN_005683d4();
    bVar1 = ((ulong)pcVar6 & 1) == 0;
    if (bVar1) {
      FUN_00568a4c(local_70,local_60,local_68,&local_60,&local_68);
      _WCRefineApplyManualFakeEngagementToDataItem(local_40,local_60,local_68);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_WCRefineReloadMomentsViewControl_026a5058);
    }
    else {
      _WCRefineCancelManualFakeEngagementForDataItem(local_40);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_WCRefineReloadMomentsViewControl_026a5058);
    }
    local_50 = (uint)!bVar1;
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

