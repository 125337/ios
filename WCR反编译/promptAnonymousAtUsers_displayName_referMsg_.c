// promptAnonymousAtUsers:displayName:referMsg: @ 009ddac4

/* Function Stack Size: 0x28 bytes */

void __thiscall
WCRefineAnonymousAtHelper::promptAnonymousAtUsers_displayName_referMsg_
          (WCRefineAnonymousAtHelper *this,ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 in_d0;
  cfstringStruct *local_108;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  ID local_d0;
  ID local_c8;
  ID local_c0;
  undefined1 auStack_b8 [8];
  byte local_b0;
  undefined *local_a0;
  cfstringStruct *local_98;
  undefined1 auStack_90 [15];
  bool local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  byte local_69;
  ID local_68;
  ID local_60;
  uint local_54;
  ID local_50;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_currentGroupUserName_026ab028);
  _objc_retainAutoreleasedReturnValue();
  local_50 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_length_0269cca0);
  if (IVar3 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRN_W_Jel_ST_);
    local_54 = 1;
  }
  else {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_wcr_normalizedAtUserList__026ab0a8,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_60 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_length_0269cca0);
    if (IVar3 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__gc__yr_a);
      local_54 = 1;
    }
    else {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_wcr_resolveReferMsgForUsers__026ab110,local_48);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_28;
      local_68 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_isValidReferMsg__026ab060,IVar3);
      local_69 = (byte)IVar4;
      lVar5 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      local_81 = false;
      if (lVar5 == 0) {
        local_108 = &cf__ST_;
      }
      else {
        local_108 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ST_);
        _objc_retainAutoreleasedReturnValue();
        local_80 = local_108;
      }
      local_81 = lVar5 != 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = local_108;
      if ((local_81 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      _objc_initWeak(auStack_90,local_28);
      pcVar1 = &cf___uSckeN__;
      if ((local_69 & 1) == 0) {
        pcVar1 = &cf_ckeNOQs_e5fyFONOS_yrc;
      }
      (*(code *)PTR__objc_retain_02578638)();
      pcVar2 = local_78;
      puVar6 = PTR_WCRefineHelper_026ce000;
      local_98 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_anonymousAtInputSheetHeight_026ab038)
      ;
      local_f0 = PTR___NSConcreteStackBlock_02578660;
      local_e8 = 0xc2000000;
      local_e4 = 0;
      local_e0 = FUN_009de044;
      local_d8 = &DAT_025816f8;
      _objc_copyWeak(auStack_b8,auStack_90);
      IVar3 = local_60;
      local_b0 = local_69 & 1;
      (*(code *)PTR__objc_retain_02578638)();
      IVar4 = local_50;
      local_d0 = IVar3;
      (*(code *)PTR__objc_retain_02578638)();
      IVar3 = local_68;
      local_c8 = IVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (in_d0,puVar6,PTR_s_presentPageSheetMultilineInputWi_026ab118,pcVar2,pcVar1,
                 &cf_eQmo_Q_,&::cf___,&local_f0);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = puVar6;
      if (puVar6 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_wcr_bindAnonymousAtSheetKeyboard_026ab120,puVar6);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el9_QeQFh);
      }
      local_54 = (uint)(puVar6 == (undefined *)0x0);
      _objc_storeStrong(&local_a0);
      _objc_storeStrong(&local_c0,0);
      _objc_storeStrong(&local_c8,0);
      _objc_storeStrong(&local_d0,0);
      _objc_destroyWeak(auStack_b8);
      _objc_storeStrong(&local_98,0);
      _objc_destroyWeak(auStack_90);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

