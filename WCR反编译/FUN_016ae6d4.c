// FUN_016ae6d4 @ 016ae6d4

void FUN_016ae6d4(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_80;
  cfstringStruct *local_58 [3];
  long local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == (cfstringStruct *)0x0) {
    local_28 = (cfstringStruct *)0x0;
    local_34 = 1;
  }
  else {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_uiMessageType_0269d0a8);
    local_40 = (long)(int)pcVar1;
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_nsContent_0269d0a0);
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_80 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58[0] = local_80;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_IsVideoMsg_0269da40);
    if ((((ulong)pcVar1 & 1) == 0) ||
       (pcVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_IsVideoMsg_0269da40)
       , ((ulong)pcVar1 & 1) == 0)) {
      if (local_40 == 1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf_text;
      }
      else if (local_40 == 0x22) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf_voice;
      }
      else if (local_40 == 3) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf_image;
      }
      else if (local_40 == 0x2a) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf_contact;
      }
      else if (local_40 == 0x2b) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf_video;
      }
      else if (local_40 == 0x2f) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf_emoticon;
      }
      else if (local_40 == 0x3e) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf_file;
      }
      else if (local_40 == 0x31) {
        pcVar1 = local_58[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58[0],PTR_s_containsString__0269d0b0,&cf_<refermsg);
        if (((ulong)pcVar1 & 1) == 0) {
          pcVar1 = local_58[0];
          FUN_016ad17c();
          if ((pcVar1 == (cfstringStruct *)0x28) || (pcVar1 == (cfstringStruct *)0x2a)) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = &cf_contact;
          }
          else if ((pcVar1 == (cfstringStruct *)0x2b) ||
                  ((pcVar1 == (cfstringStruct *)0x2c || (pcVar1 == (cfstringStruct *)0x2d)))) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = &cf_video;
          }
          else if ((pcVar1 == (cfstringStruct *)0x6) ||
                  ((pcVar1 == (cfstringStruct *)0x4a || (pcVar1 == (cfstringStruct *)0x8)))) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = &cf_file;
          }
          else if (pcVar1 == (cfstringStruct *)0x30) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = &cf_location;
          }
          else if ((pcVar1 == (cfstringStruct *)0x39) || (pcVar1 == (cfstringStruct *)0x3f)) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = &cf_favorite;
          }
          else if (((pcVar1 == (cfstringStruct *)0x5) ||
                   (((pcVar1 == (cfstringStruct *)0x13 || (pcVar1 == (cfstringStruct *)0x18)) ||
                    (pcVar1 == (cfstringStruct *)0x21)))) || (pcVar1 == (cfstringStruct *)0x24)) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = &cf_note;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = &cf_note;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf_text;
        }
      }
      else {
        local_28 = (cfstringStruct *)0x0;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf_video;
    }
    local_34 = 1;
    _objc_storeStrong(local_58,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

