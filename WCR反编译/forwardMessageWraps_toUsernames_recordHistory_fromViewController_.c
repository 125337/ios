// forwardMessageWraps:toUsernames:recordHistory:fromViewController: @ 00f70554

/* Function Stack Size: 0x2c bytes */

void WCRefineForwardToGroupHelper::forwardMessageWraps_toUsernames_recordHistory_fromViewController_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,ID param_6)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  ID IVar5;
  uint local_7c;
  undefined8 local_40;
  byte local_31;
  long local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_31 = (byte)param_5;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  uVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0),
     uVar2 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_lgSlSvmo_);
  }
  else {
    lVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
    if (lVar3 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQblSvh);
    }
    else {
      local_7c = 0;
      if ((local_31 & 1) != 0) {
        puVar1 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_7c = (uint)puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      if ((local_7c & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineForwardTargetHistory_026cebb8,PTR_s_recordUsernames_name__026ac9e8,
                   local_30,0);
      }
      uVar2 = local_28;
      lVar3 = local_30;
      IVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_delayMilliseconds_026ac9f0);
      FUN_00f707e4(uVar2,lVar3,IVar5);
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

