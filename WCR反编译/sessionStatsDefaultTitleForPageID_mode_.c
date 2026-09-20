// sessionStatsDefaultTitleForPageID:mode: @ 0212d914

/* Function Stack Size: 0x20 bytes */

ID WCRefineConfig::sessionStatsDefaultTitleForPageID_mode_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_118;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  if (param_4 == 2) {
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_words);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf_J_Yp;
      goto LAB_0212e18c;
    }
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_ai);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf_O___;
      goto LAB_0212e18c;
    }
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_summary);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf__g_W;
      goto LAB_0212e18c;
    }
  }
  if (param_4 == 3) {
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_awards);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf__YSKN;
      goto LAB_0212e18c;
    }
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_chat);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf_J_Y;
      goto LAB_0212e18c;
    }
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_visit);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &::cf_Sb;
      goto LAB_0212e18c;
    }
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_common);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf_qQT_J;
      goto LAB_0212e18c;
    }
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_gender);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf_hQ_YS___R;
      goto LAB_0212e18c;
    }
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_region);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf__YS0W_S;
      goto LAB_0212e18c;
    }
  }
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_speakers);
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_words);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_ai);
      if (((ulong)pcVar1 & 1) == 0) {
        pcVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_summary);
        if (((ulong)pcVar1 & 1) == 0) {
          pcVar1 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_types);
          if (((ulong)pcVar1 & 1) == 0) {
            pcVar1 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_isEqualToString__0269ccc8,&cf_gender);
            if (((ulong)pcVar1 & 1) == 0) {
              pcVar1 = local_40;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40,PTR_s_isEqualToString__0269ccc8,&cf_region);
              if (((ulong)pcVar1 & 1) == 0) {
                pcVar1 = local_40;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_40,PTR_s_isEqualToString__0269ccc8,&cf_watch);
                if (((ulong)pcVar1 & 1) == 0) {
                  pcVar1 = local_40;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_40,PTR_s_isEqualToString__0269ccc8,&cf_chat);
                  if (((ulong)pcVar1 & 1) == 0) {
                    pcVar1 = local_40;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_40,PTR_s_isEqualToString__0269ccc8,&cf_groupMsg);
                    if (((ulong)pcVar1 & 1) == 0) {
                      pcVar1 = local_40;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_40,PTR_s_isEqualToString__0269ccc8,&cf_age);
                      if (((ulong)pcVar1 & 1) == 0) {
                        pcVar1 = local_40;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_40,PTR_s_isEqualToString__0269ccc8,&cf_awards);
                        if (((ulong)pcVar1 & 1) == 0) {
                          pcVar1 = local_40;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_40,PTR_s_isEqualToString__0269ccc8,&cf_visit);
                          if (((ulong)pcVar1 & 1) == 0) {
                            pcVar1 = local_40;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_40,PTR_s_isEqualToString__0269ccc8,&cf_common);
                            if (((ulong)pcVar1 & 1) == 0) {
                              pcVar1 = local_40;
                              (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
                              if (pcVar1 == (cfstringStruct *)0x0) {
                                local_118 = &::cf___;
                              }
                              else {
                                local_118 = local_40;
                              }
                              (*(code *)PTR__objc_retain_02578638)();
                              local_28 = local_118;
                            }
                            else {
                              (*(code *)PTR__objc_retain_02578638)();
                              local_28 = &cf_qQT_J;
                            }
                          }
                          else {
                            (*(code *)PTR__objc_retain_02578638)();
                            local_28 = &::cf_Sb;
                          }
                        }
                        else {
                          (*(code *)PTR__objc_retain_02578638)();
                          local_28 = &cf__YSKN;
                        }
                      }
                      else {
                        (*(code *)PTR__objc_retain_02578638)();
                        local_28 = &cf__YSt_;
                      }
                    }
                    else {
                      (*(code *)PTR__objc_retain_02578638)();
                      local_28 = &cf_bvO;
                    }
                  }
                  else {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_28 = &::cf___;
                  }
                }
                else {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_28 = &::cf___;
                }
              }
              else {
                pcVar1 = &cf__YS0W_S;
                if (param_4 != 0) {
                  pcVar1 = &cf_0W_SR_;
                }
                (*(code *)PTR__objc_retain_02578638)();
                local_28 = pcVar1;
              }
            }
            else {
              pcVar1 = &cf__YS___R;
              if (param_4 != 0) {
                pcVar1 = &cf____RR_;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = pcVar1;
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = &cf_mo__;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf____;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf__J___;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf__Jp;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_kvuiUS;
  }
LAB_0212e18c:
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

