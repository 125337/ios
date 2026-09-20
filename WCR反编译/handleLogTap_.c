// handleLogTap: @ 01f48954

/* Function Stack Size: 0x18 bytes */

void WCRefineUpdateLogView::handleLogTap_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined8 in_d0;
  undefined8 in_d1;
  ID local_70;
  ID local_68;
  ID local_60 [3];
  undefined4 local_44;
  ID local_40;
  ID local_38;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_logTextView_026a9fc0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sponsorLineRanges_026c8f28);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_18;
  local_38 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_telegramChannelRanges_026c8f50);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar1;
  if ((local_30 == 0) ||
     ((IVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0),
      IVar1 == 0 &&
      (IVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0),
      IVar1 == 0)))) {
    local_44 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_locationInView__026ca798,local_30);
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (in_d0,in_d1,local_30,PTR_s_closestPositionToPoint__026c8f58);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_30;
    local_60[0] = IVar2;
    if (IVar2 == 0) {
      local_44 = 1;
    }
    else {
      IVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_beginningOfDocument_026c8f60);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_offsetFromPosition_toPosition__026c8f68,IVar2,local_60[0]);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_18;
      local_68 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_wcr_hitRangeList_atIndex__026c8f70,local_40,IVar1);
      if ((IVar2 & 1) == 0) {
        IVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_wcr_hitRangeList_atIndex__026c8f70,local_38,local_68);
        if ((IVar1 & 1) == 0) {
          local_44 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
          IVar1 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hostSheet_026c8f78);
          _objc_retainAutoreleasedReturnValue();
          local_70 = IVar1;
          if (IVar1 == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_openSponsorRankingPagePreferTopN_026c44c0);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_dismissWithAnimated__0269e420,1);
            (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setHostSheet__026c8ee0,0);
            dVar3 = _dispatch_time(0,280000000);
            puVar4 = PTR___dispatch_main_q_02578680;
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            _dispatch_after(dVar3,puVar4,&PTR___NSConcreteGlobalBlock_0258ccd0);
            (*(code *)PTR__objc_release_02578630)(puVar4);
          }
          _objc_storeStrong(&local_70,0);
          local_44 = 0;
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
        _WCRSFOpenURLSchemeTemplate(&cf_tg___resolve_domain_wcrefine);
        local_44 = 1;
      }
    }
    _objc_storeStrong(local_60,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

