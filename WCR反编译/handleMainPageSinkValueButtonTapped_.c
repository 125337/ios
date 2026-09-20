// handleMainPageSinkValueButtonTapped: @ 01b50d9c

/* Function Stack Size: 0x18 bytes */

void WCRefineLayoutFunctionViewController::handleMainPageSinkValueButtonTapped_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  char *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_60;
  char *local_58;
  undefined4 local_4c;
  char *local_48;
  ID local_40;
  long local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
  lVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  local_30 = lVar5 + -4000;
  if ((local_30 < 0x1f) || (lVar5 = lVar5 + -0xfc1, lVar5 != 0 && 0x20 < local_30)) {
    lVar5 = 0x1f;
    local_30 = 0x1f;
  }
  lVar1 = local_30;
  FUN_01b51054(lVar5);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_38 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_mainPageSinkValueForTarget__026bf620,local_30);
  pcVar3 = "WCUIAlertView";
  local_40 = IVar2;
  _objc_getClass();
  local_48 = pcVar3;
  if (pcVar3 == (char *)0x0) {
    local_4c = 1;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,0);
    if (local_30 == 0x1f) {
      local_60 = PTR_s_handleMainPageSinkMainFrameInput_026bf648;
    }
    else if (local_30 == 0x20) {
      local_60 = PTR_s_handleMainPageSinkContactsInput__026bf650;
    }
    else {
      local_60 = PTR_s_handleMainPageSinkDiscoverInput__026bf658;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,local_60);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_showTextFieldWithMaxLen__0269e5e0,3);
    pcVar3 = local_58;
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setTextFieldDefaultText__0269fd98);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_show_0269d280);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

