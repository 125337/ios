// FUN_008cfe24 @ 008cfe24

void FUN_008cfe24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  char *local_d8;
  char *local_90;
  undefined *local_88;
  char *local_80;
  bool local_71;
  char *local_70;
  char *local_68;
  char *local_60 [3];
  cfstringStruct *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  char *local_28;
  
  local_40 = 0;
  local_38 = param_1;
  uStack_30 = param_2;
  _objc_storeStrong(&local_40,param_3);
  pcVar2 = &cf_MMThemeManager;
  _NSClassFromString();
  local_48 = pcVar2;
  if (DAT_028ce2e8 == (char *)0x0) {
    pcVar3 = "MMServiceCenter";
    _objc_getClass();
    DAT_028ce2e8 = pcVar3;
  }
  local_d8 = DAT_028ce2e8;
  _objc_retainAutoreleaseReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  local_71 = false;
  bVar1 = local_48 == (cfstringStruct *)0x0;
  local_60[0] = local_d8;
  if (bVar1) {
    local_d8 = (char *)0x0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_getService__0269d170,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_d8;
  }
  local_71 = !bVar1;
  pcVar3 = local_d8;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_d8;
  if ((local_71 & 1U) != 0) {
    pcVar3 = local_70;
    (*(code *)PTR__objc_release_02578630)();
  }
  FUN_008cfa58();
  _objc_retainAutoreleasedReturnValue();
  local_88 = PTR_s_svgImageNamed_size_color_alpha__026a3d18;
  local_80 = pcVar3;
  if ((local_68 != (char *)0x0) &&
     (pcVar3 = local_68,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_68,PTR_s_respondsToSelector__026ca818,
                PTR_s_svgImageNamed_size_color_alpha__026a3d18), ((ulong)pcVar3 & 1) != 0)) {
    pcVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,uStack_30,0x3ff0000000000000,local_68,local_88,local_40,local_80);
    _objc_retainAutoreleasedReturnValue();
    local_90 = pcVar3;
    if (pcVar3 != (char *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar3;
    }
    _objc_storeStrong(&local_90,0);
    if (pcVar3 != (char *)0x0) goto LAB_008d0178;
  }
  if ((local_68 == (char *)0x0) ||
     (pcVar3 = local_68,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_svgImageNamed_color__0269f760),
     ((ulong)pcVar3 & 1) == 0)) {
    local_28 = (char *)0x0;
  }
  else {
    pcVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_svgImageNamed_color__0269f760,local_40,local_80);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar3;
  }
LAB_008d0178:
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(local_60,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

