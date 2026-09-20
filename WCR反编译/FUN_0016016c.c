// FUN_0016016c @ 0016016c

void FUN_0016016c(void)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char *local_90;
  char *local_68;
  byte local_59;
  char *local_58;
  byte local_49;
  char *local_48;
  char *local_40 [3];
  char *local_28;
  char *local_20;
  char *local_18;
  
  pcVar2 = "MMThemeManager";
  _objc_getClass();
  FUN_0015f0b8();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = "WCColor";
  local_20 = pcVar2;
  _objc_getClass();
  local_49 = 0;
  local_59 = 0;
  local_28 = pcVar3;
  if ((pcVar3 == (char *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_Yellow_0269f750),
     ((ulong)pcVar3 & 1) == 0)) {
    local_90 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemYellowColor_0269f758);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = local_90;
  }
  else {
    local_90 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_Yellow_0269f750);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = local_90;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40[0] = local_90;
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if ((local_20 != (char *)0x0) &&
     (pcVar2 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_svgImageNamed_color__0269f760),
     ((ulong)pcVar2 & 1) != 0)) {
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_svgImageNamed_color__0269f760,&cf_icon_stick,local_40[0]);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    local_68 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    pcVar2 = local_68;
    bVar1 = ((ulong)pcVar3 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    _objc_storeStrong(&local_68,0);
    if (bVar1) goto LAB_001604a8;
  }
  local_18 = (char *)0x0;
LAB_001604a8:
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

