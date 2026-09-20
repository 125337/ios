// FUN_00528c30 @ 00528c30

uint FUN_00528c30(undefined8 param_1)

{
  char *pcVar1;
  long lVar2;
  uint local_3c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = "WCTimeLineViewController";
  _objc_getClass();
  local_3c = 0;
  if ((pcVar1 != (char *)0x0) && (local_3c = 0, local_18 != 0)) {
    lVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isKindOfClass__0269cd68,pcVar1);
    local_3c = (uint)lVar2;
  }
  _objc_storeStrong(&local_18,0);
  return local_3c & 1;
}

