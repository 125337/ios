// editDelaySeconds @ 01bc137c

/* Function Stack Size: 0x10 bytes */

void WCRefineMessageSyncRuleViewController::editDelaySeconds(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [8];
  undefined *local_38;
  uint local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentRule_026c04a8);
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar2;
  if (IVar2 != 0) {
    puVar3 = PTR_WCRefineMessageSyncRule_026ce708;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_integerInRule_forKey__026a44f0,IVar2,
               _kWCRMessageSyncRuleKeyDelaySeconds);
    local_38 = puVar3;
    _objc_initWeak(auStack_40,local_18);
    IVar1 = local_18;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    puVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
    _objc_retainAutoreleasedReturnValue();
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_01bc157c;
    local_60 = &DAT_0257c558;
    _objc_copyWeak(auStack_58,auStack_40);
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_showTextInputWithTitle_message_i_026c0570,&cf_lS_,&cf_6e0Rmo_T_Y_yQTek0,
               puVar3,3,1,&local_78,puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_40);
  }
  local_2c = (uint)(IVar2 == 0);
  _objc_storeStrong(&local_28,0);
  return;
}

