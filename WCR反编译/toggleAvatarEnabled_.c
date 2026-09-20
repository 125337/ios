// toggleAvatarEnabled: @ 01cac6e4

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginTopViewController::toggleAvatarEnabled_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  cfstringStruct *local_50;
  cfstringStruct *local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setAvatarEnabled__026c2ef8,uVar1);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  if ((uVar1 & 1) != 0) {
    pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_50 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_50;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_storedAvatarPathForPath__026c2f08,local_30)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setAvatarImagePath__026c2f10);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _objc_storeStrong(&local_30,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_saveSettings_026b9548);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_28,0);
  return;
}

