// scopeTextForGroup: @ 01abd3d0

/* Function Stack Size: 0x18 bytes */

ID WCRGroupListViewController::scopeTextForGroup_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scope_0269ea90);
  if (uVar1 == 0x1f) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_mTO;
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scope_0269ea90);
    if (uVar1 == 0x20) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_n_vvJ_Y;
    }
    else {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scope_0269ea90);
      if (uVar1 == 0x40) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf__gmo_;
      }
      else {
        uVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scope_0269ea90);
        if (uVar1 == 0x80) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &::cf__;
        }
        else {
          uVar1 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scope_0269ea90);
          if (((uint)uVar1 >> 1 & 1) == 0) {
            uVar1 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scope_0269ea90);
            if ((uVar1 & 1) == 0) {
              uVar1 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scope_0269ea90);
              if (uVar1 == 4) {
                (*(code *)PTR__objc_retain_02578638)();
                local_18 = &cf_ON_OT_N;
              }
              else {
                uVar1 = local_30;
                (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scope_0269ea90);
                if (uVar1 == 0x10) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_18 = &cf_lQOS;
                }
                else {
                  uVar1 = local_30;
                  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scope_0269ea90);
                  if (uVar1 == 8) {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_18 = &cf_gRS;
                  }
                  else {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_18 = &cf_vQN;
                  }
                }
              }
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_18 = &cf_yJ;
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = &cf__J;
          }
        }
      }
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

