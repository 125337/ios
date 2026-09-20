// presentLiftEditorForSession:isGroupChat:presenter:confirmSwitch: @ 00ecf410

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x2c bytes */

void WCRefineChatIndentOverrideHelper::
     presentLiftEditorForSession_isGroupChat_presenter_confirmSwitch_
               (ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5,ID param_6)

{
  char *pcVar1;
  long lVar2;
  ID IVar3;
  char *local_60;
  ID local_58;
  undefined4 local_4c;
  char *local_48;
  long local_40 [2];
  byte local_29;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_29 = (byte)param_4;
  local_40[1] = 0;
  _objc_storeStrong(local_40 + 1,param_5);
  local_40[0] = 0;
  _objc_storeStrong(local_40,param_6);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  local_48 = pcVar1;
  if ((pcVar1 == (char *)0x0) ||
     (lVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    if (local_40[0] != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_setOn__0269dc80,0);
    }
    local_4c = 1;
  }
  else {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_liftSummaryForSession_isGroupCha_026ab5f0,local_28,local_29 & 1);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_48;
    local_58 = IVar3;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_60 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_beginEditWithSession_isGroupChat_026ab5c0,local_28,local_29 & 1,
               local_40[0],pcVar1);
    pcVar1 = local_60;
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,IVar3,
               PTR_s_alertCancelLift_026ab5f8);
    pcVar1 = local_60;
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,IVar3,
               PTR_s_alertConfirmLift__026ab600);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_showTextFieldWithMaxLen__0269e5e0,3);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setTextFieldDefaultText__0269fd98,local_58)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_show_0269d280);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(local_40 + 1,0);
  _objc_storeStrong(&local_28,0);
  return;
}

