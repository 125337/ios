// FUN_006ef2cc @ 006ef2cc

void FUN_006ef2cc(long param_1)

{
  long lVar1;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x48;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar1,PTR_s_wcr_runPipelineWithAVAsset_audio_026a7058,*(undefined8 *)(param_1 + 0x20)
               ,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
               *(byte *)(param_1 + 0x58) & 1,*(undefined8 *)(param_1 + 0x38),
               *(byte *)(param_1 + 0x59) & 1,*(undefined8 *)(param_1 + 0x40),
               *(undefined8 *)(param_1 + 0x50),*(byte *)(param_1 + 0x5a) & 1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

