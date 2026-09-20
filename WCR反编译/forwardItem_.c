// forwardItem: @ 01f80f14

/* Function Stack Size: 0x18 bytes */

void WCRefineVoicePackManagerViewController::forwardItem_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  ID IVar10;
  ID local_118;
  cfstringStruct *local_e8;
  cfstringStruct *local_d8;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  byte local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  char *local_58;
  undefined4 local_4c;
  char *local_48;
  undefined *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_absolutePath_026ae300);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_dataWithContentsOfFile__0269e0b8);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  pcVar4 = "CMessageWrap";
  _objc_getClass();
  local_48 = pcVar4;
  if (((pcVar4 == (char *)0x0) ||
      (puVar3 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
      puVar3 == (undefined *)0x0)) ||
     (pcVar5 = local_48,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_48,PTR_s_respondsToSelector__026ca818,
                PTR_s_genFileAppMsgWithFileName_filePa_026c9ac0), pcVar4 = local_48,
     puVar3 = PTR_s_genFileAppMsgWithFileName_filePa_026c9ac0, ((ulong)pcVar5 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ellS);
    local_4c = 1;
  }
  else {
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_name_0269d828);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_absolutePath_026ae300);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,puVar3,uVar2,uVar6,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(uVar6);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    pcVar7 = &cf_ForwardMessageMgr;
    _NSClassFromString();
    pcVar8 = &cf_MMContext;
    local_60 = pcVar7;
    _NSClassFromString();
    local_79 = 0;
    local_68 = pcVar8;
    if ((pcVar8 == (cfstringStruct *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar8,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8),
       ((ulong)pcVar8 & 1) == 0)) {
      local_d8 = (cfstringStruct *)0x0;
    }
    else {
      local_d8 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_currentContext_0269d5f8);
      _objc_retainAutoreleasedReturnValue();
      local_79 = 1;
      local_78 = local_d8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_d8;
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    bVar1 = false;
    if ((local_70 == (cfstringStruct *)0x0) ||
       (pcVar7 = local_70,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar7 & 1) == 0)) {
      local_e8 = (cfstringStruct *)0x0;
    }
    else {
      local_e8 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_getService__0269d170,local_60);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_90 = local_e8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = local_e8;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    pcVar7 = &cf_forwardMessage_fromViewController_forwardType_;
    _NSSelectorFromString();
    if (((local_88 == (cfstringStruct *)0x0) || (local_58 == (char *)0x0)) ||
       (pcVar9 = local_88,
       (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_respondsToSelector__026ca818,pcVar7),
       pcVar4 = local_58, pcVar8 = local_88, ((ulong)pcVar9 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_lSeQSNS_u);
    }
    else {
      IVar10 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_118 = IVar10;
      if (IVar10 == 0) {
        local_118 = local_28;
      }
      (*(code *)PTR__objc_msgSend_02578628)(pcVar8,pcVar7,pcVar4,local_118,4);
      (*(code *)PTR__objc_release_02578630)(IVar10);
    }
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

