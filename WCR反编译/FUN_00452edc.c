// FUN_00452edc @ 00452edc

/* WARNING: Removing unreachable block (ram,0x0045328c) */

void FUN_00452edc(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  cfstringStruct *local_d0;
  cfstringStruct *local_88;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  cfstringStruct *local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  pcVar1 = &cf_other_local_emoticon_board_tab;
  local_30 = param_1;
  _WCRPluginIconResolvedIcon(&cf_other_local_emoticon_board_tab,&cf_icons_filled_sticker);
  _objc_retainAutoreleasedReturnValue();
  local_88 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_88 = &cf_icons_filled_sticker;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_88;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar2 = local_38;
  _WCRPluginIconValueIsAlbum();
  pcVar1 = local_38;
  local_28 = (cfstringStruct *)PTR_WCRefinePluginIconCatalog_026ce4e0;
  if (((ulong)pcVar2 & 1) != 0) {
    FUN_00453304();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4040000000000000,local_28,PTR_s_displayImageForIconValue_size_co_026a3cf8,pcVar1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_48 = 1;
    goto LAB_004532cc;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_d0 = &cf_icons_filled_sticker;
  }
  else {
    local_d0 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_d0;
  uVar4 = 0x4040000000000000;
  uVar3 = 0x4040000000000000;
  FUN_00454080();
  FUN_004536d0(uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  local_58 = local_d0;
  if (local_d0 == (cfstringStruct *)0x0) {
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_isEqualToString__0269ccc8,&cf_icons_filled_sticker);
    if (((ulong)pcVar1 & 1) == 0) {
      uVar4 = 0x4040000000000000;
      uVar3 = 0x4040000000000000;
      FUN_00454080();
      pcVar1 = &cf_icons_filled_sticker;
      FUN_004536d0(uVar3,uVar4);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_58;
      local_58 = pcVar1;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      local_28 = local_58;
      if (local_58 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        goto LAB_0045329c;
      }
    }
    pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,&cf_heart);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_d0;
  }
LAB_0045329c:
  local_48 = 1;
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
LAB_004532cc:
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

