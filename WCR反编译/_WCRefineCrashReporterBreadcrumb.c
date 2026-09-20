// _WCRefineCrashReporterBreadcrumb @ 0092dac0

void _WCRefineCrashReporterBreadcrumb(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  ssize_t sVar7;
  char *local_100;
  char *local_f8;
  int local_ec;
  stat sStack_e8;
  char *local_58;
  char *local_50;
  char *local_48;
  long local_40;
  int local_38;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_38 = 1;
  }
  else {
    FUN_0092e120();
    lVar2 = local_28;
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_newlineCharacterSet_0269ef38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_componentsSeparatedByCharactersI_0269d1a8);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    _getpid();
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar5,PTR_s_stringWithFormat__0269cca8,&cf___3fpid__d____);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_dataUsingEncoding__026a12e8,4);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar5;
    FUN_0092e280();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    pcVar6 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_fileSystemRepresentation_026a95c0);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    pcVar5 = local_50;
    local_58 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if ((pcVar5 == (char *)0x0) || (local_58 == (char *)0x0)) {
      local_38 = 1;
    }
    else {
      _os_unfair_lock_lock(&DAT_028ce380);
      _memset(&sStack_e8,0,0x90);
      local_ec = 0x209;
      iVar1 = _stat(local_58,&sStack_e8);
      if ((iVar1 == 0) && (0xffff < sStack_e8.st_size)) {
        local_ec = 0x609;
      }
      iVar1 = _open(local_58,local_ec);
      local_f8 = local_50;
      if (-1 < iVar1) {
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_bytes_026a9630);
        local_100 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
        while ((sVar7 = 0, local_100 != (char *)0x0 &&
               (sVar7 = _write(iVar1,local_f8,(size_t)local_100), 0 < sVar7))) {
          local_f8 = local_f8 + sVar7;
          local_100 = local_100 + -sVar7;
        }
        _close(sVar7,iVar1);
      }
      _os_unfair_lock_unlock(&DAT_028ce380);
      local_38 = 0;
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    if (local_38 == 0) {
      local_38 = 0;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

