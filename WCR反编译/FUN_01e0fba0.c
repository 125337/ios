// FUN_01e0fba0 @ 01e0fba0

void FUN_01e0fba0(void)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char *local_28;
  char *local_20;
  char *local_18;
  
  pcVar2 = "MMThemeManager";
  _objc_getClass();
  local_20 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_cellBackgroundColor_026c5b50);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_cellBackgroundColor_026c5b50);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_28 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    pcVar2 = local_28;
    bVar1 = ((ulong)pcVar3 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    _objc_storeStrong(&local_28,0);
    if (bVar1) goto LAB_01e0fccc;
  }
  pcVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondarySystemGroupedBackground_026ae530);
  _objc_retainAutoreleasedReturnValue();
  local_18 = pcVar2;
LAB_01e0fccc:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

