// FUN_00f631b8 @ 00f631b8

void FUN_00f631b8(void)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char *local_38;
  uint local_2c;
  char *local_28;
  char *local_20;
  char *local_18;
  
  pcVar2 = "WCRefineHelper";
  _objc_getClass();
  local_20 = pcVar2;
  if ((pcVar2 != (char *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_navigationContrioller_0269d628),
     ((ulong)pcVar2 & 1) != 0)) {
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_navigationContrioller_0269d628);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    local_28 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    pcVar2 = local_28;
    bVar1 = ((ulong)pcVar3 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    local_2c = (uint)bVar1;
    _objc_storeStrong(&local_28,0);
    if (local_2c != 0) goto LAB_00f63334;
  }
  pcVar2 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  local_2c = 1;
  local_18 = pcVar2;
  _objc_storeStrong(&local_38,0);
LAB_00f63334:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

