// promptAnonymousAtAllWithReferMsg: @ 009de254

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineAnonymousAtHelper::promptAnonymousAtAllWithReferMsg_
          (WCRefineAnonymousAtHelper *this,ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined8 in_d0;
  cfstringStruct *local_f8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  cfstringStruct *local_c0;
  ID local_b8;
  ID local_b0;
  undefined1 auStack_a8 [24];
  undefined *local_90;
  undefined1 auStack_88 [15];
  byte local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  ID local_68;
  cfstringStruct *local_60;
  ID local_58;
  uint local_4c;
  ID local_48;
  ID local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_currentGroupUserName_026ab028);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_28;
  local_40 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_currentGroupContact_026ab128);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_40;
  local_48 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((IVar3 == 0) || (local_48 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRN_W_Jel_ST_);
    local_4c = 1;
  }
  else {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_wcr_resolveReferMsgForAtAll_grou_026ab130,local_38,local_40);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_28;
    local_58 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_isValidReferMsg__026ab060,IVar3);
    if ((IVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__QlgS__uvw_mo_HQS);
      local_4c = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = &cf_notify_all;
      local_68 = 0;
      IVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsNickName_0269d758);
      if ((IVar3 & 1) != 0) {
        IVar4 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_m_nsNickName_0269d758);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = local_68;
        local_68 = IVar4;
        (*(code *)PTR__objc_release_02578630)(IVar3);
      }
      IVar3 = local_68;
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
      local_79 = 0;
      if (((IVar3 & 1) == 0) ||
         (IVar3 = local_68, (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0),
         IVar3 == 0)) {
        local_f8 = &cf__ST_;
      }
      else {
        local_f8 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ST_);
        _objc_retainAutoreleasedReturnValue();
        local_79 = 1;
        local_78 = local_f8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = local_f8;
      if ((local_79 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      _objc_initWeak(auStack_88,local_28);
      pcVar1 = local_70;
      puVar5 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_anonymousAtInputSheetHeight_026ab038)
      ;
      local_e0 = PTR___NSConcreteStackBlock_02578660;
      local_d8 = 0xc2000000;
      local_d4 = 0;
      local_d0 = FUN_009de818;
      local_c8 = &DAT_02581728;
      _objc_copyWeak(auStack_a8,auStack_88);
      pcVar2 = local_60;
      (*(code *)PTR__objc_retain_02578638)();
      IVar4 = local_40;
      local_c0 = pcVar2;
      (*(code *)PTR__objc_retain_02578638)();
      IVar3 = local_58;
      local_b8 = IVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (in_d0,puVar5,PTR_s_presentPageSheetMultilineInputWi_026ab118,pcVar1,&cf___uSckeN__,
                 &cf_eQmo_Q_,&::cf___,&local_e0);
      _objc_retainAutoreleasedReturnValue();
      local_90 = puVar5;
      if (puVar5 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_wcr_bindAnonymousAtSheetKeyboard_026ab120,puVar5);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el9_QeQFh);
      }
      local_4c = (uint)(puVar5 == (undefined *)0x0);
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_b0,0);
      _objc_storeStrong(&local_b8,0);
      _objc_storeStrong(&local_c0,0);
      _objc_destroyWeak(auStack_a8);
      _objc_destroyWeak(auStack_88);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

