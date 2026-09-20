// adjustMsgBannerSize @ 01b932a8

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineMessageBannerBeautifyViewController::adjustMsgBannerSize
          (WCRefineMessageBannerBeautifyViewController *this,ID param_1,SEL param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  double in_d0;
  double dVar6;
  cfstringStruct *local_e8;
  cfstringStruct *local_70;
  char *local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  undefined1 local_39;
  char *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar2 = "WCUIAlertView";
  _objc_getClass();
  if (pcVar2 != (char *)0x0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    local_38 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_39 = SUB81(puVar4,0);
    local_48 = &cf_YuzzR_N_____Y_;
    if (((ulong)puVar4 & 1) == 0) {
      local_48 = &cf_YuzzR_N_e___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_msgBannerRecordedSizeHintText_026c0008);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar3;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    pcVar2 = local_38;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x18);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    dVar6 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar2 = local_58;
    bVar1 = false;
    if ((in_d0 <= 0.0) || (dVar6 <= 0.0)) {
      local_e8 = &::cf___;
    }
    else {
      local_e8 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_70 = local_e8;
    }
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setTextFieldDefaultText__0269fd98,local_e8);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_28);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_28,
               PTR_s_handleMsgBannerSizeInput__026c0010);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_show_0269d280);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
  }
  return;
}

