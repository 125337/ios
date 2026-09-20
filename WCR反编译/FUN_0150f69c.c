// FUN_0150f69c @ 0150f69c

void FUN_0150f69c(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint local_4c;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_pendingText_026b0000);
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_finishSpeechPipelineIfIdle_026b0048);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setPendingText__026b0030,0);
    uVar2 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_synthesizer_026afff0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_4c = 1;
    if ((uVar3 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_synthesizer_026afff0);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_4c = (uint)uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((local_4c & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_startUtterance__026b0038,local_28);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_setPendingText__026b0030,local_28);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

