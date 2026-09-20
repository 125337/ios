// FUN_006b97b0 @ 006b97b0

void FUN_006b97b0(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_18;
  
  uVar2 = DAT_028cc158;
  if ((DAT_028cc1a0 & 1) == 0) {
    local_18 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = DAT_028cc158,
       (*(code *)PTR__objc_msgSend_02578628)(DAT_028cc158,PTR_s_length_0269cca0), uVar2 == 0)) {
      local_18 = (undefined *)0x0;
    }
    else {
      if (DAT_028cc160 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,
                   DAT_028cc158);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = DAT_028cc160;
        DAT_028cc160 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      local_18 = DAT_028cc160;
      (*(code *)PTR__objc_retain_02578638)();
    }
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

