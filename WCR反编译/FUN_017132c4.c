// FUN_017132c4 @ 017132c4

void FUN_017132c4(long param_1,byte param_2)

{
  ulong uVar1;
  undefined8 local_30;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setIsAnimating__026b3938,0);
  if ((param_2 & 1) != 0) {
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      local_30 = 0x4000000000000000;
    }
    else {
      uVar1 = *(ulong *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsString__0269d0b0,&cf_ck_WQQbc);
      if ((uVar1 & 1) != 0) {
        return;
      }
      local_30 = 0x4034000000000000;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,*(undefined8 *)(param_1 + 0x20),
               PTR_s_scheduleDismissTimerWithDuration_026b3960);
  }
  return;
}

