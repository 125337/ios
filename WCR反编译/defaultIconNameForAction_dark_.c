// defaultIconNameForAction:dark: @ 019b6d74

/* Function Stack Size: 0x1c bytes */

ID WCRefineFloatingTabBarButtonActionViewController::defaultIconNameForAction_dark_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_78;
  undefined *local_50;
  byte local_41;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_41 = (byte)param_4;
  if (local_40 == (cfstringStruct *)0x0) {
    local_78 = &::cf___;
  }
  else {
    local_78 = local_40;
  }
  puVar2 = PTR_WCRefineBottomBarLongPressActionSelector_026ce258;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineBottomBarLongPressActionSelector_026ce258,
             PTR_s_displayNameForStoredAction__026b6be8,local_78);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isEqualToString__0269ccc8,&cf_gSW);
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_6e);
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf__eN);
      if (((ulong)puVar2 & 1) == 0) {
        puVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_cN6e_);
        if (((ulong)puVar2 & 1) == 0) {
          puVar2 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&::cf_S);
          if (((ulong)puVar2 & 1) == 0) {
            puVar2 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_vd);
            if (((ulong)puVar2 & 1) == 0) {
              puVar2 = local_50;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_isEqualToString__0269ccc8,&cf_bvN_x);
              if (((ulong)puVar2 & 1) == 0) {
                puVar2 = local_50;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_50,PTR_s_isEqualToString__0269ccc8,&cf_Rbc_S);
                if (((ulong)puVar2 & 1) == 0) {
                  puVar2 = local_50;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_50,PTR_s_isEqualToString__0269ccc8,&cf_kb);
                  if (((ulong)puVar2 & 1) == 0) {
                    puVar2 = local_50;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_50,PTR_s_isEqualToString__0269ccc8,&cf_6eN>k);
                    if (((ulong)puVar2 & 1) == 0) {
                      puVar2 = local_50;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_50,PTR_s_isEqualToString__0269ccc8,&cf_eYRbc);
                      if (((((ulong)puVar2 & 1) == 0) &&
                          (puVar2 = local_50,
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_50,PTR_s_isEqualToString__0269ccc8,&cf_mEmRbc),
                          ((ulong)puVar2 & 1) == 0)) &&
                         (puVar2 = local_50,
                         (*(code *)PTR__objc_msgSend_02578628)
                                   (local_50,PTR_s_containsString__0269d0b0,&cf_r),
                         ((ulong)puVar2 & 1) == 0)) {
                        puVar2 = local_50;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_50,PTR_s_isEqualToString__0269ccc8,&cf_vP_QQbc);
                        if (((ulong)puVar2 & 1) == 0) {
                          puVar2 = local_50;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_50,PTR_s_isEqualToString__0269ccc8,&cf___);
                          if (((ulong)puVar2 & 1) == 0) {
                            puVar2 = local_50;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_50,PTR_s_isEqualToString__0269ccc8,&cf_d__cN);
                            if ((((ulong)puVar2 & 1) == 0) &&
                               (puVar2 = local_50,
                               (*(code *)PTR__objc_msgSend_02578628)
                                         (local_50,PTR_s_isEqualToString__0269ccc8,&cf__ed__),
                               ((ulong)puVar2 & 1) == 0)) {
                              (*(code *)PTR__objc_retain_02578638)();
                              local_28 = &::cf___;
                            }
                            else {
                              (*(code *)PTR__objc_retain_02578638)();
                              local_28 = &cf_icons_outlined_search;
                            }
                          }
                          else {
                            (*(code *)PTR__objc_retain_02578638)();
                            local_28 = &cf_note_regular;
                          }
                        }
                        else {
                          (*(code *)PTR__objc_retain_02578638)();
                          local_28 = &cf_gift_filled_icon;
                        }
                      }
                      else {
                        (*(code *)PTR__objc_retain_02578638)();
                        local_28 = &cf_icons_filled_image;
                      }
                    }
                    else {
                      (*(code *)PTR__objc_retain_02578638)();
                      local_28 = &cf_icons_filled_qr_code;
                    }
                  }
                  else {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_28 = &cf_icons_filled_scan;
                  }
                }
                else {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_28 = &cf_icons_filled_transfer;
                }
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_28 = &cf_icons_outlined_qr_code;
              }
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = &cf_icons_outlined_float_window_on;
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = &cf_icons_outlined_finder;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf_WeChat_Lab_Logo_light_small;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf_icons_outlined_wechatpay;
      }
    }
    else {
      pcVar1 = &cf_icons_outlined_colorful_favorites_dark;
      if ((local_41 & 1) == 0) {
        pcVar1 = &cf_icons_outlined_colorful_favorites;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar1;
    }
  }
  else {
    pcVar1 = &cf_icons_outlined_colorful_moment_dark;
    if ((local_41 & 1) == 0) {
      pcVar1 = &cf_icons_outlined_colorful_moment;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar1;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

