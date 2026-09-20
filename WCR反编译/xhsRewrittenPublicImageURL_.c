// xhsRewrittenPublicImageURL: @ 01021564

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::xhsRewrittenPublicImageURL_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_b8;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  undefined1 local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  local_18 = local_30;
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_34 = 1;
  }
  else {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_containsString__0269d0b0,&cf__mp4);
    if (((((ulong)pcVar1 & 1) == 0) &&
        (pcVar1 = local_40,
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf__stream_),
        ((ulong)pcVar1 & 1) == 0)) &&
       (pcVar1 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf_sns_video),
       ((ulong)pcVar1 & 1) == 0)) {
      pcVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_containsString__0269d0b0,&cf_sns_img_hw_xhscdn_com);
      if (((((ulong)pcVar1 & 1) == 0) &&
          (pcVar1 = local_40,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_containsString__0269d0b0,&cf_sns_img_bd_xhscdn_com),
          ((ulong)pcVar1 & 1) == 0)) &&
         ((pcVar1 = local_40,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_containsString__0269d0b0,&cf_sns_img_qc_xhscdn_com),
          ((ulong)pcVar1 & 1) == 0 &&
          (pcVar1 = local_40,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_containsString__0269d0b0,&cf_ci_xiaohongshu_com),
          ((ulong)pcVar1 & 1) == 0)))) {
        pcVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_containsString__0269d0b0,&cf_xhscdn_com);
        if ((((ulong)pcVar1 & 1) == 0) &&
           (pcVar2 = local_40,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_40,PTR_s_containsString__0269d0b0,&cf_xiaohongshu_com),
           pcVar1 = local_30, ((ulong)pcVar2 & 1) == 0)) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = pcVar1;
          local_34 = 1;
        }
        else {
          pcVar1 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf_webpic);
          if ((((((ulong)pcVar1 & 1) == 0) &&
               ((((pcVar1 = local_40,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_40,PTR_s_containsString__0269d0b0,&cf_sns_webpic),
                  ((ulong)pcVar1 & 1) == 0 &&
                  (pcVar1 = local_40,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_40,PTR_s_containsString__0269d0b0,&cf_notes_pre_post),
                  ((ulong)pcVar1 & 1) == 0)) &&
                 (pcVar1 = local_40,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_40,PTR_s_containsString__0269d0b0,&cf__nd_),
                 ((ulong)pcVar1 & 1) == 0)) &&
                ((pcVar1 = local_40,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_40,PTR_s_containsString__0269d0b0,&cf__h5_),
                 ((ulong)pcVar1 & 1) == 0 &&
                 (pcVar1 = local_40,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_40,PTR_s_containsString__0269d0b0,&cf_imageview2),
                 ((ulong)pcVar1 & 1) == 0)))))) &&
              (pcVar1 = local_40,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40,PTR_s_containsString__0269d0b0,&cf__jpg), ((ulong)pcVar1 & 1) == 0
              )) && (((pcVar1 = local_40,
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_40,PTR_s_containsString__0269d0b0,&cf__jpeg),
                      ((ulong)pcVar1 & 1) == 0 &&
                      (pcVar1 = local_40,
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_40,PTR_s_containsString__0269d0b0,&cf__png),
                      ((ulong)pcVar1 & 1) == 0)) &&
                     (pcVar1 = local_40,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_40,PTR_s_containsString__0269d0b0,&cf__webp),
                     local_18 = local_30, ((ulong)pcVar1 & 1) == 0)))) {
            (*(code *)PTR__objc_retain_02578638)();
            local_34 = 1;
          }
          else {
            local_48 = (cfstringStruct *)0x0;
            pcVar1 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_containsString__0269d0b0,&cf_notes_pre_post_);
            local_49 = SUB81(pcVar1,0);
            if ((((ulong)pcVar1 & 1) != 0) &&
               (pcVar1 = local_40, puVar4 = PTR_s_rangeOfString__0269d838,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_40,PTR_s_rangeOfString__0269d838,&cf_notes_pre_post_),
               local_60 = pcVar1, local_58 = puVar4, pcVar1 != (cfstringStruct *)0x7fffffffffffffff)
               ) {
              pcVar2 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_30,PTR_s_substringFromIndex__0269d120,puVar4 + (long)pcVar1);
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = local_20;
              local_68 = pcVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_20,PTR_s_xhsFileTokenFromString__026add08,pcVar2);
              _objc_retainAutoreleasedReturnValue();
              pcVar1 = local_48;
              local_48 = pcVar3;
              (*(code *)PTR__objc_release_02578630)(pcVar1);
              _objc_storeStrong(&local_68,0);
            }
            pcVar1 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
            if (pcVar1 == (cfstringStruct *)0x0) {
              pcVar2 = local_20;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_20,PTR_s_xhsFileTokenFromString__026add08,local_30);
              _objc_retainAutoreleasedReturnValue();
              pcVar1 = local_48;
              local_48 = pcVar2;
              (*(code *)PTR__objc_release_02578630)(pcVar1);
            }
            pcVar2 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
            pcVar1 = local_30;
            if (pcVar2 == (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_18 = pcVar1;
              local_34 = 1;
            }
            else {
              pcVar1 = local_20;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_20,PTR_s_xhsPublicImageURLWithToken_pathH_026add10,local_48,local_30)
              ;
              _objc_retainAutoreleasedReturnValue();
              local_70 = pcVar1;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
              if (pcVar1 == (cfstringStruct *)0x0) {
                local_b8 = local_30;
              }
              else {
                local_b8 = local_70;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_18 = local_b8;
              local_34 = 1;
              _objc_storeStrong(&local_70,0);
            }
            _objc_storeStrong(&local_48,0);
          }
        }
      }
      else {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf_http___);
        local_18 = local_30;
        if (((ulong)pcVar1 & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_34 = 1;
        }
        else {
          pcVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_substringFromIndex__0269d120,7);
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = &cf_https___;
          (*(code *)PTR__objc_msgSend_02578628)
                    (&cf_https___,PTR_s_stringByAppendingString__0269d398);
          _objc_retainAutoreleasedReturnValue();
          local_18 = pcVar1;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          local_34 = 1;
        }
      }
    }
    else {
      pcVar1 = local_30;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
      local_34 = 1;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

