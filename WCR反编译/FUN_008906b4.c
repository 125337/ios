// FUN_008906b4 @ 008906b4

void FUN_008906b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  uint local_44;
  
  local_44 = 1;
  if ((DAT_028cdd88 & 1) == 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_44 = (uint)puVar2 ^ 1;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if ((local_44 & 1) == 0) {
    pcVar3 = "VoIPPushKitNotifyService";
    _objc_getClass();
    if (pcVar3 != (char *)0x0) {
      pcVar4 = pcVar3;
      _object_getClass();
      FUN_008a1988(pcVar4,PTR_s_isVoIPLCKAvailable_026a9670,FUN_008a1a44,&DAT_028cdd90);
      FUN_008a1988(pcVar3,PTR_s_useVoIPLCK_026a9678,FUN_008a1b48,&DAT_028cdd98);
      FUN_008a1988(pcVar3,PTR_s_setUseVoIPLCK__026a9680,FUN_008a1c4c,&DAT_028cdda0);
      FUN_008a1988(pcVar3,PTR_s_onServiceInit_026a9688,FUN_008a1d48,&DAT_028cdda8);
      DAT_028cdd88 = 1;
    }
  }
  return;
}

