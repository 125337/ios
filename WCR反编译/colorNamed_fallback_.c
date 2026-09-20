// colorNamed:fallback: @ 010ed6d0

/* Function Stack Size: 0x20 bytes */

ID WCRefineOfficialTheme::colorNamed_fallback_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  char *pcVar2;
  long lVar3;
  char *pcVar4;
  undefined *puVar5;
  char *local_50;
  char *local_48;
  uint local_3c;
  char *local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = (char *)0x0;
  _objc_storeStrong(&local_38,param_4);
  lVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  pcVar4 = local_38;
  if (lVar3 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar4;
    local_3c = 1;
  }
  else {
    pcVar4 = "WCColor";
    _objc_getClass();
    local_48 = pcVar4;
    if (pcVar4 != (char *)0x0) {
      lVar3 = local_30;
      _NSSelectorFromString();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,lVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_50 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
      pcVar2 = local_50;
      bVar1 = ((ulong)pcVar4 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar2;
      }
      local_3c = (uint)bVar1;
      _objc_storeStrong(&local_50,0);
      if (local_3c != 0) goto LAB_010ed8dc;
    }
    pcVar4 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar4;
    local_3c = 1;
  }
LAB_010ed8dc:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

