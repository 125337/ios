// FUN_006e1de4 @ 006e1de4

void FUN_006e1de4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 local_14;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_14 = 0;
  if (((ulong)puVar2 & 1) != 0) {
    local_14 = (byte)puVar2;
    FUN_006e26a0();
  }
  DAT_028cc310 = local_14 & 1;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineScheduledTask_026ce850;
  puVar2 = PTR_WCRefineScheduledTask_026ce850;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineScheduledTask_026ce850,PTR_s_autoClearChatTask_026a6cb0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isTaskEnabled__026a6cb8);
  DAT_028cc311 = SUB81(puVar1,0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

