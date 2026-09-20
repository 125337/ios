// wcr_tryForwardLinkedMessageRepoForThemeIndex:targetWxid: @ 01725980

/* Function Stack Size: 0x20 bytes */

void ThemeBoxAirDropThemePickViewController::
     wcr_tryForwardLinkedMessageRepoForThemeIndex_targetWxid_
               (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_98;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = (undefined *)param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  lVar1 = local_30;
  FUN_01725ed0();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (puVar2 = PTR_WCRefineHelper_026ce000,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR_WCRefineHelper_026ce000,PTR_s_isWeChatFriendUserName__026af090,local_38),
     ((ulong)puVar2 & 1) == 0)) {
    local_3c = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_themeBoxAirDropThemeItems_026acfb8);
    _objc_retainAutoreleasedReturnValue();
    local_98 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_98 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_98;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_28;
    puVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
    if (puVar2 < puVar3) {
      puVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_objectAtIndexedSubscript__0269cc78,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_58 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_linkedMsgRepoCode);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_60 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      puVar2 = local_60;
      if (((ulong)puVar3 & 1) == 0) {
        local_3c = 1;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
        _objc_retainAutoreleasedReturnValue();
        local_68 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
        if (puVar2 == (undefined *)0x0) {
          local_3c = 1;
        }
        else {
          puVar2 = local_68;
          FUN_01725ff4(local_68,local_48);
          _objc_retainAutoreleasedReturnValue();
          local_70 = puVar2;
          if (puVar2 == (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                       &cf_sQTvmo_N__SeHe);
            local_3c = 1;
          }
          else {
            puVar3 = PTR_WCRefineMessageRepositoryStore_026ce120;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineMessageRepositoryStore_026ce120,PTR_s_isCompositeItem__0269d720,
                       puVar2);
            if (((ulong)puVar3 & 1) == 0) {
              local_78 = (undefined *)0x0;
              puVar2 = local_70;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_localId);
              _objc_retainAutoreleasedReturnValue();
              local_80 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750);
              if (((ulong)puVar2 & 1) != 0) {
                puVar2 = local_80;
                (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_integerValue_026ca750);
                local_78 = puVar2;
              }
              if ((long)local_78 < 1) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                           &cf_N_agv____g0Wmo_);
                local_3c = 1;
              }
              else {
                puVar2 = local_78;
                FUN_01726774(local_78);
                _objc_retainAutoreleasedReturnValue();
                local_88 = puVar2;
                if ((puVar2 == (undefined *)0x0) ||
                   (FUN_0172695c(puVar2,local_38), ((ulong)puVar2 & 1) == 0)) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                             &cf_sQTmo_lS1Y_);
                }
                _objc_storeStrong(&local_88,0);
                local_3c = 0;
              }
              _objc_storeStrong(&local_80,0);
            }
            else {
              puVar2 = PTR_WCRefineVoicePackSender_026ce128;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineVoicePackSender_026ce128,
                         PTR_s_sendRepositoryItem_toChatName_co_0269d728,local_70,local_38,0);
              if (((ulong)puVar2 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                           &cf_sQT_Tmo_S1Y_);
              }
              local_3c = 1;
            }
          }
          _objc_storeStrong(&local_70,0);
        }
        _objc_storeStrong(&local_68,0);
      }
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
    }
    else {
      local_3c = 1;
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

