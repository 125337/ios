// refreshUnreadBadgesWithReason: @ 01af9b88

/* Function Stack Size: 0x18 bytes */

void WCRefineHomeAvatarStripView::refreshUnreadBadgesWithReason_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  ID IVar3;
  undefined *puVar4;
  ID IVar5;
  cfstringStruct *pcVar6;
  ID IVar7;
  cfstringStruct *local_88;
  ID local_70;
  ID local_68;
  ID local_60;
  ulong local_58;
  undefined4 local_50;
  byte local_4a;
  byte local_49;
  undefined *local_48;
  ID local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_WCRefineConfig_026cdf58;
  local_40 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_homeAvatarStripShowRemark_026a2438);
  local_49 = (byte)puVar4;
  puVar4 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_homeAvatarStripShowUnread_026a2430);
  local_4a = (byte)puVar4;
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_canReuseCellsForItems__026be6d0,local_40)
  ;
  IVar3 = local_28;
  if ((IVar5 & 1) == 0) {
    pcVar6 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (pcVar6 == (cfstringStruct *)0x0) {
      local_88 = &cf_refreshUnread;
    }
    else {
      local_88 = local_38;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_reloadContentWithReason_forceReb_026a24e0,local_88,1);
    local_50 = 1;
  }
  else {
    for (local_58 = 0; uVar2 = local_58, IVar3 = local_40,
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0), uVar2 < IVar3;
        local_58 = local_58 + 1) {
      IVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectAtIndexedSubscript__0269cc78,local_58);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = local_28;
      local_60 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cellViews_026be660);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_68 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_verticalOffset_026be628);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setVerticalOffset__026be6d8);
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_horizontalOffset_026be6e0);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setHorizontalOffset__026be6e8);
      bVar1 = (local_49 & 1) != 0;
      if (bVar1) {
        local_70 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_displayName_026ac378);
        _objc_retainAutoreleasedReturnValue();
      }
      IVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_nameLabel_026ad1e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      IVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_nameLabel_026ad1e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_68;
      IVar5 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_unreadCount_026a3080);
      IVar7 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_unreadAsRedDot_026be6f0);
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_applyBadgeUnread_asRedDot_show__026be6f8,IVar5,IVar7,local_4a & 1);
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setItems__026a17a8,local_40);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_refreshOfficialHeadsKeepingC_026be700);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNeedsLayout_0269deb8);
    local_50 = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

