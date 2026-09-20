// _WCRefineDateFormatLooksLikePattern @ 00f1dccc

byte _WCRefineDateFormatLooksLikePattern(undefined8 param_1)

{
  ulong uVar1;
  byte local_30;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_00f1e13c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_yyyy);
    local_30 = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_yy);
      local_30 = 1;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_MM);
        local_30 = 1;
        if ((uVar1 & 1) == 0) {
          uVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_M);
          local_30 = 1;
          if ((uVar1 & 1) == 0) {
            uVar1 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_dd);
            local_30 = 1;
            if ((uVar1 & 1) == 0) {
              uVar1 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_d);
              local_30 = 1;
              if ((uVar1 & 1) == 0) {
                uVar1 = local_28;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_28,PTR_s_containsString__0269d0b0,&cf_HH);
                local_30 = 1;
                if ((uVar1 & 1) == 0) {
                  uVar1 = local_28;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_28,PTR_s_containsString__0269d0b0,&cf_H);
                  local_30 = 1;
                  if ((uVar1 & 1) == 0) {
                    uVar1 = local_28;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_28,PTR_s_containsString__0269d0b0,&cf_hh);
                    local_30 = 1;
                    if ((uVar1 & 1) == 0) {
                      uVar1 = local_28;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_28,PTR_s_containsString__0269d0b0,&cf_h);
                      local_30 = 1;
                      if ((uVar1 & 1) == 0) {
                        uVar1 = local_28;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_28,PTR_s_containsString__0269d0b0,&cf_mm);
                        local_30 = 1;
                        if ((uVar1 & 1) == 0) {
                          uVar1 = local_28;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_28,PTR_s_containsString__0269d0b0,&cf_m);
                          local_30 = 1;
                          if ((uVar1 & 1) == 0) {
                            uVar1 = local_28;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_28,PTR_s_containsString__0269d0b0,&cf_ss);
                            local_30 = 1;
                            if ((uVar1 & 1) == 0) {
                              uVar1 = local_28;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_28,PTR_s_containsString__0269d0b0,&cf_s);
                              local_30 = 1;
                              if ((uVar1 & 1) == 0) {
                                uVar1 = local_28;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_28,PTR_s_containsString__0269d0b0,&cf_a);
                                local_30 = 1;
                                if ((uVar1 & 1) == 0) {
                                  uVar1 = local_28;
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_28,PTR_s_containsString__0269d0b0,&cf_A);
                                  local_30 = 1;
                                  if ((uVar1 & 1) == 0) {
                                    uVar1 = local_28;
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_28,PTR_s_containsString__0269d0b0,&cf_b);
                                    local_30 = 1;
                                    if ((uVar1 & 1) == 0) {
                                      uVar1 = local_28;
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (local_28,PTR_s_containsString__0269d0b0,&cf_c);
                                      local_30 = 1;
                                      if ((uVar1 & 1) == 0) {
                                        uVar1 = local_28;
                                        (*(code *)PTR__objc_msgSend_02578628)
                                                  (local_28,PTR_s_containsString__0269d0b0,&cf_E);
                                        local_30 = 1;
                                        if ((uVar1 & 1) == 0) {
                                          uVar1 = local_28;
                                          (*(code *)PTR__objc_msgSend_02578628)
                                                    (local_28,PTR_s_containsString__0269d0b0,&cf_e);
                                          local_30 = (byte)uVar1;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    local_11 = local_30 & 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

