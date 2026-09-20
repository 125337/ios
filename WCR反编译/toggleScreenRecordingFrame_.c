// toggleScreenRecordingFrame: @ 017f217c

/* Function Stack Size: 0x18 bytes */

void WCRefineAssistFunctionViewController::toggleScreenRecordingFrame_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  char *pcVar4;
  char *local_48;
  char *local_40;
  undefined4 local_34;
  undefined *local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  if (((uVar2 & 1) == 0) ||
     (IVar3 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_canUseScreenRecordingFrameBetaFe_026b58c8)
     , (IVar3 & 1) != 0)) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setScreenRecordingFrameEnabled__026b58d0,uVar2);
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
    if ((uVar2 & 1) != 0) {
      pcVar4 = "WCUIAlertView";
      _objc_getClass();
      local_40 = pcVar4;
      if (pcVar4 != (char *)0x0) {
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_48 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_addBtnTitle_target_sel__0269d278,&cf_wSN,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_show_0269d280);
        _objc_storeStrong(&local_48,0);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    local_34 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOn_animated__026a8098,0,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setScreenRecordingFrameEnabled__026b58d0,0)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showScreenRecordingFrameBetaRest_026b58d8);
    local_34 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

