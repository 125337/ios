// recordByRepairingMiniProgramFieldsIfNeeded: @ 01b24884

/* Function Stack Size: 0x18 bytes */

ID WCRefineKeywordAlertHistoryViewController::recordByRepairingMiniProgramFieldsIfNeeded_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *local_188;
  cfstringStruct *local_178;
  ulong local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  undefined *local_a0;
  cfstringStruct *local_98 [4];
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  undefined4 local_50;
  byte local_49;
  ulong local_48;
  ulong local_40;
  SEL local_38;
  cfstringStruct *local_30;
  ulong local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_40,param_3);
  uVar3 = local_40;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_49 = 0;
  bVar1 = true;
  if ((uVar3 & 1) != 0) {
    uVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_messageType);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = uVar3 != 0x31;
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  uVar3 = local_40;
  if (bVar1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar3;
    local_50 = 1;
  }
  else {
    FUN_01b24028();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_28 = local_40;
    if (uVar4 == 0) {
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionUserName);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      FUN_01b1fc40();
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar4;
      (*(code *)PTR__objc_release_02578630)();
      FUN_01b22c2c();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_58;
      local_60 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      local_28 = local_40;
      if ((uVar4 == 0) || (local_60 == 0)) {
        (*(code *)PTR__objc_retain_02578638)();
        local_50 = 1;
      }
      else {
        local_68 = 0;
        uVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        local_70 = uVar4;
        if (0 < (long)uVar4) {
          uVar5 = local_60;
          FUN_01b250c0(uVar4,local_60,local_58,uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_68;
          local_68 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        uVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_mesSvrID);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        local_78 = uVar4;
        if ((local_68 == 0) && (0 < (long)uVar4)) {
          uVar5 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_GetMsg_n64SvrID__0269d5f0,local_58,uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_68;
          local_68 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        if ((local_68 == 0) ||
           (uVar3 = local_68,
           (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_m_uiMessageType_0269d0a8),
           pcVar6 = local_30, (int)uVar3 != 0x31)) {
          uVar3 = local_40;
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = uVar3;
          local_50 = 1;
        }
        else {
          uVar3 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_m_nsContent_0269d0a0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar6,PTR_s_historyRootXML_tagName__026bed80,uVar3,&cf_appmsg);
          _objc_retainAutoreleasedReturnValue();
          local_98[0] = pcVar6;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          pcVar6 = local_98[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_98[0],PTR_s_length_0269cca0);
          if ((pcVar6 == (cfstringStruct *)0x0) ||
             (pcVar6 = local_98[0], puVar2 = PTR_s_rangeOfString_options__0269d118,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_98[0],PTR_s_rangeOfString_options__0269d118,&cf_<weappinfo,1),
             local_a8 = pcVar6, local_a0 = puVar2, pcVar6 == (cfstringStruct *)0x7fffffffffffffff))
          {
            uVar3 = local_40;
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = uVar3;
            local_50 = 1;
          }
          else {
            pcVar6 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_historyFirstXMLTagText_tagName__026bed88,local_98[0],&cf_title
                      );
            _objc_retainAutoreleasedReturnValue();
            pcVar7 = local_30;
            local_b0 = pcVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_historyFirstXMLTagText_tagName__026bed88,local_98[0],
                       &cf_content);
            _objc_retainAutoreleasedReturnValue();
            pcVar6 = local_b0;
            local_b8 = pcVar7;
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
            if ((pcVar6 == (cfstringStruct *)0x0) &&
               (pcVar6 = local_b8,
               (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0),
               uVar3 = local_40, pcVar6 == (cfstringStruct *)0x0)) {
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = uVar3;
              local_50 = 1;
            }
            else {
              uVar3 = local_40;
              (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_mutableCopy_0269d8a0);
              if (local_b0 == (cfstringStruct *)0x0) {
                local_178 = &::cf___;
              }
              else {
                local_178 = local_b0;
              }
              local_c0 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar3,PTR_s_setObject_forKeyedSubscript__0269d248,local_178,
                         &cf_miniProgramTitle);
              if (local_b8 == (cfstringStruct *)0x0) {
                local_188 = &::cf___;
              }
              else {
                local_188 = local_b8;
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c0,PTR_s_setObject_forKeyedSubscript__0269d248,local_188,
                         &cf_miniProgramContent);
              uVar3 = local_c0;
              FUN_01b24028();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c0,PTR_s_setObject_forKeyedSubscript__0269d248,uVar3,&cf_dedupKey);
              (*(code *)PTR__objc_release_02578630)(uVar3);
              uVar3 = local_c0;
              (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_copy_0269d150);
              local_50 = 1;
              local_28 = uVar3;
              _objc_storeStrong(&local_c0,0);
            }
            _objc_storeStrong(&local_b8);
            _objc_storeStrong(&local_b0,0);
          }
          _objc_storeStrong(local_98,0);
        }
        _objc_storeStrong(&local_68,0);
      }
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = 1;
    }
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return local_28;
}

