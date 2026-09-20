// toggleYuanbaoAssist: @ 01cb8848

/* Function Stack Size: 0x18 bytes */

void WCRefinePrivateFriendViewController::toggleYuanbaoAssist_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined *local_38;
  undefined4 local_2c;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_yuanbaoUserName_026c3368);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_WCRefinePrivateFriendManager_026ce160;
    local_38 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_isSelectedUsername__026afed0,puVar3);
    if (((ulong)puVar4 & 1) == 0) {
      puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_isYuanbaoFriend_026af098);
      if (((ulong)puVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOn__0269dc80,0);
        _objc_initWeak(auStack_40,local_18);
        IVar1 = local_18;
        local_68 = PTR___NSConcreteStackBlock_02578660;
        local_60 = 0xc2000000;
        local_5c = 0;
        local_58 = FUN_01cb8b84;
        local_50 = &DAT_0258a048;
        _objc_copyWeak(auStack_48,auStack_40);
        (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_promptAddYuanbaoThen__026c3370,&local_68);
        _objc_destroyWeak(auStack_48);
        _objc_destroyWeak(auStack_40);
        local_2c = 0;
      }
      else {
        puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
        local_2c = 1;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOn__0269dc80,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQbCQ_yQy__YSTUS);
      local_2c = 1;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

