// applyChatSinkHistoryItem: @ 02021860

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::applyChatSinkHistoryItem_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  FUN_02021a90();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar1,PTR_s_objectForKeyedSubscript__0269d098,&cf_chatRoomSink);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setRepeatChatRoomSink__026bf520,lVar2);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_privateChatSink);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setRepeatPrivateChatSink__026bf528,lVar2);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_pageRule);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setRepeatChatSinkPageRule__026bf570,lVar2 == 1);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_selectedSessions);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setRepeatChatSinkSelectedSession_026bf578);
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

