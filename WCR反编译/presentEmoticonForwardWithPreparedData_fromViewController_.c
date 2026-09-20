// presentEmoticonForwardWithPreparedData:fromViewController: @ 00f4d708

/* Function Stack Size: 0x20 bytes */

void WCRefineEmoticonToolsHelper::presentEmoticonForwardWithPreparedData_fromViewController_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  cfstringStruct *local_138;
  cfstringStruct *local_120;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  long local_c8;
  char *local_c0;
  undefined *local_b8;
  char *local_b0;
  char *local_a8;
  undefined *local_a0;
  byte local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined8 local_80;
  undefined8 local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  char *local_58;
  char *local_50;
  undefined4 local_44;
  undefined8 local_40;
  long local_38;
  SEL local_30;
  char *local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = (char *)param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  lVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_VGrYt1Y_);
    local_44 = 1;
    goto LAB_00f4ddc4;
  }
  pcVar3 = "CEmoticonMgr";
  _objc_getClass();
  local_58 = (char *)0x0;
  local_60 = (cfstringStruct *)0x0;
  local_68 = PTR_s_emoticonMsgForImageData_errorMsg_026ac170;
  local_50 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_respondsToSelector__026ca818,
             PTR_s_emoticonMsgForImageData_errorMsg_026ac170);
  if (((ulong)pcVar3 & 1) != 0) {
    local_70 = local_60;
    pcVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,local_68,local_38,&local_70);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_60,local_70);
    pcVar3 = local_58;
    local_58 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  if (local_58 == (char *)0x0) {
    local_78 = 0;
    local_80 = 0;
    pcVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_emoticonMessageForData_asSelfie__026a3dc0,local_38,0,&local_80);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_78,local_80);
    pcVar3 = local_58;
    local_58 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    if ((local_58 == (char *)0x0) && (local_60 == (cfstringStruct *)0x0)) {
      _objc_storeStrong(&local_60,local_78);
    }
    _objc_storeStrong(&local_78,0);
  }
  pcVar5 = local_60;
  if (local_58 == (char *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
    local_91 = 0;
    bVar1 = ((ulong)pcVar5 & 1) == 0;
    if (bVar1) {
      local_120 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_description_026ca5f8);
      _objc_retainAutoreleasedReturnValue();
      local_90 = local_120;
    }
    else {
      local_120 = local_60;
    }
    local_91 = bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = local_120;
    if ((local_91 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    _NSLog(&cf__wcr__emoticon_oagenemoticonfailerr___);
    puVar6 = PTR_WCRefineHelper_026ce000;
    pcVar5 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_138 = &cf_ubh_1Y_;
    }
    else {
      local_138 = local_88;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_showModernToast__0269ce78,local_138);
    local_44 = 1;
    _objc_storeStrong(&local_88,0);
  }
  else {
    pcVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setM_dicForwardParas__026a4180);
    if (((ulong)pcVar3 & 1) != 0) {
      puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_setObject_forKeyedSubscript__0269d248,local_38,&cf_NSData);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setM_dicForwardParas__026a4180,local_a0);
      _objc_storeStrong(&local_a0,0);
    }
    pcVar7 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_forwardHostViewControllerPreferr_026ac4a0,local_40);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_28;
    pcVar3 = "ForwardMessageMgr";
    local_a8 = pcVar7;
    _objc_getClass("ForwardMessageMgr");
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_serviceOfClass__0269f7e0,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = PTR_s_forwardMessage_fromViewControlle_026a38a8;
    local_b0 = pcVar4;
    if (pcVar4 == (char *)0x0) {
LAB_00f4dc60:
      _NSLog(&cf__wcr__emoticon_oafallbackSessionPickerfwdMgr___host___);
      lVar2 = local_38;
      pcVar3 = local_a8;
      puVar6 = PTR_WCRefineSessionPicker_026ce350;
      if (local_a8 == (char *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
        local_44 = 1;
      }
      else {
        uVar8 = *(undefined8 *)PTR____NSArray0___02578280;
        local_e8 = PTR___NSConcreteStackBlock_02578660;
        local_e0 = 0xc2000000;
        local_dc = 0;
        local_d8 = FUN_00f4ddf0;
        local_d0 = &DAT_02583058;
        local_c0 = local_28;
        (*(code *)PTR__objc_retain_02578638)();
        local_c8 = lVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_presentFromViewController_title__0269f880,pcVar3,&cf_bJ_Y,uVar8,
                   &local_e8);
        _objc_storeStrong(&local_c8,0);
        local_44 = 0;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_respondsToSelector__026ca818,
                 PTR_s_forwardMessage_fromViewControlle_026a38a8);
      if ((((ulong)pcVar4 & 1) == 0) || (local_a8 == (char *)0x0)) goto LAB_00f4dc60;
      pcVar3 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      _NSLog(&cf__wcr__emoticon_oaforwardviaForwardMessageMgrhost___);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,local_b8,local_58,local_a8);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
      local_44 = 1;
    }
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_a8,0);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
LAB_00f4ddc4:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

