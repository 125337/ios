// FUN_008f2f84 @ 008f2f84

undefined4 FUN_008f2f84(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  cfstringStruct *local_a8;
  char *local_40 [3];
  undefined4 local_24;
  cfstringStruct *local_20;
  undefined4 local_14;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_24 = 0;
  _time();
  pcVar3 = "MMNewSessionMgr";
  _objc_getClass();
  FUN_008f3348();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_s_GenSendMsgTimeWithChatName__026a9b50;
  local_40[0] = pcVar3;
  if (pcVar3 == (char *)0x0) {
    local_14 = local_24;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_GenSendMsgTimeWithChatName__026a9b50)
    ;
    puVar1 = PTR_s_GenSendMsgTime_0269d420;
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar3 = local_40[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40[0],PTR_s_respondsToSelector__026ca818,PTR_s_GenSendMsgTime_0269d420);
      if (((ulong)pcVar3 & 1) == 0) {
        local_14 = local_24;
      }
      else {
        pcVar3 = local_40[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_40[0],puVar1);
        local_14 = SUB84(pcVar3,0);
      }
    }
    else {
      if (local_20 == (cfstringStruct *)0x0) {
        local_a8 = &cf___;
      }
      else {
        local_a8 = local_20;
      }
      pcVar3 = local_40[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_40[0],puVar2,local_a8);
      local_14 = SUB84(pcVar3,0);
    }
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_20,0);
  return local_14;
}

