// togglePaused: @ 01c531c4

/* Function Stack Size: 0x18 bytes */

void WCRefineNameplateSpecialUsersViewController::togglePaused_(ID param_1,SEL param_2,ID param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong local_b0;
  uint local_94;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_44;
  ulong local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  uVar7 = DAT_02323c78;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar2 = local_38;
  _objc_getAssociatedObject(local_38,DAT_028c6880);
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_44 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isOn_0269d560);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_setNameplateSpecialUserPaused_fo_026c1cf0,(uint)uVar2 ^ 1,local_40);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _CFNotificationCenterGetDarwinNotifyCenter();
    _CFNotificationCenterPostNotification();
    uVar2 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = uVar2;
    while( true ) {
      uVar2 = local_50;
      local_94 = 0;
      if (local_50 != 0) {
        puVar3 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        local_94 = (uint)uVar2 ^ 1;
      }
      uVar2 = local_50;
      if ((local_94 & 1) == 0) break;
      uVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_50;
      local_50 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    puVar3 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar2 & 1) == 0) {
      local_b0 = 0;
    }
    else {
      local_b0 = local_50;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_60 = uVar2;
    (*(code *)PTR__objc_release_02578630)(local_b0);
    uVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_68 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isOn_0269d560);
    bVar1 = ((byte)uVar2 ^ 1) & 1;
    uVar6 = uVar7;
    if (bVar1 == 0) {
      uVar6 = 0x3ff0000000000000;
    }
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,local_60,PTR_s_setAlpha__026ca860);
    if (bVar1 == 0) {
      uVar7 = 0x3ff0000000000000;
    }
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,local_68,PTR_s_setAlpha__026ca860);
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_statusTextForUsername__026b6838,local_40);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setText__026caa88);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

