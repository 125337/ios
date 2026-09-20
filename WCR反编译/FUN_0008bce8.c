// FUN_0008bce8 @ 0008bce8

byte FUN_0008bce8(undefined8 param_1)

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
              (local_20,PTR_s_isEqualToString__0269ccc8,&cf_TLProfileExpandableHeaderView);
    local_40 = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_isEqualToString__0269ccc8,&cf_TLProfileImageView);
      local_40 = 1;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_isEqualToString__0269ccc8,&cf_TextStateProfileTableView);
        local_40 = 1;
        if ((uVar1 & 1) == 0) {
          uVar1 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_isEqualToString__0269ccc8,&cf_WCTimelineTableView);
          local_40 = 1;
          if ((uVar1 & 1) == 0) {
            uVar1 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_20,PTR_s_isEqualToString__0269ccc8,&cf_MMTableView);
            local_40 = 1;
            if ((uVar1 & 1) == 0) {
              uVar1 = local_20;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_20,PTR_s_isEqualToString__0269ccc8,&cf_WCListView);
              local_40 = 1;
              if ((uVar1 & 1) == 0) {
                uVar1 = local_20;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_20,PTR_s_isEqualToString__0269ccc8,&cf_MMUIButton);
                local_40 = (byte)uVar1;
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

