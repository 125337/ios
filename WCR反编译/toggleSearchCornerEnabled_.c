// toggleSearchCornerEnabled: @ 0191cfa0

/* Function Stack Size: 0x18 bytes */

void WCRefineCornerViewController::toggleSearchCornerEnabled_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  char *pcVar3;
  undefined *puVar4;
  char *local_40;
  char *local_38;
  undefined1 local_29;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  if ((uVar2 & 1) == 0) goto LAB_0191d204;
  local_29 = 0;
  pcVar3 = "ThemeBoxConfig";
  _objc_getClass();
  local_38 = pcVar3;
  if (pcVar3 == (char *)0x0) {
LAB_0191d140:
    puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar4 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_29 = SUB81(puVar4,0);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_shared_0269cad0);
    if (((ulong)pcVar3 & 1) == 0) goto LAB_0191d140;
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar3;
    if (pcVar3 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_enabled_0269db80);
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_enabled_0269db80);
        local_29 = SUB81(pcVar3,0);
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
LAB_0191d204:
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_28,0);
  return;
}

