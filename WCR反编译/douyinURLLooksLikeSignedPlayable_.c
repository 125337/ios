// douyinURLLooksLikeSignedPlayable: @ 0102259c

/* Function Stack Size: 0x18 bytes */

bool WCRefineLinkParser::douyinURLLooksLikeSignedPlayable_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
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
    local_11 = 0;
    local_34 = 1;
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_douyinURLLooksLikeStaticOrPrevie_026add18,local_30);
    if ((IVar2 & 1) == 0) {
      IVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_URLLooksWatermarked__026add20,local_30);
      if ((IVar2 & 1) == 0) {
        IVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_douyinURLLooksUnsignedSyntheticP_026add28,local_30);
        if ((IVar2 & 1) == 0) {
          uVar1 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lowercaseString_0269d9c0);
          _objc_retainAutoreleasedReturnValue();
          local_40 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_containsString__0269d0b0,&cf_douyinvod_com);
          if ((uVar1 & 1) == 0) {
            uVar1 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_containsString__0269d0b0,&cf_x_expires);
            if ((((uVar1 & 1) == 0) &&
                (uVar1 = local_40,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_40,PTR_s_containsString__0269d0b0,&cf_x_signature),
                (uVar1 & 1) == 0)) &&
               (uVar1 = local_40,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_40,PTR_s_containsString__0269d0b0,&cf_x_tt_), (uVar1 & 1) == 0)) {
              uVar1 = local_40;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40,PTR_s_containsString__0269d0b0,&cf_download);
              if (((uVar1 & 1) == 0) ||
                 ((uVar1 = local_40,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_40,PTR_s_containsString__0269d0b0,&cf_douyin), (uVar1 & 1) == 0
                  && (uVar1 = local_40,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_40,PTR_s_containsString__0269d0b0,&cf_byte), (uVar1 & 1) == 0)
                  ))) {
                uVar1 = local_40;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_40,PTR_s_containsString__0269d0b0,
                           &cf_aweme_snssdk_com_aweme_v1_play_);
                if (((uVar1 & 1) == 0) &&
                   (uVar1 = local_40,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_40,PTR_s_containsString__0269d0b0,
                              &cf_iesdouyin_com_aweme_v1_play_), (uVar1 & 1) == 0)) {
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
          local_34 = 1;
          _objc_storeStrong(&local_40,0);
        }
        else {
          local_11 = 0;
          local_34 = 1;
        }
      }
      else {
        local_11 = 0;
        local_34 = 1;
      }
    }
    else {
      local_11 = 0;
      local_34 = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

