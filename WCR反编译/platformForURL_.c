// platformForURL: @ 01016930

/* Function Stack Size: 0x18 bytes */

long_long WCRefineLinkParser::platformForURL_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_78;
  cfstringStruct *local_48;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  long_long local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_18 = 0;
    local_34 = 1;
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSURL_026ce328;
    local_40 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_30);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar5;
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_78 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_78;
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf_douyin_com);
    if ((((uVar2 & 1) == 0) &&
        (uVar2 = local_40,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_containsString__0269d0b0,&cf_iesdouyin_com), (uVar2 & 1) == 0)) &&
       (uVar2 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf_douyin_cn),
       (uVar2 & 1) == 0)) {
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_containsString__0269d0b0,&cf_xiaohongshu_com);
      if ((((uVar2 & 1) == 0) &&
          (uVar2 = local_40,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_containsString__0269d0b0,&cf_xhslink_com), (uVar2 & 1) == 0)) &&
         ((uVar2 = local_40,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_containsString__0269d0b0,&cf_xhslink_cn), (uVar2 & 1) == 0 &&
          (uVar2 = local_40,
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf_xhs_cn),
          (uVar2 & 1) == 0)))) {
        pcVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_isEqualToString__0269ccc8,&cf_bilibili_com);
        if (((((ulong)pcVar3 & 1) == 0) &&
            (pcVar3 = local_48,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_hasSuffix__0269d018,&cf__bilibili_com),
            ((ulong)pcVar3 & 1) == 0)) &&
           ((pcVar3 = local_48,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_isEqualToString__0269ccc8,&cf_b23_tv),
            ((ulong)pcVar3 & 1) == 0 &&
            (pcVar3 = local_48,
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasSuffix__0269d018,&cf__b23_tv),
            ((ulong)pcVar3 & 1) == 0)))) {
          pcVar3 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_x_com);
          if ((((((ulong)pcVar3 & 1) == 0) &&
               (pcVar3 = local_48,
               (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasSuffix__0269d018,&cf__x_com),
               ((ulong)pcVar3 & 1) == 0)) &&
              (pcVar3 = local_48,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_48,PTR_s_isEqualToString__0269ccc8,&cf_twitter_com),
              ((ulong)pcVar3 & 1) == 0)) &&
             ((pcVar3 = local_48,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_48,PTR_s_hasSuffix__0269d018,&cf__twitter_com),
              ((ulong)pcVar3 & 1) == 0 &&
              (pcVar3 = local_48,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_48,PTR_s_isEqualToString__0269ccc8,&cf_t_co),
              ((ulong)pcVar3 & 1) == 0)))) {
            pcVar3 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_isEqualToString__0269ccc8,&cf_tiktok_com);
            if ((((ulong)pcVar3 & 1) == 0) &&
               (pcVar3 = local_48,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_48,PTR_s_hasSuffix__0269d018,&cf__tiktok_com),
               ((ulong)pcVar3 & 1) == 0)) {
              pcVar3 = local_48;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_48,PTR_s_isEqualToString__0269ccc8,&cf_instagram_com);
              if ((((ulong)pcVar3 & 1) == 0) &&
                 (pcVar3 = local_48,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_48,PTR_s_hasSuffix__0269d018,&cf__instagram_com),
                 ((ulong)pcVar3 & 1) == 0)) {
                pcVar3 = local_48;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_48,PTR_s_isEqualToString__0269ccc8,&cf_kuaishou_com);
                if ((((((ulong)pcVar3 & 1) == 0) &&
                     (pcVar3 = local_48,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_48,PTR_s_hasSuffix__0269d018,&cf__kuaishou_com),
                     ((ulong)pcVar3 & 1) == 0)) &&
                    (pcVar3 = local_48,
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_48,PTR_s_isEqualToString__0269ccc8,&cf_chenzhongtech_com),
                    ((ulong)pcVar3 & 1) == 0)) &&
                   (pcVar3 = local_48,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_48,PTR_s_hasSuffix__0269d018,&cf__chenzhongtech_com),
                   ((ulong)pcVar3 & 1) == 0)) {
                  pcVar3 = local_48;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_48,PTR_s_isEqualToString__0269ccc8,&cf_pipix_com);
                  if ((((ulong)pcVar3 & 1) == 0) &&
                     (pcVar3 = local_48,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_48,PTR_s_hasSuffix__0269d018,&cf__pipix_com),
                     ((ulong)pcVar3 & 1) == 0)) {
                    local_18 = 0;
                  }
                  else {
                    local_18 = 8;
                  }
                }
                else {
                  local_18 = 7;
                }
              }
              else {
                local_18 = 6;
              }
            }
            else {
              local_18 = 5;
            }
          }
          else {
            local_18 = 4;
          }
        }
        else {
          local_18 = 3;
        }
      }
      else {
        local_18 = 2;
      }
    }
    else {
      local_18 = 1;
    }
    local_34 = 1;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

