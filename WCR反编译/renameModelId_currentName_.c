// renameModelId:currentName: @ 01f5cf58

/* Function Stack Size: 0x20 bytes */

void WCRefineVoiceCloneListViewController::renameModelId_currentName_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *local_48;
  uint local_3c;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  local_38 = pcVar1;
  if (pcVar1 != (char *)0x0) {
    _objc_setAssociatedObject(local_18,PTR_s_renameModelId_currentName__026c9538,local_28,3);
    pcVar2 = local_38;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_handleRenameInput__026c9560);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x14);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setTextFieldDefaultText__0269fd98,local_30)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_show_0269d280);
    _objc_storeStrong(&local_48,0);
  }
  local_3c = (uint)(pcVar1 == (char *)0x0);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

