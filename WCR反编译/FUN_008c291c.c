// FUN_008c291c @ 008c291c

int FUN_008c291c(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  cfstringStruct *local_b8;
  char *local_40 [3];
  int local_24;
  cfstringStruct *local_20;
  int local_14;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_2);
  puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar3 = "MMNewSessionMgr";
  local_24 = (int)param_1;
  _objc_getClass();
  FUN_008be3d8();
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
        local_14 = (int)pcVar3;
      }
    }
    else {
      if (local_20 == (cfstringStruct *)0x0) {
        local_b8 = &cf___;
      }
      else {
        local_b8 = local_20;
      }
      pcVar3 = local_40[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_40[0],puVar2,local_b8);
      local_14 = (int)pcVar3;
    }
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_20,0);
  return local_14;
}

