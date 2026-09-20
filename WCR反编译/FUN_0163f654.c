// FUN_0163f654 @ 0163f654

/* WARNING: Removing unreachable block (ram,0x0163f6e8) */

void FUN_0163f654(void)

{
  int iVar1;
  undefined8 local_18;
  
  iVar1 = 2;
  ___isPlatformVersionAtLeast(2,0xf,0);
  local_18 = PTR__OBJC_CLASS___UIBlurEffect_026cdf90;
  if (iVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIBlurEffect_026cdf90,PTR_s_effectWithStyle__026ca628,0x12);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIBlurEffect_026cdf90,PTR_s_effectWithStyle__026ca628,0x11);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

