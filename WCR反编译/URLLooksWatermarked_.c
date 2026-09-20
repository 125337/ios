// URLLooksWatermarked: @ 01021ca4

/* Function Stack Size: 0x18 bytes */

bool WCRefineLinkParser::URLLooksWatermarked_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 1;
    local_34 = 1;
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsString__0269d0b0,&cf_playwm);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf_logo_name_);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_containsString__0269d0b0,&cf_aweme_diversion);
        if ((uVar1 & 1) == 0) {
          uVar1 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_containsString__0269d0b0,&cf_watermark_1);
          if (((uVar1 & 1) == 0) &&
             (uVar1 = local_40,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_40,PTR_s_containsString__0269d0b0,&cf_watermark_3d1), (uVar1 & 1) == 0
             )) {
            uVar1 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_containsString__0269d0b0,&cf_tplv_dy_water);
            if (((uVar1 & 1) == 0) &&
               ((uVar1 = local_40,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_40,PTR_s_containsString__0269d0b0,&cf_tplv_dy_lqen_new_water),
                (uVar1 & 1) == 0 &&
                (uVar1 = local_40,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_40,PTR_s_containsString__0269d0b0,&cf__tplv_dy_lqen),
                (uVar1 & 1) == 0)))) {
              uVar1 = local_40;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40,PTR_s_containsString__0269d0b0,&cf_tplv_dy_aweme_images);
              if (((uVar1 & 1) == 0) &&
                 (uVar1 = local_40,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_40,PTR_s_containsString__0269d0b0,&cf_tplv_dy_resize),
                 (uVar1 & 1) == 0)) {
                uVar1 = local_40;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_40,PTR_s_containsString__0269d0b0,&cf__h5_);
                if ((uVar1 & 1) == 0) {
                  uVar1 = local_40;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_40,PTR_s_containsString__0269d0b0,&cf_wmtype_);
                  if (((uVar1 & 1) == 0) &&
                     (uVar1 = local_40,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_40,PTR_s_containsString__0269d0b0,&cf_wm_), (uVar1 & 1) == 0))
                  {
                    uVar1 = local_40;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_40,PTR_s_containsString__0269d0b0,&cf_sns_webpic_qc);
                    if (((uVar1 & 1) == 0) &&
                       (uVar1 = local_40,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_40,PTR_s_containsString__0269d0b0,&cf_webpic_qc),
                       (uVar1 & 1) == 0)) {
                      uVar1 = local_40;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_40,PTR_s_containsString__0269d0b0,
                                 &cf_www_douyin_com_aweme_v1_play);
                      if ((uVar1 & 1) == 0) {
                        local_11 = 0;
                      }
                      else {
                        local_11 = 1;
                      }
                    }
                    else {
                      local_11 = 1;
                    }
                  }
                  else {
                    local_11 = 1;
                  }
                }
                else {
                  local_11 = 1;
                }
              }
              else {
                local_11 = 1;
              }
            }
            else {
              local_11 = 1;
            }
          }
          else {
            local_11 = 1;
          }
        }
        else {
          local_11 = 1;
        }
      }
      else {
        local_11 = 1;
      }
    }
    else {
      local_11 = 1;
    }
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

