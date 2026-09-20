// FUN_01601e50 @ 01601e50

void FUN_01601e50(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar2 == 0) {
    if (*(long *)(param_1 + 0x30) != 1) {
      uVar3 = *(ulong *)(param_1 + 0x28);
      FUN_015f2508();
      if ((uVar3 & 1) != 0) {
        return;
      }
    }
    FUN_015f2038(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  return;
}

