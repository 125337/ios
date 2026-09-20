// FUN_0037807c @ 0037807c

byte FUN_0037807c(undefined8 param_1)

{
  ulong uVar1;
  byte local_28;
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
              (local_20,PTR_s_isEqualToString__0269ccc8,&cf_markInlineRead);
    local_28 = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_isEqualToString__0269ccc8,&cf_markInlineUnread);
      local_28 = 1;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_isEqualToString__0269ccc8,&cf_hideInlineSession);
        local_28 = 1;
        if ((uVar1 & 1) == 0) {
          uVar1 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_isEqualToString__0269ccc8,&cf_deleteInlineSession);
          local_28 = 1;
          if ((uVar1 & 1) == 0) {
            uVar1 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_20,PTR_s_isEqualToString__0269ccc8,&cf_markGroupRead);
            local_28 = 1;
            if ((uVar1 & 1) == 0) {
              uVar1 = local_20;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_20,PTR_s_isEqualToString__0269ccc8,&cf_markGroupUnread);
              local_28 = 1;
              if ((uVar1 & 1) == 0) {
                uVar1 = local_20;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_20,PTR_s_isEqualToString__0269ccc8,&cf_hideGroupSessions);
                local_28 = 1;
                if ((uVar1 & 1) == 0) {
                  uVar1 = local_20;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_20,PTR_s_isEqualToString__0269ccc8,&cf_deleteGroupSessions);
                  local_28 = 1;
                  if ((uVar1 & 1) == 0) {
                    uVar1 = local_20;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_20,PTR_s_isEqualToString__0269ccc8,&cf_secondaryMarkRead);
                    local_28 = 1;
                    if ((uVar1 & 1) == 0) {
                      uVar1 = local_20;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_20,PTR_s_isEqualToString__0269ccc8,&cf_secondaryMarkUnread);
                      local_28 = 1;
                      if ((uVar1 & 1) == 0) {
                        uVar1 = local_20;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_20,PTR_s_isEqualToString__0269ccc8,&cf_secondaryHideSession
                                  );
                        local_28 = 1;
                        if ((uVar1 & 1) == 0) {
                          uVar1 = local_20;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_20,PTR_s_isEqualToString__0269ccc8,
                                     &cf_secondaryDeleteSession);
                          local_28 = 1;
                          if ((uVar1 & 1) == 0) {
                            uVar1 = local_20;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_20,PTR_s_isEqualToString__0269ccc8,&cf_sessionUnhidden)
                            ;
                            local_28 = 1;
                            if ((uVar1 & 1) == 0) {
                              uVar1 = local_20;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_20,PTR_s_isEqualToString__0269ccc8,&cf_markUnread);
                              local_28 = 1;
                              if ((uVar1 & 1) == 0) {
                                uVar1 = local_20;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_20,PTR_s_isEqualToString__0269ccc8,&cf_markRead);
                                local_28 = 1;
                                if ((uVar1 & 1) == 0) {
                                  uVar1 = local_20;
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_20,PTR_s_isEqualToString__0269ccc8,
                                             &cf_sessionUpdated);
                                  local_28 = 1;
                                  if ((uVar1 & 1) == 0) {
                                    uVar1 = local_20;
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_20,PTR_s_isEqualToString__0269ccc8,
                                               &cf_swipePassthrough);
                                    local_28 = 1;
                                    if ((uVar1 & 1) == 0) {
                                      uVar1 = local_20;
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (local_20,PTR_s_isEqualToString__0269ccc8,
                                                 &cf_entryAction);
                                      local_28 = (byte)uVar1;
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
    local_11 = local_28 & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

