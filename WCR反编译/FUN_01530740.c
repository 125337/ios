// FUN_01530740 @ 01530740

uint FUN_01530740(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  long lVar2;
  uint local_24;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = &cf_AddContactToChatRoomViewController;
  _NSClassFromString();
  local_24 = 0;
  if ((pcVar1 != (cfstringStruct *)0x0) && (local_24 = 0, local_18 != 0)) {
    lVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isKindOfClass__0269cd68,pcVar1);
    local_24 = (uint)lVar2;
  }
  _objc_storeStrong(&local_18,0);
  return local_24 & 1;
}

