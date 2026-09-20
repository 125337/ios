// FUN_0004185c @ 0004185c

void FUN_0004185c(void)

{
  bool bVar1;
  char *pcVar2;
  char *local_78;
  char *local_38;
  char *local_20;
  char *local_18;
  
  local_78 = "MMServiceCenter";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = local_78 == (char *)0x0;
  local_20 = local_78;
  if (bVar1) {
    local_78 = (char *)0x0;
  }
  else {
    pcVar2 = "CContactMgr";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_getService__0269d170,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_78;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_78;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

