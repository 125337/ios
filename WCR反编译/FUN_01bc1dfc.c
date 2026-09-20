// FUN_01bc1dfc @ 01bc1dfc

void FUN_01bc1dfc(void)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_50;
  char *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  
  local_50 = "MMServiceCenter";
  _objc_getClass();
  bVar1 = local_50 == (char *)0x0;
  local_20 = local_50;
  if (bVar1) {
    local_50 = (char *)0x0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_50;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  pcVar2 = "CContactMgr";
  _objc_getClass();
  if (((local_28 == (char *)0x0) || (pcVar2 == (char *)0x0)) ||
     (pcVar3 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
     ((ulong)pcVar3 & 1) == 0)) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getService__0269d170,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar3;
  }
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

