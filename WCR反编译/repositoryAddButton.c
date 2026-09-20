// repositoryAddButton @ 01fb91f4

/* Function Stack Size: 0x10 bytes */

ID WCRefineWechatThemeManagerViewController::repositoryAddButton(ID param_1,SEL param_2)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char *local_40;
  undefined *local_38;
  char *local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  pcVar2 = "MMUICommonUtil";
  local_28 = param_2;
  local_20 = param_1;
  _objc_getClass();
  local_38 = PTR_s_getBarButtonWithImageName_target_026b47f8;
  local_30 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_respondsToSelector__026ca818,
             PTR_s_getBarButtonWithImageName_target_026b47f8);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,local_38,&cf_icons_outlined_addoutline,local_20,
               PTR_s_showRepositoryActions_026c9ec0,2,&cf_mR_N);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    local_40 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIBarButtonItem_026ce058,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    pcVar2 = local_40;
    bVar1 = ((ulong)pcVar3 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    _objc_storeStrong(&local_40,0);
    if (bVar1) goto LAB_01fb9358;
  }
  pcVar2 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_18 = pcVar2;
LAB_01fb9358:
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

