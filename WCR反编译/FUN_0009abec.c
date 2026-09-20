// FUN_0009abec @ 0009abec

void FUN_0009abec(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  char *pcVar5;
  char *local_88;
  char *local_80;
  undefined *local_78;
  undefined *local_70;
  ulong local_68;
  ulong local_60;
  undefined *local_58;
  ulong local_50;
  undefined4 local_48;
  long local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
  if (lVar1 == 1) {
    uVar2 = local_28;
    FUN_0009b33c(0);
    if ((uVar2 & 1) == 0) {
      local_48 = 1;
    }
    else {
      uVar2 = local_28;
      FUN_0009b5f0();
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar2;
      if (uVar2 == 0) {
        local_48 = 1;
      }
      else {
        FUN_0009b25c();
        if ((uVar2 & 1) == 0) {
          FUN_0009b1c0();
          if ((uVar2 & 1) == 0) {
            local_48 = 1;
          }
          else {
            local_60 = 0;
            FUN_0009b834();
            local_68 = uVar2;
            if (uVar2 == 1) {
              uVar3 = local_50;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_valueForKey__0269d128,&cf_m_nsHeadHDImgUrl);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = local_60;
              local_60 = uVar3;
              (*(code *)PTR__objc_release_02578630)(uVar2);
            }
            if ((local_60 == 0) ||
               (uVar2 = local_60,
               (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0), uVar2 == 0)) {
              uVar3 = local_50;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_valueForKey__0269d128,&cf_m_nsHeadImgUrl);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = local_60;
              local_60 = uVar3;
              (*(code *)PTR__objc_release_02578630)(uVar2);
            }
            if ((local_60 != 0) &&
               (uVar2 = local_60,
               (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0), uVar2 != 0)) {
              puVar4 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
              _objc_retainAutoreleasedReturnValue();
              local_70 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setString__0269ccf8,local_60);
              puVar4 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
              _objc_alloc();
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_initWithStyle__026ca710,0);
              local_78 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_impactOccurred_026ca6a0);
              _objc_storeStrong(&local_78,0);
              pcVar5 = "WCUIAlertView";
              _objc_getClass();
              local_80 = pcVar5;
              if (pcVar5 != (char *)0x0) {
                _objc_alloc();
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar5,PTR_s_initWithTitle_message__0269d260,&cf_vSbR,&cf__Y6R4YPv_4_g);
                local_88 = pcVar5;
                if (pcVar5 != (char *)0x0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (pcVar5,PTR_s_addBtnTitle_target_sel__0269d278,&cf_wSN,0);
                  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_show_0269d280);
                }
                _objc_storeStrong(&local_88,0);
              }
              _objc_storeStrong(&local_70,0);
            }
            _objc_storeStrong(&local_60,0);
            local_48 = 0;
          }
        }
        else {
          puVar4 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_initWithStyle__026ca710,0);
          local_58 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_prepare_026ca7d8);
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_impactOccurred_026ca6a0);
          _objc_storeStrong(&local_58,0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineTopBarProfileCardPresenter_026ce228,
                     PTR_s_presentProfileCardForContact__0269e298,local_50);
          local_48 = 1;
        }
      }
      _objc_storeStrong(&local_50,0);
    }
  }
  else {
    local_48 = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

