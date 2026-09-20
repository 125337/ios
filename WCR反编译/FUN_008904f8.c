// FUN_008904f8 @ 008904f8

void FUN_008904f8(void)

{
  char *pcVar1;
  char *local_40;
  char *local_28;
  char *local_20;
  char *local_18;
  
  if ((DAT_028cdd88 & 1) != 0) {
    local_40 = "VoIPPushKitNotifyService";
    _objc_getClass();
    local_18 = local_40;
    if (local_40 == (char *)0x0) {
      local_40 = (char *)0x0;
    }
    else {
      _object_getClass();
    }
    local_20 = local_40;
    FUN_008a17ac(local_40,PTR_s_isVoIPLCKAvailable_026a9670,DAT_028cdd90);
    FUN_008a17ac(local_18,PTR_s_useVoIPLCK_026a9678,DAT_028cdd98);
    FUN_008a17ac(local_18,PTR_s_setUseVoIPLCK__026a9680,DAT_028cdda0);
    pcVar1 = local_18;
    FUN_008a17ac(local_18,PTR_s_onServiceInit_026a9688,DAT_028cdda8);
    DAT_028cdd90 = 0;
    DAT_028cdd98 = 0;
    DAT_028cdda0 = 0;
    DAT_028cdda8 = 0;
    DAT_028cdd88 = 0;
    FUN_008a181c();
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar1;
    if ((pcVar1 != (char *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_onServiceInit_026a9688),
       ((ulong)pcVar1 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_onServiceInit_026a9688);
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

