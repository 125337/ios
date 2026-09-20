// editTimeOfDay @ 01d3efd8

/* Function Stack Size: 0x10 bytes */

void WCRefineScheduledTaskViewController::editTimeOfDay(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [12];
  undefined4 local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentTask_026b3988);
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar2;
  if (IVar2 == 0) {
    local_2c = 1;
  }
  else {
    _objc_initWeak(auStack_38,local_18);
    IVar2 = local_18;
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isAutoClearChatTask_026c45a0);
    pcVar1 = &cf_nte_R;
    if ((IVar3 & 1) == 0) {
      pcVar1 = &cf_Se_R;
    }
    puVar4 = PTR_WCRefineScheduledTask_026ce850;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineScheduledTask_026ce850,PTR_s_timeOfDayTextForTask__026af480,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_01d3f1dc;
    local_58 = &DAT_0257c558;
    _objc_copyWeak(auStack_50,auStack_38);
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_showTextInputWithTitle_message_i_026c0570,pcVar1,&cf_<h_,puVar4,5,0,
               &local_70);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_38);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

