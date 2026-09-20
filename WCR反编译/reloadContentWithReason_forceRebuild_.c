// reloadContentWithReason:forceRebuild: @ 01afa0b4

/* Function Stack Size: 0x1c bytes */

void __thiscall
WCRefineHomeAvatarStripView::reloadContentWithReason_forceRebuild_
          (WCRefineHomeAvatarStripView *this,ID param_1,SEL param_2,ID param_3,bool param_4)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  ID IVar5;
  ulong uVar6;
  undefined8 in_d0;
  ID local_80;
  ID local_78;
  ID local_70;
  ulong local_68;
  undefined8 local_60;
  byte local_52;
  byte local_51;
  undefined *local_50;
  ID local_48;
  byte local_39;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_39 = (byte)param_4;
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar2;
  if (((local_39 & 1) == 0) &&
     (IVar3 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_canReuseCellsForItems__026be6d0,IVar2)
     , (IVar3 & 1) != 0)) {
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_homeAvatarStripShowRemark_026a2438);
    local_51 = (byte)puVar4;
    puVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_homeAvatarStripShowUnread_026a2430);
    local_52 = (byte)puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_homeAvatarStripAvatarSize_026a23f0);
    local_60 = in_d0;
    for (local_68 = 0; uVar6 = local_68, IVar2 = local_48,
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0), uVar6 < IVar2;
        local_68 = local_68 + 1) {
      IVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_68);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      local_70 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cellViews_026be660);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_78 = IVar2;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_60,local_78,PTR_s_setAvatarSize__026b1540);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_verticalOffset_026be628);
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setVerticalOffset__026be6d8);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_horizontalOffset_026be6e0);
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setHorizontalOffset__026be6e8);
      bVar1 = (local_51 & 1) != 0;
      if (bVar1) {
        local_80 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_displayName_026ac378);
        _objc_retainAutoreleasedReturnValue();
      }
      IVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_nameLabel_026ad1e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      IVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_nameLabel_026ad1e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_78;
      IVar3 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_unreadCount_026a3080);
      IVar5 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_unreadAsRedDot_026be6f0);
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_applyBadgeUnread_asRedDot_show__026be6f8,IVar3,IVar5,local_52 & 1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_forceAvatarGeometryReapplyFrame__026be610,0);
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_70,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setItems__026a17a8,local_48);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_refreshOfficialHeadsKeepingC_026be700);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_updateChrome_026be690);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_updateBackgroundMediaIfNeeded_026be698);
    uVar6 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf_configure);
    if ((uVar6 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_scheduleColdStartCatchUp_026be708);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNeedsLayout_0269deb8);
    _objc_storeStrong(&local_50,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_applyItems__026be710,local_48);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  return;
}

