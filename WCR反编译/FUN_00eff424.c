// FUN_00eff424 @ 00eff424

/* WARNING: Removing unreachable block (ram,0x00eff59c) */

void FUN_00eff424(void)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *local_38;
  char *local_18;
  
  local_38 = "UIColor";
  _objc_getClass();
  if (local_38 == (char *)0x0) {
    local_38 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_class_0269cd60);
  }
  puVar1 = PTR_s_colorInLightMode_DarkMode__026a3d00;
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_colorInLightMode_DarkMode__026a3d00);
  if (((ulong)pcVar2 & 1) == 0) {
    local_18 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_38,puVar1,puVar3);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_18 = local_38;
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

