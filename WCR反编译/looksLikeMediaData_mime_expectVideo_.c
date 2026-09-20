// looksLikeMediaData:mime:expectVideo: @ 00ffeb08

/* Function Stack Size: 0x24 bytes */

bool WCRefineLinkMediaSender::looksLikeMediaData_mime_expectVideo_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  segment_command *psVar1;
  cfstringStruct *pcVar2;
  segment_command *psVar3;
  segment_command *local_b0;
  cfstringStruct *local_98;
  long local_78;
  cfstringStruct *local_48;
  undefined4 local_40;
  byte local_39;
  cfstringStruct *local_38;
  segment_command *local_30;
  SEL local_28;
  ID local_20;
  bool local_11;
  
  local_30 = (segment_command *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_4);
  local_39 = (byte)param_5;
  psVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (psVar1 < &segment_command_00000020) {
    local_11 = false;
    local_40 = 1;
  }
  else {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_98 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_98 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_98;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_text_html);
    if (((((ulong)pcVar2 & 1) == 0) &&
        (pcVar2 = local_48,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_containsString__0269d0b0,&cf_application_json),
        ((ulong)pcVar2 & 1) == 0)) &&
       (pcVar2 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_text_plain)
       , psVar1 = local_30, ((ulong)pcVar2 & 1) == 0)) {
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(psVar1,PTR_s_bytes_026a9630);
      psVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      if (((psVar3 < &MACH_HEADER.filetype) || ((char)psVar1->cmdsize != 'f')) ||
         ((*(char *)((long)&psVar1->cmdsize + 1) != 't' ||
          ((*(char *)((long)&psVar1->cmdsize + 2) != 'y' ||
           (*(char *)((long)&psVar1->cmdsize + 3) != 'p')))))) {
        if (((char)psVar1->cmd == -1) &&
           ((*(char *)((long)&psVar1->cmd + 1) == -0x28 && (*(char *)((long)&psVar1->cmd + 2) == -1)
            ))) {
          local_11 = true;
        }
        else if (((char)psVar1->cmd == -0x77) &&
                (((*(char *)((long)&psVar1->cmd + 1) == 'P' &&
                  (*(char *)((long)&psVar1->cmd + 2) == 'N')) &&
                 (*(char *)((long)&psVar1->cmd + 3) == 'G')))) {
          local_11 = true;
        }
        else {
          psVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
          if (((((psVar3 < &MACH_HEADER.filetype) || ((char)psVar1->cmd != 'R')) ||
               (*(char *)((long)&psVar1->cmd + 1) != 'I')) ||
              ((*(char *)((long)&psVar1->cmd + 2) != 'F' ||
               (*(char *)((long)&psVar1->cmd + 3) != 'F')))) ||
             ((psVar1->segname[0] != 'W' || (psVar1->segname[1] != 'E')))) {
            if (((((char)psVar1->cmd == 'I') && (*(char *)((long)&psVar1->cmd + 1) == 'D')) &&
                (*(char *)((long)&psVar1->cmd + 2) == '3')) ||
               (((char)psVar1->cmd == -1 && ((psVar1->cmd & 0xe000) == 0xe000)))) {
              local_11 = true;
            }
            else {
              local_b0 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
              if ((segment_command *)((long)&segment_command_00000020.vmaddr + 7) < local_b0) {
                local_b0 = (segment_command *)&segment_command_00000020.vmsize;
              }
              for (local_78 = 0; (segment_command *)(local_78 + 4U) <= local_b0;
                  local_78 = local_78 + 1) {
                if (((psVar1->segname[local_78 + -8] == 'f') &&
                    (psVar1->segname[local_78 + -7] == 't')) &&
                   ((psVar1->segname[local_78 + -6] == 'y' &&
                    (psVar1->segname[local_78 + -5] == 'p')))) {
                  local_11 = true;
                  goto LAB_00fff1b4;
                }
              }
              if ((local_39 & 1) == 0) {
                pcVar2 = local_48;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_48,PTR_s_containsString__0269d0b0,&cf_image);
                if (((((ulong)pcVar2 & 1) == 0) &&
                    (pcVar2 = local_48,
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_48,PTR_s_containsString__0269d0b0,&cf_audio),
                    ((ulong)pcVar2 & 1) == 0)) &&
                   (pcVar2 = local_48,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_48,PTR_s_containsString__0269d0b0,&cf_video),
                   ((ulong)pcVar2 & 1) == 0)) {
                  psVar1 = local_30;
                  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
                  local_11 = &dylib_command_00001ff0.dylib.current_version < psVar1;
                }
                else {
                  psVar1 = local_30;
                  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
                  local_11 = &section_000003d8.size < psVar1;
                }
              }
              else {
                pcVar2 = local_48;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_48,PTR_s_containsString__0269d0b0,&cf_video);
                local_11 = false;
                if (((ulong)pcVar2 & 1) != 0) {
                  psVar1 = local_30;
                  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
                  local_11 = (segment_command *)0x10000 < psVar1;
                }
              }
            }
          }
          else {
            local_11 = true;
          }
        }
      }
      else {
        local_11 = true;
      }
    }
    else {
      local_11 = false;
    }
LAB_00fff1b4:
    local_40 = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

