// openScreenRecordingFrameNumberSettingWithTitle:message:currentValue:min:max:apply: @ 017f2f54

/* Function Stack Size: 0x40 bytes */

void WCRefineAssistFunctionViewController::
     openScreenRecordingFrameNumberSettingWithTitle_message_currentValue_min_max_apply_
               (ID param_1,SEL param_2,ID param_3,ID param_4,double param_5,double param_6,
               double param_7,ID param_8,undefined4 param_9)

{
  undefined8 uVar1;
  ID IVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [8];
  double local_b8;
  double local_b0;
  undefined **local_a8;
  undefined1 auStack_a0 [32];
  char *local_80;
  char *local_78;
  undefined4 local_6c;
  char *local_68;
  undefined8 local_60;
  double local_58;
  double local_50;
  double local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_60 = 0;
  local_58 = param_7;
  local_50 = param_6;
  local_48 = param_5;
  _objc_storeStrong(&local_60,param_8);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar3 = "WCUIAlertView";
  _objc_getClass();
  local_68 = pcVar3;
  if (pcVar3 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el>f_yeQFh);
    local_6c = 1;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_78 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_showTextFieldWithMaxLen__0269e5e0,10);
    pcVar3 = local_78;
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___1f);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setTextFieldDefaultText__0269fd98);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    pcVar3 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_getTextField_0269fb48);
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar3;
    if (pcVar3 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_setKeyboardType__026aec58);
      if (((ulong)pcVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setKeyboardType__026aec58,8);
      }
    }
    _objc_storeStrong(&local_80,0);
    _objc_initWeak(auStack_a0,local_28);
    uVar1 = local_60;
    ppuVar5 = &local_e8;
    local_e8 = PTR___NSConcreteStackBlock_02578660;
    local_e0 = 0xc2000000;
    local_dc = 0;
    local_d8 = FUN_017f3400;
    local_d0 = &DAT_025892e8;
    local_b8 = local_50;
    local_b0 = local_58;
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = uVar1;
    _objc_copyWeak(auStack_c0,auStack_a0);
    _objc_retainBlock();
    IVar2 = local_28;
    puVar4 = PTR_s_handleScreenRecordingFrameNumber_026b5918;
    local_a8 = ppuVar5;
    _objc_retainBlock();
    _objc_setAssociatedObject(IVar2,puVar4,ppuVar5,1);
    (*(code *)PTR__objc_release_02578630)(ppuVar5);
    _objc_setAssociatedObject(local_28,PTR_s_handleScreenRecordingFrameNumber_026b5920,local_78,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_28,
               PTR_s_handleScreenRecordingFrameNumber_026b5920);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx,local_28,
               PTR_s_handleScreenRecordingFrameNumber_026b5918);
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_show_0269d280);
    _objc_storeStrong(&local_a8);
    _objc_destroyWeak(auStack_c0);
    _objc_storeStrong(&local_c8,0);
    _objc_destroyWeak(auStack_a0);
    _objc_storeStrong(&local_78,0);
    local_6c = 0;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

