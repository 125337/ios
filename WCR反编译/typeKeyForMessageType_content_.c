// typeKeyForMessageType:content: @ 010add3c

/* Function Stack Size: 0x20 bytes */

ID WCRefineMessageSyncRule::typeKeyForMessageType_content_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  uint local_cc;
  cfstringStruct *local_80;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  long_long local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  
  local_48 = (cfstringStruct *)0x0;
  local_40 = param_3;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_48,param_4);
  pcVar2 = local_48;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_80 = &::cf___;
  }
  else {
    local_80 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_80;
  if (local_40 == 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_text;
  }
  else if (local_40 == 3) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_image;
  }
  else if (local_40 == 0x22) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_voice;
  }
  else if (local_40 == 0x2a) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_contact;
  }
  else {
    if (local_40 != 0x2b) {
      if (local_40 == 0x2f) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf_emoticon;
        goto LAB_010ae2dc;
      }
      if (local_40 == 0x30) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf_location;
        goto LAB_010ae2dc;
      }
      if (local_40 == 0x31) {
        FUN_010ae30c(0);
        local_cc = 1;
        if (local_80 != (cfstringStruct *)0x39) {
          pcVar2 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lowercaseString_0269d9c0);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_cc = (uint)pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
        if ((local_cc & 1) == 0) {
          if (local_80 == (cfstringStruct *)0x13) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = &cf_chatrecord;
          }
          else if ((local_80 == (cfstringStruct *)0x28) || (local_80 == (cfstringStruct *)0x2a)) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = &cf_contact;
          }
          else if ((local_80 == (cfstringStruct *)0x2b) ||
                  ((local_80 == (cfstringStruct *)0x2c || (local_80 == (cfstringStruct *)0x2d)))) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = &cf_video;
          }
          else if ((local_80 == (cfstringStruct *)0x6) ||
                  ((local_80 == (cfstringStruct *)0x8 || (local_80 == (cfstringStruct *)0x4a)))) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = &cf_file;
          }
          else if (local_80 == (cfstringStruct *)0x30) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = &cf_location;
          }
          else if ((((local_80 == (cfstringStruct *)0x5) || (local_80 == (cfstringStruct *)0x21)) ||
                   (local_80 == (cfstringStruct *)0x24)) ||
                  ((local_80 == (cfstringStruct *)0x33 || (local_80 == (cfstringStruct *)0x3f)))) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = &cf_link;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = &cf_other;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf_refer;
        }
        goto LAB_010ae2dc;
      }
      if (local_40 != 0x32) {
        local_28 = (cfstringStruct *)0x0;
        goto LAB_010ae2dc;
      }
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_video;
  }
LAB_010ae2dc:
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

