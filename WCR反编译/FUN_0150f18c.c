// FUN_0150f18c @ 0150f18c

void FUN_0150f18c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_30;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_synthesizer_026afff0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30 = 1;
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_synthesizer_026afff0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_30 = (uint)uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((local_30 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_startUtterance__026b0038,
               *(undefined8 *)(param_1 + 0x28));
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setPendingText__026b0030,
               *(undefined8 *)(param_1 + 0x28));
  }
  return;
}

