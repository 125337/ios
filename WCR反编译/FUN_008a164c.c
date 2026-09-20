// FUN_008a164c @ 008a164c

byte FUN_008a164c(void)

{
  char *pcVar1;
  char *local_28;
  char *local_20;
  byte local_11;
  
  pcVar1 = "ChatBotResMgr";
  _objc_getClass();
  if ((pcVar1 == (char *)0x0) ||
     (local_20 = pcVar1,
     (*(code *)PTR__objc_msgSend_02578628)
               (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_sharedInstance_0269cd30),
     ((ulong)pcVar1 & 1) == 0)) {
    local_11 = 1;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_sharedInstance_0269cd30);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar1;
    if ((pcVar1 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_isResReady_026a9660),
       ((ulong)pcVar1 & 1) == 0)) {
      local_11 = 1;
    }
    else {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isResReady_026a9660);
      local_11 = (byte)pcVar1 & 1;
    }
    _objc_storeStrong(&local_28,0);
  }
  return local_11 & 1;
}

