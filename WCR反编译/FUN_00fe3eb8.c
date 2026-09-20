// FUN_00fe3eb8 @ 00fe3eb8

void FUN_00fe3eb8(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  uint local_24;
  ulong local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_18 = (cfstringStruct *)0x0;
    local_24 = 1;
    goto LAB_00fe4140;
  }
  pcVar4 = &cf_MMThemeManager;
  _NSClassFromString();
  local_38 = (cfstringStruct *)0x0;
  local_30 = pcVar4;
  if ((pcVar4 != (cfstringStruct *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_sharedInstance_0269cd30),
     ((ulong)pcVar4 & 1) != 0)) {
    pcVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_sharedInstance_0269cd30);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_38;
    local_38 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
  }
  if (((local_38 == (cfstringStruct *)0x0) && (local_30 != (cfstringStruct *)0x0)) &&
     (pcVar4 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_sharedManager_0269db78),
     ((ulong)pcVar4 & 1) != 0)) {
    pcVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_sharedManager_0269db78);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_38;
    local_38 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
  }
  local_40 = PTR_s_getImageName__026ad500;
  if ((local_38 == (cfstringStruct *)0x0) ||
     (pcVar4 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_getImageName__026ad500),
     ((ulong)pcVar4 & 1) == 0)) {
LAB_00fe4120:
    local_18 = (cfstringStruct *)0x0;
    local_24 = 1;
  }
  else {
    pcVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,local_40,local_20);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_48 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
    pcVar4 = local_48;
    bVar1 = ((ulong)pcVar5 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar4;
    }
    local_24 = (uint)bVar1;
    _objc_storeStrong(&local_48,0);
    if (local_24 == 0) goto LAB_00fe4120;
  }
  _objc_storeStrong(&local_38,0);
LAB_00fe4140:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

