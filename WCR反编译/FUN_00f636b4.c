// FUN_00f636b4 @ 00f636b4

/* WARNING: Removing unreachable block (ram,0x00f637a0) */

byte FUN_00f636b4(undefined8 param_1)

{
  char *pcVar1;
  char *local_38;
  undefined4 local_2c;
  char *local_28;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = "ChatRoomInfoViewController";
  _objc_getClass();
  local_28 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSb);
    local_11 = 0;
    local_2c = 1;
  }
  else {
    _objc_alloc_init();
    local_38 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_11 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_setValue_forKey__0269d300,local_20,&cf_m_chatRoomContact);
      pcVar1 = local_38;
      FUN_00f63dc8();
      local_11 = (byte)pcVar1 & 1;
    }
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

