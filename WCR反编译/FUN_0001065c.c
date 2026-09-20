// FUN_0001065c @ 0001065c

byte FUN_0001065c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  byte local_ac;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_objectForKeyedSubscript__0269d098,_WCRAISessionAutoReplyEnabled);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar1 == 0) {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKeyedSubscript__0269d098,_WCRAISessionConversationEnabled);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (lVar1 == 0) {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_chatAgentReplyAll_0269ce80);
      local_ac = 1;
      if ((uVar3 & 1) == 0) {
        uVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_chatAgentEnabled_0269ce88);
        local_ac = (byte)uVar3;
      }
      local_11 = local_ac & 1;
    }
    else {
      lVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_objectForKeyedSubscript__0269d098,_WCRAISessionConversationEnabled);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_11 = (byte)lVar2 & 1;
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
  }
  else {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKeyedSubscript__0269d098,_WCRAISessionAutoReplyEnabled);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = (byte)lVar2 & 1;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

