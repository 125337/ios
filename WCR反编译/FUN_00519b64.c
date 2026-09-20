// FUN_00519b64 @ 00519b64

void FUN_00519b64(undefined8 param_1)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char *local_38;
  undefined *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  
  local_20 = (char *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = "WCMicroMerchantUtil";
  _objc_getClass();
  local_30 = PTR_s_sortDataItemsWithCreateTime__026a4898;
  local_28 = pcVar2;
  if ((pcVar2 != (char *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,
                 PTR_s_sortDataItemsWithCreateTime__026a4898), ((ulong)pcVar2 & 1) != 0)) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,local_30,local_20);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_38 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    pcVar2 = local_38;
    bVar1 = ((ulong)pcVar3 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    _objc_storeStrong(&local_38,0);
    if (bVar1) goto LAB_00519cac;
  }
  pcVar2 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = pcVar2;
LAB_00519cac:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

