// FUN_01ad5b10 @ 01ad5b10

byte FUN_01ad5b10(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  byte local_70;
  byte local_6c;
  cfstringStruct *local_60;
  cfstringStruct *local_48;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  byte local_11;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == (cfstringStruct *)0x0) ||
     (((pcVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_scope_0269ea90),
       pcVar1 != (cfstringStruct *)0x20 &&
       (pcVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_scope_0269ea90),
       pcVar1 != (cfstringStruct *)0x40)) &&
      (pcVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_scope_0269ea90),
      pcVar1 != (cfstringStruct *)0x80)))) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_avatarSource_026a3170);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_48 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_48;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_avatarValue_026a3178);
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_60 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_60;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if ((pcVar1 == (cfstringStruct *)0x0) ||
       (pcVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
       pcVar1 == (cfstringStruct *)0x0)) {
      local_11 = 1;
    }
    else {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_official);
      local_6c = 0;
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_isEqualToString__0269ccc8,&cf_icons_filled_chatbox);
        local_70 = 1;
        if (((ulong)pcVar1 & 1) == 0) {
          pcVar1 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_isEqualToString__0269ccc8,&cf_wcrefine_quick_pinned);
          local_70 = 1;
          if (((ulong)pcVar1 & 1) == 0) {
            pcVar1 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_38,PTR_s_isEqualToString__0269ccc8,&cf_wcrefine_quick_unread);
            local_70 = 1;
            if (((ulong)pcVar1 & 1) == 0) {
              pcVar1 = local_38;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_38,PTR_s_isEqualToString__0269ccc8,&cf_wcrefine_quick_atme);
              local_70 = (byte)pcVar1;
            }
          }
        }
        local_6c = local_70;
      }
      local_11 = local_6c & 1;
    }
    local_24 = 1;
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

