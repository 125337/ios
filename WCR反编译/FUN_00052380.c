// FUN_00052380 @ 00052380

undefined8 FUN_00052380(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_80;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  int local_38;
  uint local_24;
  cfstringStruct *local_20;
  undefined8 local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (cfstringStruct *)0x0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_IsImgMsg_0269da38);
    if ((((ulong)pcVar2 & 1) == 0) ||
       (pcVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_IsImgMsg_0269da38),
       ((ulong)pcVar2 & 1) == 0)) {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_IsVideoMsg_0269da40);
      if ((((ulong)pcVar2 & 1) == 0) ||
         (pcVar2 = local_20,
         (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_IsVideoMsg_0269da40),
         ((ulong)pcVar2 & 1) == 0)) {
        pcVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_IsFileMsg_0269da48);
        if ((((ulong)pcVar2 & 1) == 0) ||
           (pcVar2 = local_20,
           (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_IsFileMsg_0269da48),
           ((ulong)pcVar2 & 1) == 0)) {
          pcVar2 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_uiMessageType_0269d0a8);
          local_38 = (int)pcVar2;
          if (local_38 == 3) {
            local_18 = 1;
            local_24 = 1;
          }
          else if (local_38 == 0x2b) {
            local_18 = 2;
            local_24 = 1;
          }
          else if (local_38 == 0x3e) {
            local_18 = 4;
            local_24 = 1;
          }
          else {
            if (local_38 == 0x31) {
              pcVar2 = local_20;
              (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsContent_0269d0a0);
              _objc_retainAutoreleasedReturnValue();
              local_80 = pcVar2;
              if (pcVar2 == (cfstringStruct *)0x0) {
                local_80 = &cf___;
              }
              FUN_00054d2c();
              (*(code *)PTR__objc_release_02578630)(pcVar2);
              local_40 = local_80;
              if (((local_80 == (cfstringStruct *)0x2b) || (local_80 == (cfstringStruct *)0x2c)) ||
                 (local_80 == (cfstringStruct *)0x2d)) {
                local_18 = 2;
                local_24 = 1;
                goto LAB_00052840;
              }
              if (((local_80 == (cfstringStruct *)0x6) || (local_80 == (cfstringStruct *)0x4a)) ||
                 (local_80 == (cfstringStruct *)0x8)) {
                local_18 = 4;
                local_24 = 1;
                goto LAB_00052840;
              }
              pcVar2 = local_20;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_20,PTR_s_respondsToSelector__026ca818,
                         PTR_s_GetAppAttachmentPath_0269da50);
              if (((ulong)pcVar2 & 1) != 0) {
                pcVar2 = local_20;
                (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_GetAppAttachmentPath_0269da50);
                _objc_retainAutoreleasedReturnValue();
                pcVar3 = pcVar2;
                FUN_0004fa34();
                _objc_retainAutoreleasedReturnValue();
                local_48 = pcVar3;
                (*(code *)PTR__objc_release_02578630)(pcVar2);
                pcVar2 = local_48;
                (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
                bVar1 = pcVar2 != (cfstringStruct *)0x0;
                if (bVar1) {
                  local_18 = 4;
                }
                local_24 = (uint)bVar1;
                _objc_storeStrong(bVar1,&local_48,0);
                if (local_24 != 0) goto LAB_00052840;
              }
            }
            local_18 = 0;
            local_24 = 1;
          }
        }
        else {
          local_18 = 4;
          local_24 = 1;
        }
      }
      else {
        local_18 = 2;
        local_24 = 1;
      }
    }
    else {
      local_18 = 1;
      local_24 = 1;
    }
  }
LAB_00052840:
  _objc_storeStrong(&local_20,0);
  return local_18;
}

