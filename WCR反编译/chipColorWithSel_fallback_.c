// chipColorWithSel:fallback: @ 01b6350c

/* Function Stack Size: 0x20 bytes */

ID WCRefineLocalEmoticonLibraryViewController::chipColorWithSel_fallback_
             (ID param_1,SEL param_2,SEL param_3,ID param_4)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char *local_48;
  char *local_40;
  char *local_38;
  SEL local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  local_38 = (char *)0x0;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_38,param_4);
  pcVar2 = "WCColor";
  _objc_getClass();
  local_40 = pcVar2;
  if (((pcVar2 != (char *)0x0) && (local_30 != 0)) &&
     ((*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_respondsToSelector__026ca818,local_30),
     ((ulong)pcVar2 & 1) != 0)) {
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,local_30);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_48 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    pcVar2 = local_48;
    bVar1 = ((ulong)pcVar3 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    _objc_storeStrong(&local_48,0);
    if (bVar1) goto LAB_01b63660;
  }
  pcVar2 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = pcVar2;
LAB_01b63660:
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

