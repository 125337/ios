// toDoImageExtensionFromDataUTI: @ 01ecdce8

/* Function Stack Size: 0x18 bytes */

ID WCRefineToDoListSettingsViewController::toDoImageExtensionFromDataUTI_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_70;
  ulong local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  uint local_34;
  ulong local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
    local_34 = 1;
  }
  else {
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___UTType_026cf608;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UTType_026cf608,PTR_s_typeWithIdentifier__026c5cb0,local_30);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_20;
    local_40 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_preferredFilenameExtension_026c7c78);
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_70 = &::cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_normalizedToDoBackgroundMediaExt_026c7c80,local_70);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    pcVar4 = local_48;
    bVar1 = pcVar3 != (cfstringStruct *)0x0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar4;
    }
    local_34 = (uint)bVar1;
    _objc_storeStrong(bVar1,&local_48);
    _objc_storeStrong(&local_40,0);
    if (local_34 == 0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_containsString__0269d0b0,&cf_png);
      if ((uVar2 & 1) == 0) {
        uVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,&cf_gif);
        if ((uVar2 & 1) == 0) {
          uVar2 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,&cf_webp);
          if ((uVar2 & 1) == 0) {
            uVar2 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,&cf_heic);
            if (((uVar2 & 1) == 0) &&
               (uVar2 = local_50,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_50,PTR_s_containsString__0269d0b0,&cf_heif), (uVar2 & 1) == 0)) {
              uVar2 = local_50;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_containsString__0269d0b0,&cf_jpeg);
              if (((uVar2 & 1) == 0) &&
                 (uVar2 = local_50,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_50,PTR_s_containsString__0269d0b0,&cf_jpg), (uVar2 & 1) == 0)) {
                (*(code *)PTR__objc_retain_02578638)();
                local_18 = &::cf___;
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_18 = &cf_jpg;
              }
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_18 = &cf_heic;
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = &cf_webp;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf_gif;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_png;
      }
      local_34 = 1;
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

