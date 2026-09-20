// FUN_015e4e48 @ 015e4e48

void FUN_015e4e48(long param_1)

{
  ulong uVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_wcr_beginScreenshotPassThrough_026b11e0);
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_secureShieldOn_026b11a8);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_wcr_prepareForScreenCapture_026b11e8);
  }
  return;
}

