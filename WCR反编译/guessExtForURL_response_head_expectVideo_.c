// guessExtForURL:response:head:expectVideo: @ 00fff544

/* Function Stack Size: 0x2c bytes */

ID WCRefineLinkMediaSender::guessExtForURL_response_head_expectVideo_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,bool param_6)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  cfstringStruct *local_b8;
  undefined *local_80;
  byte local_71;
  char *local_70;
  ulong local_68;
  cfstringStruct *local_60;
  byte local_51;
  char *local_50;
  cfstringStruct *local_48;
  ulong local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = (char *)0x0;
  _objc_storeStrong(&local_50,param_5);
  local_51 = (byte)param_6;
  pcVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_MIMEType_026aaf40);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_b8 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_b8 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_b8;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  uVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_68 = uVar4;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  pcVar5 = local_50;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_bytes_026a9630);
  pcVar6 = local_50;
  local_70 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  local_71 = false;
  if (((((char *)((long)&MACH_HEADER.cpusubtype + 3) < pcVar6) &&
       (local_71 = false, local_70[4] == 'f')) && (local_71 = false, local_70[5] == 't')) &&
     (local_71 = false, local_70[6] == 'y')) {
    local_71 = local_70[7] == 'p';
  }
  local_80 = (undefined *)0x0;
  if (((bool)local_71 != false) &&
     (pcVar5 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
     (char *)((long)&MACH_HEADER.cpusubtype + 3) < pcVar5)) {
    puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar8 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = local_80;
    local_80 = puVar8;
    (*(code *)PTR__objc_release_02578630)(puVar9);
    (*(code *)PTR__objc_release_02578630)(puVar7);
  }
  puVar9 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_hasPrefix__0269d320,&cf_hei);
  if (((((ulong)puVar9 & 1) == 0) &&
      (puVar9 = local_80,
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isEqualToString__0269ccc8,&cf_mif1),
      ((ulong)puVar9 & 1) == 0)) &&
     (puVar9 = local_80,
     (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isEqualToString__0269ccc8,&cf_msf1),
     ((ulong)puVar9 & 1) == 0)) {
    if (((((local_71 & 1) == 0) &&
         (pcVar1 = local_60,
         (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_containsString__0269d0b0,&cf_mp4),
         ((ulong)pcVar1 & 1) == 0)) &&
        (uVar3 = local_68,
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,&cf_mp4),
        (uVar3 & 1) == 0)) &&
       ((pcVar1 = local_60,
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_containsString__0269d0b0,&cf_video),
        ((ulong)pcVar1 & 1) == 0 || ((local_51 & 1) == 0)))) {
      pcVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_containsString__0269d0b0,&cf_jpeg);
      if ((((((ulong)pcVar1 & 1) == 0) &&
           ((pcVar1 = local_60,
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_containsString__0269d0b0,&cf_jpg),
            ((ulong)pcVar1 & 1) == 0 &&
            (uVar3 = local_68,
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,&cf_jpg),
            (uVar3 & 1) == 0)))) &&
          (uVar3 = local_68,
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,&cf_jpeg),
          (uVar3 & 1) == 0)) &&
         (((pcVar5 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0)
           , pcVar5 < (char *)((long)&MACH_HEADER.magic + 3) || (*local_70 != -1)) ||
          (local_70[1] != -0x28)))) {
        pcVar1 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_containsString__0269d0b0,&cf_png);
        if ((((ulong)pcVar1 & 1) == 0) &&
           (uVar3 = local_68,
           (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,&cf_png),
           (uVar3 & 1) == 0)) {
          pcVar1 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_containsString__0269d0b0,&cf_webp);
          if ((((ulong)pcVar1 & 1) == 0) &&
             (uVar3 = local_68,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_68,PTR_s_isEqualToString__0269ccc8,&cf_webp), (uVar3 & 1) == 0)) {
            pcVar1 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_containsString__0269d0b0,&cf_mpeg);
            if (((((ulong)pcVar1 & 1) == 0) &&
                (pcVar1 = local_60,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_60,PTR_s_containsString__0269d0b0,&cf_mp3),
                ((ulong)pcVar1 & 1) == 0)) &&
               (uVar3 = local_68,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_68,PTR_s_isEqualToString__0269ccc8,&cf_mp3), (uVar3 & 1) == 0)) {
              pcVar1 = local_60;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_60,PTR_s_containsString__0269d0b0,&cf_mp4a);
              if (((((ulong)pcVar1 & 1) == 0) &&
                  (pcVar1 = local_60,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_60,PTR_s_containsString__0269d0b0,&cf_m4a),
                  ((ulong)pcVar1 & 1) == 0)) &&
                 (uVar3 = local_68,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_68,PTR_s_isEqualToString__0269ccc8,&cf_m4a), (uVar3 & 1) == 0)) {
                pcVar1 = local_60;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_60,PTR_s_containsString__0269d0b0,&cf_video);
                if ((((ulong)pcVar1 & 1) == 0) && ((local_51 & 1) == 0)) {
                  pcVar1 = local_60;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_60,PTR_s_containsString__0269d0b0,&cf_image);
                  if (((ulong)pcVar1 & 1) == 0) {
                    pcVar1 = local_60;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_60,PTR_s_containsString__0269d0b0,&cf_audio);
                    if (((ulong)pcVar1 & 1) == 0) {
                      (*(code *)PTR__objc_retain_02578638)();
                      local_28 = &cf_bin;
                    }
                    else {
                      (*(code *)PTR__objc_retain_02578638)();
                      local_28 = &cf_m4a;
                    }
                  }
                  else {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_28 = &cf_jpg;
                  }
                }
                else {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_28 = &cf_mp4;
                }
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_28 = &cf_m4a;
              }
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = &cf_mp3;
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = &cf_webp;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf_png;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf_jpg;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf_mp4;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_heic;
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

