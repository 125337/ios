// mergedAlbumIconValue:withPath:mode: @ 0110a3a8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

ID WCRefinePluginIconCatalog::mergedAlbumIconValue_withPath_mode_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong uVar4;
  cfstringStruct *local_100;
  cfstringStruct *local_e0;
  bool local_b9;
  cfstringStruct *local_b8;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  bool local_91;
  cfstringStruct *local_90;
  byte local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined4 local_5c;
  cfstringStruct *local_58;
  ulong local_50;
  cfstringStruct *local_48;
  undefined8 local_40;
  SEL local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_5);
  pcVar1 = local_48;
  FUN_010f4f48();
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_normalizedAlbumIconValue__026aee98,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_5c = 1;
    local_28 = pcVar1;
  }
  else {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_relativeAlbumIconPathFromAbsolut_026aeea0,local_58);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_68;
      local_68 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_albumPathsForIconValue__026aeea8,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_count_0269cfe0);
    local_e0 = local_30;
    local_81 = 0;
    local_91 = false;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_e0 = &::cf___;
    }
    else {
      pcVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_objectAtIndexedSubscript__0269cc78,0);
      _objc_retainAutoreleasedReturnValue();
      local_81 = 1;
      local_80 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR_s_relativeAlbumIconPathFromAbsolut_026aeea0);
      _objc_retainAutoreleasedReturnValue();
      local_90 = local_e0;
    }
    local_91 = pcVar1 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = local_e0;
    if ((local_91 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    if ((local_81 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    pcVar1 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0);
    local_100 = local_30;
    local_b9 = pcVar1 < (cfstringStruct *)((long)&MACH_HEADER.magic + 2);
    if (local_b9) {
      local_100 = &::cf___;
    }
    else {
      local_a8 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_objectAtIndexedSubscript__0269cc78,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_100,PTR_s_relativeAlbumIconPathFromAbsolut_026aeea0);
      _objc_retainAutoreleasedReturnValue();
      local_b8 = local_100;
    }
    local_b9 = !local_b9;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = local_100;
    if (local_b9) {
      (*(code *)PTR__objc_release_02578630)(local_b8);
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    uVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if ((uVar4 & 1) == 0) {
      _objc_storeStrong(&local_78,local_68);
    }
    else {
      _objc_storeStrong(&local_a0,local_68);
    }
    pcVar1 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
    if ((pcVar1 == (cfstringStruct *)0x0) &&
       (pcVar1 = local_a0, (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0),
       pcVar1 == (cfstringStruct *)0x0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &::cf___;
    }
    else {
      pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_imagepair______);
      _objc_retainAutoreleasedReturnValue();
      local_28 = pcVar1;
    }
    local_5c = 1;
    _objc_storeStrong(&local_a0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

