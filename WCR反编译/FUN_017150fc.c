// FUN_017150fc @ 017150fc

void FUN_017150fc(long param_1,byte param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setIsAnimating__026b3938,0);
  if ((param_2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (0x400c000000000000,*(undefined8 *)(param_1 + 0x20),
               PTR_s_scheduleDismissTimerWithDuration_026b3960);
  }
  return;
}

