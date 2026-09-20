// FUN_01632e0c @ 01632e0c

void FUN_01632e0c(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  char *pcVar5;
  char *local_48;
  cfstringStruct *local_40;
  char *local_38;
  char *local_30;
  uint local_24;
  char *local_20;
  char *local_18;
  
  local_20 = (char *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  pcVar5 = local_20;
  if (((ulong)pcVar3 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar5;
    local_24 = 1;
    goto LAB_01633168;
  }
  pcVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (pcVar3 != (char *)0x0) {
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_24 = 1;
    local_18 = pcVar3;
    goto LAB_01633168;
  }
  pcVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_parentViewController_0269e500);
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar3;
  while (pcVar3 = local_30, local_30 != (char *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    pcVar5 = local_30;
    if (((ulong)pcVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar5;
      local_24 = 1;
      goto LAB_01633158;
    }
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (pcVar3 != (char *)0x0) {
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_24 = 1;
      local_18 = pcVar3;
      goto LAB_01633158;
    }
    pcVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_parentViewController_0269e500);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_30;
    local_30 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  pcVar3 = "CAppViewControllerManager";
  _objc_getClass();
  pcVar4 = &cf_getCurrentNavigationController;
  local_38 = pcVar3;
  _NSSelectorFromString();
  pcVar3 = local_38;
  local_40 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar4);
  if (((ulong)pcVar3 & 1) == 0) {
LAB_01633148:
    local_18 = (char *)0x0;
    local_24 = 1;
  }
  else {
    pcVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,local_40);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    local_48 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
    pcVar3 = local_48;
    bVar1 = ((ulong)pcVar5 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar3;
    }
    local_24 = (uint)bVar1;
    _objc_storeStrong(&local_48,0);
    if (local_24 == 0) goto LAB_01633148;
  }
LAB_01633158:
  _objc_storeStrong(&local_30,0);
LAB_01633168:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

