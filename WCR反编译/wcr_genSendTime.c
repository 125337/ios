// wcr_genSendTime @ 009dc1a8

/* Function Stack Size: 0x10 bytes */

unsigned_int __thiscall
WCRefineAnonymousAtHelper::wcr_genSendTime(WCRefineAnonymousAtHelper *this,ID param_1,SEL param_2)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  double in_d0;
  char *local_60;
  bool local_51;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  SEL local_28;
  ID local_20;
  unsigned_int local_14;
  
  pcVar2 = "MMServiceCenter";
  local_28 = param_2;
  local_20 = param_1;
  _objc_getClass();
  pcVar3 = "MMNewSessionMgr";
  local_30 = pcVar2;
  _objc_getClass();
  local_38 = pcVar3;
  if ((local_30 != (char *)0x0) && (pcVar3 != (char *)0x0)) {
    local_60 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_51 = local_60 == (char *)0x0;
    local_40 = local_60;
    if (local_51) {
      local_60 = (char *)0x0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_getService__0269d170,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_60;
    }
    local_51 = !local_51;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_60;
    if (local_51) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    if ((local_48 == (char *)0x0) ||
       (pcVar2 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_GenSendMsgTime_0269d420),
       ((ulong)pcVar2 & 1) == 0)) {
      bVar1 = false;
    }
    else {
      pcVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_GenSendMsgTime_0269d420);
      local_14 = (unsigned_int)pcVar2;
      bVar1 = true;
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    if (bVar1) {
      return local_14;
    }
  }
  puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_14 = (unsigned_int)in_d0;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  return local_14;
}

