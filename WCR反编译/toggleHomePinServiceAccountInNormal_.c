// toggleHomePinServiceAccountInNormal: @ 01a51f6c

/* Function Stack Size: 0x18 bytes */

void WCRefineGeneralFunctionViewController::toggleHomePinServiceAccountInNormal_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar3 = "MainSessionMgr";
  _objc_getClass();
  puVar2 = PTR_s_reloadMainSessionList_026bcbe0;
  if (pcVar3 != (char *)0x0) {
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_reloadMainSessionList_026bcbe0);
    if (((ulong)pcVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar2);
    }
  }
  puVar2 = PTR_WCRefineHelper_026ce000;
  uVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  pcVar1 = &cf_gRS_n_v0R8_Rh;
  if ((uVar5 & 1) == 0) {
    pcVar1 = &cf_gRS__en_v_S;
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78,pcVar1);
  _objc_storeStrong(&local_28,0);
  return;
}

