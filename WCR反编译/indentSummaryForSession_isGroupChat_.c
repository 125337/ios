// indentSummaryForSession:isGroupChat: @ 00ecd2f0

/* Function Stack Size: 0x1c bytes */

ID WCRefineChatIndentOverrideHelper::indentSummaryForSession_isGroupChat_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  byte local_29;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_29 = (byte)param_4;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_48 = (undefined *)0x0;
  local_50 = (undefined *)0x0;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar1 & 1) == 0) {
    local_98 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_98;
    if ((local_29 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_repeatPrivateChatIndentLeft_0269e7c0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_repeatChatRoomIndentLeft_0269e7b0);
    }
    local_48 = local_98;
    local_a0 = local_58;
    if ((local_29 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_repeatPrivateChatIndentRight_0269e7c8);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_repeatChatRoomIndentRight_0269e7b8);
    }
    local_50 = local_a0;
    _objc_storeStrong(&local_58,0);
  }
  else {
    puVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_left)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_right);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld__ld);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

