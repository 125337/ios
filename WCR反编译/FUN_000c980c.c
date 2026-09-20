// FUN_000c980c @ 000c980c

double FUN_000c980c(double param_1)

{
  bool bVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  char *local_30;
  cfstringStruct *local_28;
  char *local_20;
  double local_18;
  
  pcVar2 = "UIFont";
  _objc_getClass();
  pcVar3 = &cf_systemFont;
  local_20 = pcVar2;
  _NSSelectorFromString();
  if ((local_20 != (char *)0x0) &&
     (pcVar2 = local_20, local_28 = pcVar3,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar3),
     ((ulong)pcVar2 & 1) != 0)) {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    local_30 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((((ulong)pcVar2 & 1) == 0) ||
       (((*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lineHeight_0269e7d8), param_1 <= 1.0
        || (200.0 <= param_1)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
      local_18 = param_1;
    }
    _objc_storeStrong(&local_30,0);
    if (bVar1) {
      return local_18;
    }
  }
  return 30.0;
}

