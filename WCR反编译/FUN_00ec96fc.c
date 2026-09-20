// FUN_00ec96fc @ 00ec96fc

byte FUN_00ec96fc(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  byte local_34;
  byte local_30;
  undefined *local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_20;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_isEqualToString__0269ccc8,&cf_wcr_attach_plugin_voice_pack);
  if ((uVar2 & 1) == 0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_isEqualToString__0269ccc8,&cf_wcr_attach_plugin_small_signal);
    if ((uVar2 & 1) == 0) {
      local_11 = 0;
    }
    else {
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_smallSignalEnhanceEnabled_026a7ca0);
      local_34 = 0;
      if (((ulong)puVar1 & 1) != 0) {
        puVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_smallSignalAttachmentSendEnabled_026a7ca8);
        local_34 = (byte)puVar1;
      }
      local_11 = local_34 & 1;
    }
  }
  else {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_voicePackEnabled_026a9ce0);
    local_30 = 0;
    if (((ulong)puVar1 & 1) != 0) {
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_voicePackAttachmentEnabled_026a9d18);
      local_30 = (byte)puVar1;
    }
    local_11 = local_30 & 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

