// FUN_00790d78 @ 00790d78

void FUN_00790d78(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_0078e2d4(*(undefined8 *)(param_1 + 0x20),PTR_s_onShowMsgReplyMenuItem__026a4380,0);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_wcrefine_triggerQuoteMention_026a8020);
  }
  return;
}

