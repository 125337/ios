// FUN_01107cdc @ 01107cdc

void FUN_01107cdc(void)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *local_58;
  undefined *local_48;
  undefined *local_38;
  undefined *local_18;
  
  pcVar2 = &cf_MMDarkModeConfigUtil;
  _NSClassFromString();
  pcVar3 = &cf_isDarkMode;
  _NSSelectorFromString();
  if ((pcVar2 == (cfstringStruct *)0x0) ||
     (pcVar4 = pcVar2,
     (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_respondsToSelector__026ca818,pcVar3),
     ((ulong)pcVar4 & 1) == 0)) {
    puVar5 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITraitCollection_026ce138,PTR_s_currentTraitCollection_026ca5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_18 = PTR__OBJC_CLASS___UIColor_026cdf78;
    if (puVar6 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,pcVar3);
    bVar1 = ((ulong)pcVar2 & 1) == 0;
    local_58 = PTR__OBJC_CLASS___UIColor_026cdf78;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_58;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      local_38 = local_58;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_58;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

