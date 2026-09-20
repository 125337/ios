// FUN_0054c0ac @ 0054c0ac

void FUN_0054c0ac(double param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  char *local_50;
  long local_48;
  long local_40;
  undefined4 local_38;
  long local_28;
  long local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  lVar2 = local_20;
  if (lVar1 == 0) {
    local_18 = (char *)0x0;
    local_38 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = lVar2;
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getContactByName__0269d178,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_m_nsNickName_0269d758);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar2);
    if (lVar1 != 0) {
      lVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_m_nsNickName_0269d758);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_40;
      local_40 = lVar1;
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
    if (DAT_028cb3f8 == (char *)0x0) {
      pcVar3 = "WCUserComment";
      _objc_getClass();
      DAT_028cb3f8 = pcVar3;
    }
    pcVar3 = DAT_028cb3f8;
    _objc_retainAutoreleaseReturnValue();
    _objc_alloc_init();
    local_50 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setUsername__026a2510,local_20);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setNickname__026a4eb8,local_40);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setType__026a3cb8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setIsRichText__026a4ec0,1);
    puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setCreateTime__026a4ec8,(int)param_1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    pcVar3 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar3;
    local_38 = 1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

