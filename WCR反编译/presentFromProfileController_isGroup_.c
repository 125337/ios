// presentFromProfileController:isGroup: @ 01dc878c

/* Function Stack Size: 0x1c bytes */

void WCRefineSessionStatsViewController::presentFromProfileController_isGroup_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long local_e8;
  undefined *local_a8;
  byte local_99;
  long local_98;
  byte local_89;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_69;
  long local_50;
  long local_48;
  undefined4 local_40;
  byte local_39;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_39 = (byte)param_4;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    local_40 = 1;
  }
  else {
    lVar4 = local_38;
    FUN_01dc8cc8(local_38,local_39 & 1);
    _objc_retainAutoreleasedReturnValue();
    local_50 = 0;
    local_48 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = local_50;
    local_50 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar5);
    lVar4 = local_50;
    FUN_01dc8ed4();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = local_50;
    local_50 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar5);
    lVar5 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (lVar5 == 0) {
      pcVar1 = &cf_elS_De;
      if ((local_39 & 1) == 0) {
        pcVar1 = &cf_elST_N;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
      local_40 = 1;
    }
    else {
      puVar2 = PTR_WCRefineMessageBlockSupport_026ce0f8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_isChatRoomID__0269ec68,local_50);
      local_69 = SUB81(puVar2,0);
      if (((local_39 & 1) == 0) || (((ulong)puVar2 & 1) != 0)) {
        if (((local_39 & 1) == 0) && (((ulong)puVar2 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_N_f_YSO);
          local_40 = 1;
        }
        else if (((local_39 & 1) == 0) &&
                (puVar2 = PTR_WCRefinePrivateFriendManager_026ce160,
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefinePrivateFriendManager_026ce160,
                           PTR_s_shouldConcealUsername__0269fef8,local_50), ((ulong)puVar2 & 1) != 0
                )) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elgwO_);
          local_40 = 1;
        }
        else {
          puVar2 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_78 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_prepare_026ca7d8);
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_impactOccurred_026ca6a0);
          _objc_storeStrong(&local_78,0);
          local_89 = 0;
          local_99 = 0;
          local_e8 = local_48;
          if ((local_39 & 1) == 0) {
            FUN_01dc9394(local_48,local_50);
            _objc_retainAutoreleasedReturnValue();
            local_99 = 1;
            local_98 = local_e8;
          }
          else {
            FUN_01dc9044(local_48,local_50);
            _objc_retainAutoreleasedReturnValue();
            local_89 = 1;
            local_88 = local_e8;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_80 = local_e8;
          if ((local_99 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_98);
          }
          if ((local_89 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_88);
          }
          puVar2 = PTR_WCRefineSessionStatsViewController_026ce2c0;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_a8 = puVar2;
          FUN_01dc977c(local_38,puVar2);
          _objc_storeStrong(&local_a8);
          _objc_storeStrong(&local_80,0);
          local_40 = 0;
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_N_f_J);
        local_40 = 1;
      }
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

