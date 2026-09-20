// FUN_000f9590 @ 000f9590

void FUN_000f9590(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 local_1d;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_disableChatKeyboardAutoBottomEna_0269eb88);
  puVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_disableChatEnterAutoBottomEnable_0269eb90);
  puVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_chatPositionAutoRestoreEnabled_0269eb98);
  puVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_disableChatSendAutoBottomEnabled_0269eba0);
  local_1d = CONCAT13((char)puVar4,CONCAT12((char)puVar3,CONCAT11((char)puVar2,(char)puVar1)));
  puVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_disableChatBottomTipEnabled_0269eba8);
  DAT_028c845c = SUB81(puVar1,0);
  DAT_028c8458 = local_1d;
  _CFAbsoluteTimeGetCurrent();
  DAT_028c8450 = param_1;
  _objc_storeStrong(&local_18,0);
  return;
}

