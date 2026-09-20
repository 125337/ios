// FUN_008cfa58 @ 008cfa58

void FUN_008cfa58(void)

{
  bool bVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *local_c8;
  char *local_88;
  char *local_68;
  char *local_58;
  char *local_28;
  char *local_20;
  char *local_18;
  
  pcVar3 = "WCColor";
  _objc_getClass();
  local_20 = pcVar3;
  if ((pcVar3 != (char *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_FG_0_026a1348),
     ((ulong)pcVar3 & 1) != 0)) {
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_FG_0_026a1348);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar3;
    if (pcVar3 != (char *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar3;
    }
    _objc_storeStrong(&local_28,0);
    if (pcVar3 != (char *)0x0) goto LAB_008cfe0c;
  }
  local_88 = "UIColor";
  _objc_getClass();
  if (local_88 == (char *)0x0) {
    local_88 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_class_0269cd60);
  }
  puVar2 = PTR_s_colorInLightMode_DarkMode__026a3d00;
  pcVar3 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_88,PTR_s_respondsToSelector__026ca818,PTR_s_colorInLightMode_DarkMode__026a3d00);
  if (((ulong)pcVar3 & 1) == 0) {
    FUN_008cf6b8();
    bVar1 = ((ulong)pcVar3 & 1) == 0;
    local_c8 = PTR__OBJC_CLASS___UIColor_026cdf78;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_c8;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_c8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_c8;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
  }
  else {
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_88,puVar2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    local_18 = local_88;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
LAB_008cfe0c:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

