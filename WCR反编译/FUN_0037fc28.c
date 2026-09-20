// FUN_0037fc28 @ 0037fc28

uint FUN_0037fc28(void)

{
  char *pcVar1;
  undefined *puVar2;
  uint local_24;
  undefined *local_20;
  char *local_18;
  
  pcVar1 = "BaseMsgContentViewController";
  _objc_getClass();
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_18 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  local_24 = 0;
  local_20 = puVar2;
  if (local_18 != (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,local_18);
    local_24 = (uint)puVar2;
  }
  _objc_storeStrong(&local_20,0);
  return local_24 & 1;
}

