// FUN_00109958 @ 00109958

void FUN_00109958(void)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char *local_48;
  uint local_40;
  char *local_30;
  undefined *local_28;
  char *local_20;
  char *local_18;
  
  pcVar2 = "WCColor";
  _objc_getClass();
  local_28 = PTR_s_Red_100_0269ee00;
  local_20 = pcVar2;
  if ((pcVar2 != (char *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_Red_100_0269ee00),
     ((ulong)pcVar2 & 1) != 0)) {
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_30 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    pcVar2 = local_30;
    bVar1 = ((ulong)pcVar3 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    local_40 = (uint)bVar1;
    _objc_storeStrong(&local_30,0);
    if (local_40 != 0) goto LAB_00109be8;
  }
  local_28 = PTR_s_Red_0269ee08;
  if ((local_20 != (char *)0x0) &&
     (pcVar2 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_Red_0269ee08),
     ((ulong)pcVar2 & 1) != 0)) {
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,local_28);
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
    local_40 = (uint)bVar1;
    _objc_storeStrong(&local_48,0);
    if (local_40 != 0) goto LAB_00109be8;
  }
  pcVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemRedColor_0269ee10);
  _objc_retainAutoreleasedReturnValue();
  local_18 = pcVar2;
LAB_00109be8:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

