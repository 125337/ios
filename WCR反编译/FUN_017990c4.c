// FUN_017990c4 @ 017990c4

void FUN_017990c4(void)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char *local_40;
  uint local_38;
  char *local_28;
  char *local_20;
  char *local_18;
  
  if (DAT_028e4078 == (char *)0x0) {
    pcVar2 = "CAppViewControllerManager";
    _objc_getClass();
    DAT_028e4078 = pcVar2;
  }
  pcVar2 = DAT_028e4078;
  _objc_retainAutoreleaseReturnValue();
  local_20 = pcVar2;
  if ((pcVar2 != (char *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,
                 PTR_s_getCurrentNavigationController_0269d620), ((ulong)pcVar2 & 1) != 0)) {
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getCurrentNavigationController_0269d620);
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
    local_38 = (uint)bVar1;
    _objc_storeStrong(&local_28,0);
    if (local_38 != 0) goto LAB_017992bc;
  }
  pcVar2 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  local_38 = 1;
  local_18 = pcVar2;
  _objc_storeStrong(&local_40,0);
LAB_017992bc:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

