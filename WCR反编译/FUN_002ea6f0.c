// FUN_002ea6f0 @ 002ea6f0

byte FUN_002ea6f0(undefined8 param_1)

{
  ulong uVar1;
  byte local_40;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_isEqualToString__0269ccc8,&cf_WAWebViewController);
    local_40 = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_hasPrefix__0269d320,&cf_WAWebViewController);
      local_40 = 1;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_containsString__0269d0b0,&cf_YYWAWebView);
        local_40 = 1;
        if ((uVar1 & 1) == 0) {
          uVar1 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_containsString__0269d0b0,&cf_WAWebView);
          local_40 = 1;
          if ((uVar1 & 1) == 0) {
            uVar1 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_20,PTR_s_containsString__0269d0b0,&cf_JITRuntimeView);
            local_40 = 1;
            if ((uVar1 & 1) == 0) {
              uVar1 = local_20;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_20,PTR_s_containsString__0269d0b0,&cf_WeApp);
              local_40 = 1;
              if ((uVar1 & 1) == 0) {
                uVar1 = local_20;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_20,PTR_s_containsString__0269d0b0,&cf_WeAppCore);
                local_40 = 1;
                if ((uVar1 & 1) == 0) {
                  uVar1 = local_20;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_20,PTR_s_containsString__0269d0b0,&cf_AppBrand);
                  local_40 = 1;
                  if ((uVar1 & 1) == 0) {
                    uVar1 = local_20;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_20,PTR_s_containsString__0269d0b0,&cf_MiniProgram);
                    local_40 = 1;
                    if ((uVar1 & 1) == 0) {
                      uVar1 = local_20;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_20,PTR_s_hasPrefix__0269d320,&cf_WAGame);
                      local_40 = 1;
                      if ((uVar1 & 1) == 0) {
                        uVar1 = local_20;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_20,PTR_s_hasPrefix__0269d320,&cf_WAApp);
                        local_40 = (byte)uVar1;
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
    local_11 = local_40 & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

