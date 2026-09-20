// officialColorCSSPath @ 015c6260

/* Function Stack Size: 0x10 bytes */

ID WCRefineWechatThemeStore::officialColorCSSPath(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined8 ***pppuVar2;
  char *pcVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 ***local_108;
  undefined8 ***local_f8;
  undefined8 ***local_e8;
  undefined8 ***local_d8;
  undefined8 ***local_d0;
  undefined8 ***local_c8;
  uint local_bc;
  undefined8 ***local_b8;
  bool local_a9;
  undefined8 ***local_a8;
  undefined8 ***local_a0;
  bool local_91;
  undefined8 ***local_90;
  undefined8 ***local_88;
  byte local_79;
  undefined8 ***local_78;
  undefined8 ***local_70;
  char *local_68;
  bool local_59;
  undefined8 ***local_58;
  undefined8 ***local_50;
  undefined8 ***local_48;
  SEL local_40;
  ID local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  
  pcVar3 = "MMServiceCenter";
  local_40 = param_2;
  local_38 = param_1;
  _objc_getClass();
  local_48 = (undefined8 ***)pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0);
  local_59 = false;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_d8 = (undefined8 ****)0x0;
  }
  else {
    local_d8 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_d8;
  }
  local_59 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_d8;
  if ((local_59 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  pcVar3 = "MMThemeManager";
  _objc_getClass();
  local_79 = 0;
  local_68 = pcVar3;
  if ((((undefined8 ****)local_50 == (undefined8 ****)0x0) || (pcVar3 == (char *)0x0)) ||
     (ppppuVar4 = (undefined8 ****)local_50,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
     ((ulong)ppppuVar4 & 1) == 0)) {
    local_e8 = (undefined8 ****)0x0;
  }
  else {
    local_e8 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getService__0269d170,local_68);
    _objc_retainAutoreleasedReturnValue();
    local_79 = 1;
    local_78 = local_e8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_e8;
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  ppppuVar4 = (undefined8 ****)local_70;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_currentTheme_026b0e20);
  local_91 = false;
  bVar1 = ((ulong)ppppuVar4 & 1) == 0;
  if (bVar1) {
    local_f8 = (undefined8 ****)0x0;
  }
  else {
    local_f8 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_currentTheme_026b0e20);
    _objc_retainAutoreleasedReturnValue();
    local_90 = local_f8;
  }
  local_91 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_f8;
  if ((local_91 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  ppppuVar4 = (undefined8 ****)local_88;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_88,PTR_s_respondsToSelector__026ca818,PTR_s_basePath_026b0e28);
  local_a9 = false;
  bVar1 = ((ulong)ppppuVar4 & 1) == 0;
  if (bVar1) {
    local_108 = (undefined8 ****)0x0;
  }
  else {
    local_108 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_basePath_026b0e28);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = local_108;
  }
  local_a9 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_a0 = local_108;
  if ((local_a9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a8);
  }
  ppppuVar5 = (undefined8 ****)local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
  ppppuVar4 = (undefined8 ****)0x0;
  if (ppppuVar5 != (undefined8 ****)0x0) {
    ppppuVar4 = (undefined8 ****)local_a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a0,PTR_s_stringByAppendingPathComponent__026cab30,&cf_color_css);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_b8 = ppppuVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar6);
    pppuVar2 = local_b8;
    bVar1 = ((ulong)puVar7 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_30 = pppuVar2;
    }
    local_bc = (uint)bVar1;
    ppppuVar4 = &local_b8;
    _objc_storeStrong(ppppuVar4,0);
    if (local_bc != 0) goto LAB_015c6740;
  }
  _CFBundleGetMainBundle();
  _CFBundleCopyResourceURL();
  local_c8 = ppppuVar4;
  local_28 = ppppuVar4;
  _objc_autoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = ppppuVar4;
  (*(code *)PTR__objc_msgSend_02578628)(ppppuVar4,PTR_s_path_0269d4d8);
  _objc_retainAutoreleasedReturnValue();
  local_bc = 1;
  local_30 = ppppuVar4;
  _objc_storeStrong(&local_d0,0);
LAB_015c6740:
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_30;
}

