// FUN_01706670 @ 01706670

void FUN_01706670(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [48];
  long local_20;
  long local_18;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_on_026a80c0);
  dVar3 = DAT_02323da8;
  if ((uVar1 & 1) == 0) {
    dVar3 = DAT_02339828;
  }
  _CGAffineTransformMakeRotation(DAT_02323cb0 * dVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_subview_026b3768);
  _objc_retainAutoreleasedReturnValue();
  _memcpy(auStack_80,auStack_50,0x30);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setTransform__026caad0,auStack_80);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  return;
}

