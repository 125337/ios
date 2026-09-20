// FUN_001b4b3c @ 001b4b3c

void FUN_001b4b3c(undefined8 param_1)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char *local_48 [3];
  char *local_30;
  char *local_28;
  undefined8 local_20;
  char *local_18;
  
  local_28 = (char *)0x0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  pcVar2 = "WCColor";
  _objc_getClass();
  local_30 = pcVar2;
  if ((pcVar2 != (char *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_respondsToSelector__026ca818,local_20),
     ((ulong)pcVar2 & 1) != 0)) {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,local_20);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_48[0] = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    pcVar2 = local_48[0];
    bVar1 = ((ulong)pcVar3 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    _objc_storeStrong(local_48,0);
    if (bVar1) goto LAB_001b4cd8;
  }
  pcVar2 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = pcVar2;
LAB_001b4cd8:
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

