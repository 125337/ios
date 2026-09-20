// FUN_017f87a8 @ 017f87a8

void FUN_017f87a8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x28);
    puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar3 & 1) != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x30),PTR_s_processLocalFrameForImage_second_026b59c0,
                 *(undefined8 *)(param_1 + 0x38),uVar2);
      _objc_storeStrong(&local_28,0);
      return;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf___N_VGrR_1Y_);
  return;
}

