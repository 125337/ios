// editDailyRange @ 01bc0880

/* Function Stack Size: 0x10 bytes */

void WCRefineMessageSyncRuleViewController::editDailyRange(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  cfstringStruct *local_b8;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [15];
  byte local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  ID local_50;
  ID local_48;
  undefined4 local_3c;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentRule_026c04a8);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar2;
  if (IVar2 == 0) {
    local_3c = 1;
    goto LAB_01bc0b48;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_objectForKeyedSubscript__0269d098,_kWCRMessageSyncRuleKeyDailyStart);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_38;
  local_48 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,_kWCRMessageSyncRuleKeyDailyEnd);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_48;
  local_50 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  local_61 = 0;
  if (IVar2 == 0) {
LAB_01bc0a0c:
    local_b8 = &::cf___;
  }
  else {
    IVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (IVar2 == 0) goto LAB_01bc0a0c;
    local_b8 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = local_b8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_b8;
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  _objc_initWeak(auStack_70,local_28);
  IVar2 = local_28;
  pcVar1 = local_58;
  local_98 = PTR___NSConcreteStackBlock_02578660;
  local_90 = 0xc2000000;
  local_8c = 0;
  local_88 = FUN_01bc0b90;
  local_80 = &DAT_0257c558;
  _objc_copyWeak(auStack_78,auStack_70);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_showTextInputWithTitle_message_i_026c0570,&cf_keuHeek,&cf_<h_,pcVar1,0x14,0
             ,&local_98);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  local_3c = 0;
LAB_01bc0b48:
  _objc_storeStrong(&local_38,0);
  return;
}

