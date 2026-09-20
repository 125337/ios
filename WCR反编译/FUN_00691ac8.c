// FUN_00691ac8 @ 00691ac8

int FUN_00691ac8(double param_1)

{
  char *pcVar1;
  undefined *puVar2;
  char *local_20;
  int local_14;
  
  pcVar1 = "MMNewSessionMgr";
  _objc_getClass();
  FUN_006842e0();
  _objc_retainAutoreleasedReturnValue();
  local_20 = pcVar1;
  if (pcVar1 != (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_GenSendMsgTime_0269d420);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_GenSendMsgTime_0269d420);
      local_14 = (int)pcVar1;
      goto LAB_00691c10;
    }
  }
  puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_14 = (int)param_1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
LAB_00691c10:
  _objc_storeStrong(&local_20,0);
  return local_14;
}

