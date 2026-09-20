// FUN_01df5af8 @ 01df5af8

void FUN_01df5af8(void)

{
  bool bVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar2 = "MMThemeManager";
  _objc_getClass();
  local_20 = (cfstringStruct *)pcVar2;
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
    pcVar5 = local_28;
    bVar1 = ((ulong)pcVar3 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar5;
    }
    _objc_storeStrong(&local_28,0);
    if (bVar1) goto LAB_01df5c54;
  }
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondarySystemGroupedBackground_026ae530);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = &cf_cellBackgroundColor;
  FUN_01dfa510();
  _objc_retainAutoreleasedReturnValue();
  local_18 = pcVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
LAB_01df5c54:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

